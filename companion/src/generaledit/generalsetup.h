#ifndef GENERALSETUP_H
#define GENERALSETUP_H

#include "generaledit.h"
#include "eeprominterface.h"

namespace Ui {
  class GeneralSetup;
}

class GeneralSetupPanel : public GeneralPanel
{
    Q_OBJECT

  public:
    GeneralSetupPanel(QWidget *parent, GeneralSettings & generalSettings, Firmware * firmware);
    virtual ~GeneralSetupPanel();

  private slots:
    void on_splashScreenChkB_stateChanged(int);
    void on_splashScreenDuration_currentIndexChanged(int index);
    void on_alarmwarnChkB_stateChanged(int);
    void on_gpsFormatCB_currentIndexChanged(int index);
    void on_displayTypeCB_currentIndexChanged(int index);
    void on_BLBright_SB_editingFinished();
    void on_re_CB_currentIndexChanged(int index);
    void on_countrycode_CB_currentIndexChanged(int index);
    void on_units_CB_currentIndexChanged(int index);
    void on_faimode_CB_stateChanged(int );
    void on_speakerPitchSB_editingFinished();
    void on_timezoneSB_editingFinished();
    void on_adjustRTC_stateChanged(int);
    void on_hapticStrength_valueChanged();
    void on_soundModeCB_currentIndexChanged(int index);
    void on_beeperlenCB_currentIndexChanged(int index);
    void on_volume_SB_editingFinished();
    void on_hapticmodeCB_currentIndexChanged(int index);
    void on_hapticLengthCB_currentIndexChanged(int index);
    void on_backlightswCB_currentIndexChanged(int index);
    void on_backlightColor_SL_valueChanged();
    void on_mavbaud_CB_currentIndexChanged(int index);
    void on_voiceLang_CB_currentIndexChanged(int index);
    void stickReverseEdited();
    void on_switchesDelay_valueChanged();
    void on_blAlarm_ChkB_stateChanged();
    void unlockSwitchEdited();
    void on_beepVolume_SL_valueChanged();
    void on_bgVolume_SL_valueChanged();
    void on_varioVolume_SL_valueChanged();
    void on_wavVolume_SL_valueChanged();

    void on_varioP0_SB_editingFinished();
    void on_varioPMax_SB_editingFinished();
    void on_varioR0_SB_editingFinished();
    void on_stickmodeCB_currentIndexChanged(int index);
    void on_channelorderCB_currentIndexChanged(int index);
    void on_beeperCB_currentIndexChanged(int index);
    void on_memwarnChkB_stateChanged(int );
    void on_inactimerSB_editingFinished();
    void on_backlightautoSB_editingFinished();

    void on_battwarningDSB_editingFinished();
    void on_vBatMinDSB_editingFinished();
    void on_vBatMaxDSB_editingFinished();
    void on_contrastSB_editingFinished();


  private:
    Ui::GeneralSetup *ui;

    void setValues();
    void populateBacklightCB();
    void populateVoiceLangCB();
    void populateRotEncCB(int reCount);
    void updateVarioPitchRange();
};

#endif // GENERALSETUP_H
