#pragma once 
#include "protocol.h" 
class ADCU_BodyCmd:public protocol{
  public:
    ADCU_BodyCmd();
    virtual ~ADCU_BodyCmd()=default;
    virtual void Update(uint8_t *data) override;
    void Reset() override;
    double ADCU_BackLamp_Cmd();
    void SetADCU_BackLamp_Cmd(double ADCU_BackLamp_Cmd);
    void Set_p_ADCU_BackLamp_Cmd(double ADCU_BackLamp_Cmd);
    double ADCU_BrkLamp_Cmd();
    void SetADCU_BrkLamp_Cmd(double ADCU_BrkLamp_Cmd);
    void Set_p_ADCU_BrkLamp_Cmd(double ADCU_BrkLamp_Cmd);
    double ADCU_Buzzer_Cmd();
    void SetADCU_Buzzer_Cmd(double ADCU_Buzzer_Cmd);
    void Set_p_ADCU_Buzzer_Cmd(double ADCU_Buzzer_Cmd);
    double ADCU_DblFlashLamp_Cmd();
    void SetADCU_DblFlashLamp_Cmd(double ADCU_DblFlashLamp_Cmd);
    void Set_p_ADCU_DblFlashLamp_Cmd(double ADCU_DblFlashLamp_Cmd);
    double ADCU_FogLamp_Cmd();
    void SetADCU_FogLamp_Cmd(double ADCU_FogLamp_Cmd);
    void Set_p_ADCU_FogLamp_Cmd(double ADCU_FogLamp_Cmd);
    double ADCU_HeadLamp_Cmd();
    void SetADCU_HeadLamp_Cmd(double ADCU_HeadLamp_Cmd);
    void Set_p_ADCU_HeadLamp_Cmd(double ADCU_HeadLamp_Cmd);
    double ADCU_Horn_Cmd();
    void SetADCU_Horn_Cmd(double ADCU_Horn_Cmd);
    void Set_p_ADCU_Horn_Cmd(double ADCU_Horn_Cmd);
    double ADCU_LampCmd_Active();
    void SetADCU_LampCmd_Active(double ADCU_LampCmd_Active);
    void Set_p_ADCU_LampCmd_Active(double ADCU_LampCmd_Active);
    double ADCU_LampCmd_Checksum();
    void SetADCU_LampCmd_Checksum(double ADCU_LampCmd_Checksum);
    void Set_p_ADCU_LampCmd_Checksum(double ADCU_LampCmd_Checksum);
    double ADCU_LampCmd_RollCnt();
    void SetADCU_LampCmd_RollCnt(double ADCU_LampCmd_RollCnt);
    void Set_p_ADCU_LampCmd_RollCnt(double ADCU_LampCmd_RollCnt);
    double ADCU_RunLamp_Cmd();
    void SetADCU_RunLamp_Cmd(double ADCU_RunLamp_Cmd);
    void Set_p_ADCU_RunLamp_Cmd(double ADCU_RunLamp_Cmd);
    double ADCU_TurnLLamp_Cmd();
    void SetADCU_TurnLLamp_Cmd(double ADCU_TurnLLamp_Cmd);
    void Set_p_ADCU_TurnLLamp_Cmd(double ADCU_TurnLLamp_Cmd);
    double ADCU_TurnRLamp_Cmd();
    void SetADCU_TurnRLamp_Cmd(double ADCU_TurnRLamp_Cmd);
    void Set_p_ADCU_TurnRLamp_Cmd(double ADCU_TurnRLamp_Cmd);
    double ADCU_WidthLamp_Cmd();
    void SetADCU_WidthLamp_Cmd(double ADCU_WidthLamp_Cmd);
    void Set_p_ADCU_WidthLamp_Cmd(double ADCU_WidthLamp_Cmd);
  private:
    double ADCU_BackLamp_Cmd_;
    double ADCU_BrkLamp_Cmd_;
    double ADCU_Buzzer_Cmd_;
    double ADCU_DblFlashLamp_Cmd_;
    double ADCU_FogLamp_Cmd_;
    double ADCU_HeadLamp_Cmd_;
    double ADCU_Horn_Cmd_;
    double ADCU_LampCmd_Active_;
    double ADCU_LampCmd_Checksum_;
    double ADCU_LampCmd_RollCnt_;
    double ADCU_RunLamp_Cmd_;
    double ADCU_TurnLLamp_Cmd_;
    double ADCU_TurnRLamp_Cmd_;
    double ADCU_WidthLamp_Cmd_;
};
