#include "plugin.hpp"

Plugin *pluginInstance;

__attribute__ ((visibility ("default")))
void init(Plugin *p) {
  pluginInstance = p;

  p->addModel(modelSapphireElastika);
  p->addModel(modelSapphireFrolic);
  p->addModel(modelSapphireGalaxy);
  p->addModel(modelSapphireGlee);
  p->addModel(modelSapphireGravy);
  p->addModel(modelSapphireHiss);
  p->addModel(modelSapphireEnv);
  p->addModel(modelSapphireLark);
  // p->addModel(modelSapphireNucleus);
  p->addModel(modelSapphirePop);
  p->addModel(modelSapphireTubeUnit);
  // p->addModel(modelSapphireChaops);
  // p->addModel(modelSapphireMoots);
  // p->addModel(modelSapphirePivot);
  // p->addModel(modelSapphirePolynucleus);
  // p->addModel(modelSapphirePop);
  // p->addModel(modelSapphireRotini);
  // p->addModel(modelSapphireSam);
  // p->addModel(modelSapphireTin);
  // p->addModel(modelSapphireTout);
  // p->addModel(modelSapphireTricorder);
  // p->addModel(modelSapphireTubeUnit);
}
