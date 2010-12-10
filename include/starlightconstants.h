///////////////////////////////////////////////////////////////////////////
//
//    Copyright 2010
//
//    This file is part of starlight.
//
//    starlight is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    starlight is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with starlight. If not, see <http://www.gnu.org/licenses/>.
//
///////////////////////////////////////////////////////////////////////////
//
// File and Version Information:
// $Rev::                             $: revision of last commit
// $Author::                          $: author of last commit
// $Date::                            $: date of last commit
//
// Description:
//
//
//
///////////////////////////////////////////////////////////////////////////


#ifndef STARLIGHTCONSTANTS_H_INCLUDE
#define STARLIGHTCONSTANTS_H_INCLUDE
/*
 * Constants are set here
 */
namespace starlightConstants
{
  static const double hbarc =    0.197327053;
  static const double hbarcmev = hbarc*1000.;
  static const double pi       = 3.141592654;
  static const double twoPi    = 2 * pi;
  static const double alpha    = 1/137.0359895;
  static const double mp       = 0.93827231;
  static const double mpi      = 0.13956995;
  static const double mK       = 0.493677;
  static const double mel      = 0.00051099907;
  static const double mmu      = 0.105658389;
  static const double mtau     = 1.777;
	enum particle {UNKNOWN=0, ELECTRON=11, PION=211, MUON=13, TAUON=15, KAONCHARGE=321,KAONNEUTRAL=310, PROTON=212,A2=115,ETA=221,F2=225,ETAPRIME=331,F2PRIME=335,ETAC=441,F0=9010221,ZOVERZ03=33,RHO=113,RHOZEUS=913,FOURPRONG=999,OMEGA=223,PHI=333,JPSI=443,JPSI2S=444,JPSI2S_ee=444011,JPSI2S_mumu=444013,JPSI_ee=443011,JPSI_mumu=443013,UPSILON=553,UPSILON_ee=553011,UPSILON_mumu=553013,UPSILON2S=554,UPSILON2S_ee=554011,UPSILON2S_mumu=554013,UPSILON3S=555,UPSILON3S_ee=555011,UPSILON3S_mumu=555013};
  enum decaytype {NOTKNOWN,NARROWVMDEFAULT,WIDEVMDEFAULT,PSIFAMILY,LEPTONPAIR,SINGLEMESON};
  enum interactiontype {UNSPECIFIED, PHOTONPHOTON,PHOTONPOMERONNARROW,PHOTONPOMERONWIDE};

  //Structure for each event's set of tracks.
  struct event{
 
  public:
    int _numberOfTracks;
    //Right now this is set up for a maximum of 4 tracks,if we want more, just increase the arrays
    //Moved it to 30, this way when pythia returns, it wont complain too much...hedging bets...not sure how many
    double px[30],py[30],pz[30];
    //starlightConstants::particle _fsParticle[30];
    int _fsParticle[30];
    int _charge[30];
    //To help track mothers and daughters produced through pythia.
    int _mother1[30];
    int _mother2[30];
    int _daughter1[30];
    int _daughter2[30];
    //Normally we just set vertices to 0
    //But for pythia, we decay additional states
    int _numberOfVertices;
    double _vertx[10],_verty[10],_vertz[10];	
  };
}


#endif  // STARLIGHTCONSTANTS_H_INCLUDE

