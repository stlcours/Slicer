/*==============================================================================

  Program: 3D Slicer

  Copyright (c) 2010 Kitware Inc.

  See Doc/copyright/copyright.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerWelcomeModule_h
#define __qSlicerWelcomeModule_h

// CTK includes
#include <ctkPimpl.h>

// SlicerQt includes
#include "qSlicerLoadableModule.h"
#include "qSlicerWelcomeModuleExport.h"

class qSlicerAbstractModuleWidget;
class qSlicerWelcomeModulePrivate;

class Q_SLICER_QTMODULES_WELCOME_EXPORT qSlicerWelcomeModule :
  public qSlicerLoadableModule
{
  Q_OBJECT
  Q_INTERFACES(qSlicerLoadableModule);

public:

  typedef qSlicerLoadableModule Superclass;
  qSlicerWelcomeModule(QObject *parent=0);
  virtual ~qSlicerWelcomeModule(){}

  qSlicerGetTitleMacro(QTMODULE_TITLE);

  ///
  /// Help to use the module
  virtual QString helpText()const;

  ///
  /// Return acknowledgements
  virtual QString acknowledgementText()const;
protected:

  ///
  /// Create and return the widget representation associated to this module
  virtual qSlicerAbstractModuleRepresentation * createWidgetRepresentation();

  ///
  /// Create and return the logic associated to this module
  virtual vtkSlicerLogic* createLogic();

private:
  CTK_DECLARE_PRIVATE(qSlicerWelcomeModule);
};

#endif
