#include <PeleLM.H>
#include <AMReX_ParmParse.H>

void PeleLM::readProbParm()
{
   amrex::ParmParse pp("prob");

   // CF params
   pp.query("P_mean", PeleLM::prob_parm->P_mean);
   pp.query("T_oxidizer", PeleLM::prob_parm->T_ox);
   pp.query("T_fuel", PeleLM::prob_parm->T_fuel);
   pp.query("massflow", PeleLM::prob_parm->mdot);
   pp.query("pertmag",  PeleLM::prob_parm->pertmag);
   pp.query("jet_radius",  PeleLM::prob_parm->jetRadius);
   pp.query("inert_radius",  PeleLM::prob_parm->inertRadius);
   pp.query("inert_velocity",  PeleLM::prob_parm->inertVel);

   // ignition params
   pp.query("do_ignition",  PeleLM::prob_parm->do_ignit);
   pp.query("ignition_SphRad",  PeleLM::prob_parm->ignitSphereRad);
   pp.query("ignition_SphT",  PeleLM::prob_parm->ignitT);

   // spray params
   pp.query("spray_mass_flow_rate",PeleLM::prob_parm->spray_mass_flow_rate);
   pp.query("spray_vel",PeleLM::prob_parm->spray_vel);
   pp.query("spray_temp",PeleLM::prob_parm->spray_temp);
}
