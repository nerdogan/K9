#ifndef DEMIRBAS_ENUM_H
#define DEMIRBAS_ENUM_H

enum AMORTISMAN_SEKLI {
    NORMAL_BAKIYE  = 1,
    AZALAN_BAKIYE = 2
};

enum DEMIRBAS_FISLERI {
    YENIDEN_DEGERLEME_FISI = 100,
    AMORTISMAN_AYIRMA_FISI = 101,
};

enum DEMIRBAS_ALIS_SATIS {
    TUM_DEMIRBASLAR        = 11,
    SATILMAMIS_DEMIRBASLAR = 12,
};

#endif // DEMIRBAS_ENUM_H