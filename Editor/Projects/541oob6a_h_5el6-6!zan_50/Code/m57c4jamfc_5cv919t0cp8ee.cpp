/******************************************************************************/
flt Scale=4;
int Res=256, Octaves=1, TransFunc=0;
uint Seed=0;
Image image;
/******************************************************************************/
void SetNoise()
{
   image.mustCreate2D(Res, Res, IMAGE_L8, 1);
   if(image.lock())
   {
      SimplexNoise noise=Seed; // initialize with custom seed
      Vec2 mul=Scale/(image.size()-1);
      flt (*transform)(flt noise); // pointer to a transform function
      switch(TransFunc)
      {
         default: transform=null; break;
         case  1: transform=NoiseMountain; break;
         case  2: transform=NoiseOrganic; break;
         case  3: transform=NoiseElectric; break;
         case  4: transform=NoiseAbsSqr; break;
         case  5: transform=NoiseCbrt; break;
         case  6: transform=NoiseSqrt; break;
         case  7: transform=NoiseSqr; break;
         case  8: transform=NoiseCube; break;
      }
      REPD(y, image.h())
      REPD(x, image.w())
      {
         flt n=noise.noise2(x*mul.x, y*mul.y, Octaves, 0.5, transform); // get 2-dimensional noise
         image.pixelF(x, y, n*0.5+0.5);
      }
      image.unlock();
   }
}
void SetRes      (int  res      ) {Clamp(res    , 16 , 2048); if(Res      !=res      ){Res      =res      ; SetNoise();}}
void SetSeed     (uint seed     ) {                           if(Seed     !=seed     ){Seed     =seed     ; SetNoise();}}
void SetOctaves  (int  octaves  ) {Clamp(octaves, 1    ,  8); if(Octaves  !=octaves  ){Octaves  =octaves  ; SetNoise();}}
void SetScale    (flt  scale    ) {Clamp(scale  , 1.0/4, 64); if(Scale    !=scale    ){Scale    =scale    ; SetNoise();}}
void SetTransform(int  transform) {Clamp(transform  , 0 , 8); if(TransFunc!=transform){TransFunc=transform; SetNoise();}}
/******************************************************************************/
void InitPre()
{
   EE_INIT();
   App.flag=APP_MINIMIZABLE|APP_MAXIMIZABLE|APP_RESIZABLE;
}
/******************************************************************************/
bool Init()
{
   SetNoise();
   return true;
}
/******************************************************************************/
void Shut()
{
}
/******************************************************************************/
bool Update()
{
   if(Kb.bp(KB_ESC))return false;
   switch(Kb.k.k)
   {
      case KB_1    : SetTransform(0); break;
      case KB_2    : SetTransform(1); break;
      case KB_3    : SetTransform(2); break;
      case KB_4    : SetTransform(3); break;
      case KB_5    : SetTransform(4); break;
      case KB_6    : SetTransform(5); break;
      case KB_7    : SetTransform(6); break;
      case KB_8    : SetTransform(7); break;
      case KB_9    : SetTransform(8); break;
      case KB_LEFT : SetRes(Res/2); break;
      case KB_RIGHT: SetRes(Res*2); break;
      case KB_UP   : SetScale(Scale*1.2); break;
      case KB_DOWN : SetScale(Scale/1.2); break;
      case KB_PGUP : SetSeed(Seed+1); break;
      case KB_PGDN : SetSeed(Seed-1); break;
      case KB_HOME : SetOctaves(Octaves+1); break;
      case KB_END  : SetOctaves(Octaves-1); break;
   }
   return true;
}
/******************************************************************************/
void Draw()
{
   D.clear();
   image.drawFs();
   D.text(0, -0.5, S+"Press 1..9 to change transform function: "+TransFunc);
   D.text(0, -0.6, S+"Press Left/Right to change resolution: "+Res);
   D.text(0, -0.7, S+"Press Up/Down to change scale: "+Scale);
   D.text(0, -0.8, S+"Press PgUp/PgDn to change seed: "+Seed);
   D.text(0, -0.9, S+"Press Home/End to change Octaves: "+Octaves);
}
/******************************************************************************/
