using namespace std;
string GetRegion(int diqutemp)
{
	switch (diqutemp)
	{
	case 110000:
		return"������";
		break;
	case 110100:
		return"��������Ͻ��";
		break;
	case 110101:
		return"�����ж�����";
		break;
	case 110102:
		return"������������";
		break;
	case 110103:
		return"�����г�����";
		break;
	case 110104:
		return"������������";
		break;
	case 110105:
		return"�����г�����";
		break;
	case 110106:
		return"�����з�̨��";
		break;
	case 110107:
		return"������ʯ��ɽ��";
		break;
	case 110108:
		return"�����к�����";
		break;
	case 110109:
		return"��������ͷ����";
		break;
	case 110111:
		return"�����з�ɽ��";
		break;
	case 110112:
		return"������ͨ����";
		break;
	case 110113:
		return"������˳����";
		break;
	case 110200:
		return"��������";
		break;
	case 110221:
		return"�����в�ƽ��";
		break;
	case 110224:
		return"�����д�����";
		break;
	case 110226:
		return"������ƽ����";
		break;
	case 110227:
		return"�����л�����";
		break;
	case 110228:
		return"������������";
		break;
	case 110229:
		return"������������";
		break;
	case 120000:
		return"�����";
		break;
	case 120100:
		return"�������Ͻ��";
		break;
	case 120101:
		return"����к�ƽ��";
		break;
	case 120102:
		return"����кӶ���";
		break;
	case 120103:
		return"����к�����";
		break;
	case 120104:
		return"������Ͽ���";
		break;
	case 120105:
		return"����кӱ���";
		break;
	case 120106:
		return"����к�����";
		break;
	case 120107:
		return"�����������";
		break;
	case 120108:
		return"����к�����";
		break;
	case 120109:
		return"����д����";
		break;
	case 120110:
		return"����ж�����";
		break;
	case 120111:
		return"�����������";
		break;
	case 120112:
		return"����н�����";
		break;
	case 120113:
		return"����б�����";
		break;
	case 120200:
		return"�������";
		break;
	case 120221:
		return"�����������";
		break;
	case 120222:
		return"�����������";
		break;
	case 120223:
		return"����о�����";
		break;
	case 120224:
		return"����б�����";
		break;
	case 120225:
		return"����м���";
		break;
	case 130000:
		return"�ӱ�ʡ";
		break;
	case 130100:
		return"�ӱ�ʡʯ��ׯ��";
		break;
	case 130101:
		return"�ӱ�ʡʯ��ׯ����Ͻ��";
		break;
	case 130102:
		return"�ӱ�ʡʯ��ׯ�г�����";
		break;
	case 130103:
		return"�ӱ�ʡʯ��ׯ���Ŷ���";
		break;
	case 130104:
		return"�ӱ�ʡʯ��ׯ��������";
		break;
	case 130105:
		return"�ӱ�ʡʯ��ׯ���»���";
		break;
	case 130106:
		return"�ӱ�ʡʯ��ׯ�н���";
		break;
	case 130107:
		return"�ӱ�ʡʯ��ׯ�о������";
		break;
	case 130121:
		return"�ӱ�ʡʯ��ׯ�о�����";
		break;
	case 130123:
		return"�ӱ�ʡʯ��ׯ��������";
		break;
	case 130124:
		return"�ӱ�ʡʯ��ׯ�������";
		break;
	case 130125:
		return"�ӱ�ʡʯ��ׯ��������";
		break;
	case 130126:
		return"�ӱ�ʡʯ��ׯ��������";
		break;
	case 130127:
		return"�ӱ�ʡʯ��ׯ�и�����";
		break;
	case 130128:
		return"�ӱ�ʡʯ��ׯ��������";
		break;
	case 130129:
		return"�ӱ�ʡʯ��ׯ���޻���";
		break;
	case 130130:
		return"�ӱ�ʡʯ��ׯ���޼���";
		break;
	case 130131:
		return"�ӱ�ʡʯ��ׯ��ƽɽ��";
		break;
	case 130132:
		return"�ӱ�ʡʯ��ׯ��Ԫ����";
		break;
	case 130133:
		return"�ӱ�ʡʯ��ׯ������";
		break;
	case 130181:
		return"�ӱ�ʡʯ��ׯ��������";
		break;
	case 130182:
		return"�ӱ�ʡʯ��ׯ��޻����";
		break;
	case 130183:
		return"�ӱ�ʡʯ��ׯ�н�����";
		break;
	case 130184:
		return"�ӱ�ʡʯ��ׯ��������";
		break;
	case 130185:
		return"�ӱ�ʡʯ��ׯ��¹Ȫ��";
		break;
	case 130200:
		return"�ӱ�ʡ��ɽ��";
		break;
	case 130201:
		return"�ӱ�ʡ��ɽ����Ͻ��";
		break;
	case 130202:
		return"�ӱ�ʡ��ɽ��·����";
		break;
	case 130203:
		return"�ӱ�ʡ��ɽ��·����";
		break;
	case 130204:
		return"�ӱ�ʡ��ɽ�й�ұ��";
		break;
	case 130205:
		return"�ӱ�ʡ��ɽ�п�ƽ��";
		break;
	case 130206:
		return"�ӱ�ʡ��ɽ������";
		break;
	case 130221:
		return"�ӱ�ʡ��ɽ�з�����";
		break;
	case 130223:
		return"�ӱ�ʡ��ɽ������";
		break;
	case 130224:
		return"�ӱ�ʡ��ɽ��������";
		break;
	case 130225:
		return"�ӱ�ʡ��ɽ����ͤ��";
		break;
	case 130227:
		return"�ӱ�ʡ��ɽ��Ǩ����";
		break;
	case 130229:
		return"�ӱ�ʡ��ɽ��������";
		break;
	case 130230:
		return"�ӱ�ʡ��ɽ���ƺ���";
		break;
	case 130281:
		return"�ӱ�ʡ��ɽ������";
		break;
	case 130282:
		return"�ӱ�ʡ��ɽ�з�����";
		break;
	case 130283:
		return"�ӱ�ʡ��ɽ��Ǩ����";
		break;
	case 130300:
		return"�ӱ�ʡ�ػʵ����ػʵ���";
		break;
	case 130301:
		return"�ӱ�ʡ�ػʵ�����Ͻ��";
		break;
	case 130302:
		return"�ӱ�ʡ�ػʵ��к�����";
		break;
	case 130303:
		return"�ӱ�ʡ�ػʵ���ɽ������";
		break;
	case 130304:
		return"�ӱ�ʡ�ػʵ��б�������";
		break;
	case 130321:
		return"�ӱ�ʡ�ػʵ�����������������";
		break;
	case 130322:
		return"�ӱ�ʡ�ػʵ��в�����";
		break;
	case 130323:
		return"�ӱ�ʡ�ػʵ��и�����";
		break;
	case 130324:
		return"�ӱ�ʡ�ػʵ���¬����";
		break;
	case 130400:
		return"�ӱ�ʡ�����к�����";
		break;
	case 130401:
		return"�ӱ�ʡ��������Ͻ��";
		break;
	case 130402:
		return"�ӱ�ʡ�����к�ɽ��";
		break;
	case 130403:
		return"�ӱ�ʡ�����д�̨��";
		break;
	case 130404:
		return"�ӱ�ʡ�����и�����";
		break;
	case 130406:
		return"�ӱ�ʡ�����з�����";
		break;
	case 130421:
		return"�ӱ�ʡ�����к�����";
		break;
	case 130423:
		return"�ӱ�ʡ������������";
		break;
	case 130424:
		return"�ӱ�ʡ�����гɰ���";
		break;
	case 130425:
		return"�ӱ�ʡ�����д�����";
		break;
	case 130426:
		return"�ӱ�ʡ����������";
		break;
	case 130427:
		return"�ӱ�ʡ�����д���";
		break;
	case 130428:
		return"�ӱ�ʡ�����з�����";
		break;
	case 130429:
		return"�ӱ�ʡ������������";
		break;
	case 130430:
		return"�ӱ�ʡ����������";
		break;
	case 130431:
		return"�ӱ�ʡ�����м�����";
		break;
	case 130432:
		return"�ӱ�ʡ�����й�ƽ��";
		break;
	case 130433:
		return"�ӱ�ʡ�����й�����";
		break;
	case 130434:
		return"�ӱ�ʡ������κ��";
		break;
	case 130435:
		return"�ӱ�ʡ������������";
		break;
	case 130481:
		return"�ӱ�ʡ�������䰲��";
		break;
	case 130500:
		return"�ӱ�ʡ��̨��";
		break;
	case 130501:
		return"�ӱ�ʡ��̨����Ͻ��";
		break;
	case 130502:
		return"�ӱ�ʡ��̨���Ŷ���";
		break;
	case 130503:
		return"�ӱ�ʡ��̨��������";
		break;
	case 130521:
		return"�ӱ�ʡ��̨����̨��";
		break;
	case 130522:
		return"�ӱ�ʡ��̨���ٳ���";
		break;
	case 130523:
		return"�ӱ�ʡ��̨��������";
		break;
	case 130524:
		return"�ӱ�ʡ��̨�а�����";
		break;
	case 130525:
		return"�ӱ�ʡ��̨��¡Ң��";
		break;
	case 130526:
		return"�ӱ�ʡ��̨������";
		break;
	case 130527:
		return"�ӱ�ʡ��̨���Ϻ���";
		break;
	case 130528:
		return"�ӱ�ʡ��̨��������";
		break;
	case 130529:
		return"�ӱ�ʡ��̨�о�¹��";
		break;
	case 130530:
		return"�ӱ�ʡ��̨���º���";
		break;
	case 130531:
		return"�ӱ�ʡ��̨�й�����";
		break;
	case 130532:
		return"�ӱ�ʡ��̨��ƽ����";
		break;
	case 130533:
		return"�ӱ�ʡ��̨������";
		break;
	case 130534:
		return"�ӱ�ʡ��̨�������";
		break;
	case 130535:
		return"�ӱ�ʡ��̨��������";
		break;
	case 130581:
		return"�ӱ�ʡ��̨���Ϲ���";
		break;
	case 130582:
		return"�ӱ�ʡ��̨��ɳ����";
		break;
	case 130600:
		return"�ӱ�ʡ������";
		break;
	case 130601:
		return"�ӱ�ʡ��������Ͻ��";
		break;
	case 130602:
		return"�ӱ�ʡ������������";
		break;
	case 130603:
		return"�ӱ�ʡ�����б�����";
		break;
	case 130604:
		return"�ӱ�ʡ������������";
		break;
	case 130621:
		return"�ӱ�ʡ������������";
		break;
	case 130622:
		return"�ӱ�ʡ��������Է��";
		break;
	case 130623:
		return"�ӱ�ʡ�������ˮ��";
		break;
	case 130624:
		return"�ӱ�ʡ�����и�ƽ��";
		break;
	case 130625:
		return"�ӱ�ʡ��������ˮ��";
		break;
	case 130626:
		return"�ӱ�ʡ�����ж�����";
		break;
	case 130627:
		return"�ӱ�ʡ����������";
		break;
	case 130628:
		return"�ӱ�ʡ�����и�����";
		break;
	case 130629:
		return"�ӱ�ʡ�������ݳ���";
		break;
	case 130630:
		return"�ӱ�ʡ�������Դ��";
		break;
	case 130631:
		return"�ӱ�ʡ������������";
		break;
	case 130632:
		return"�ӱ�ʡ�����а�����";
		break;
	case 130633:
		return"�ӱ�ʡ����������";
		break;
	case 130634:
		return"�ӱ�ʡ������������";
		break;
	case 130635:
		return"�ӱ�ʡ���������";
		break;
	case 130636:
		return"�ӱ�ʡ������˳ƽ��";
		break;
	case 130637:
		return"�ӱ�ʡ�����в�Ұ��";
		break;
	case 130638:
		return"�ӱ�ʡ����������";
		break;
	case 130681:
		return"�ӱ�ʡ������������";
		break;
	case 130682:
		return"�ӱ�ʡ�����ж�����";
		break;
	case 130683:
		return"�ӱ�ʡ�����а�����";
		break;
	case 130684:
		return"�ӱ�ʡ�����и߱�����";
		break;
	case 130700:
		return"�ӱ�ʡ�żҿ���";
		break;
	case 130701:
		return"�ӱ�ʡ�żҿ�����Ͻ��";
		break;
	case 130702:
		return"�ӱ�ʡ�żҿ����Ŷ���";
		break;
	case 130703:
		return"�ӱ�ʡ�żҿ���������";
		break;
	case 130705:
		return"�ӱ�ʡ�żҿ���������";
		break;
	case 130706:
		return"�ӱ�ʡ�żҿ����»�԰��";
		break;
	case 130721:
		return"�ӱ�ʡ�żҿ���������";
		break;
	case 130722:
		return"�ӱ�ʡ�żҿ����ű���";
		break;
	case 130723:
		return"�ӱ�ʡ�żҿ��п�����";
		break;
	case 130724:
		return"�ӱ�ʡ�żҿ��й�Դ��";
		break;
	case 130725:
		return"�ӱ�ʡ�żҿ���������";
		break;
	case 130726:
		return"�ӱ�ʡ�żҿ���ε��";
		break;
	case 130727:
		return"�ӱ�ʡ�żҿ�����ԭ��";
		break;
	case 130728:
		return"�ӱ�ʡ�żҿ��л�����";
		break;
	case 130729:
		return"�ӱ�ʡ�żҿ�����ȫ��";
		break;
	case 130730:
		return"�ӱ�ʡ�żҿ��л�����";
		break;
	case 130731:
		return"�ӱ�ʡ�żҿ�����¹��";
		break;
	case 130732:
		return"�ӱ�ʡ�żҿ��г����";
		break;
	case 130733:
		return"�ӱ�ʡ�żҿ��г�����";
		break;
	case 130800:
		return"�ӱ�ʡ�е���";
		break;
	case 130801:
		return"�ӱ�ʡ�е�����Ͻ��";
		break;
	case 130802:
		return"�ӱ�ʡ�е���˫����";
		break;
	case 130803:
		return"�ӱ�ʡ�е���˫����";
		break;
	case 130804:
		return"�ӱ�ʡ�е���ӥ��Ӫ�ӿ���";
		break;
	case 130821:
		return"�ӱ�ʡ�е��ге���";
		break;
	case 130822:
		return"�ӱ�ʡ�е�����¡��";
		break;
	case 130823:
		return"�ӱ�ʡ�е���ƽȪ��";
		break;
	case 130824:
		return"�ӱ�ʡ�е�����ƽ��";
		break;
	case 130825:
		return"�ӱ�ʡ�е���¡����";
		break;
	case 130826:
		return"�ӱ�ʡ�е��з�������������";
		break;
	case 130827:
		return"�ӱ�ʡ�е��п������������";
		break;
	case 130828:
		return"�ӱ�ʡ�е���Χ�������ɹ���������";
		break;
	case 130900:
		return"�ӱ�ʡ������";
		break;
	case 130901:
		return"�ӱ�ʡ��������Ͻ��";
		break;
	case 130902:
		return"�ӱ�ʡ�������»���";
		break;
	case 130903:
		return"�ӱ�ʡ�������˺���";
		break;
	case 130921:
		return"�ӱ�ʡ�����в���";
		break;
	case 130922:
		return"�ӱ�ʡ����������";
		break;
	case 130923:
		return"�ӱ�ʡ�����ж�����";
		break;
	case 130924:
		return"�ӱ�ʡ�����к�����";
		break;
	case 130925:
		return"�ӱ�ʡ��������ɽ��";
		break;
	case 130926:
		return"�ӱ�ʡ������������";
		break;
	case 130927:
		return"�ӱ�ʡ��������Ƥ��";
		break;
	case 130928:
		return"�ӱ�ʡ������������";
		break;
	case 130929:
		return"�ӱ�ʡ����������";
		break;
	case 130930:
		return"�ӱ�ʡ�������ϴ����������";
		break;
	case 130981:
		return"�ӱ�ʡ�����в�ͷ��";
		break;
	case 130982:
		return"�ӱ�ʡ������������";
		break;
	case 130983:
		return"�ӱ�ʡ�����л�����";
		break;
	case 130984:
		return"�ӱ�ʡ�����кӼ���";
		break;
	case 131000:
		return"�ӱ�ʡ�ȷ���";
		break;
	case 131001:
		return"�ӱ�ʡ�ȷ�����Ͻ��";
		break;
	case 131002:
		return"�ӱ�ʡ�ȷ��а�����";
		break;
	case 131022:
		return"�ӱ�ʡ�ȷ��й̰���";
		break;
	case 131023:
		return"�ӱ�ʡ�ȷ���������";
		break;
	case 131024:
		return"�ӱ�ʡ�ȷ��������";
		break;
	case 131025:
		return"�ӱ�ʡ�ȷ��д����";
		break;
	case 131026:
		return"�ӱ�ʡ�ȷ����İ���";
		break;
	case 131028:
		return"�ӱ�ʡ�ȷ��д󳧻���������";
		break;
	case 131081:
		return"�ӱ�ʡ�ȷ��а�����";
		break;
	case 131082:
		return"�ӱ�ʡ�ȷ���������";
		break;
	case 131100:
		return"�ӱ�ʡ��ˮ��";
		break;
	case 131101:
		return"�ӱ�ʡ��ˮ����Ͻ��";
		break;
	case 131102:
		return"�ӱ�ʡ��ˮ���ҳ���";
		break;
	case 131121:
		return"�ӱ�ʡ��ˮ����ǿ��";
		break;
	case 131122:
		return"�ӱ�ʡ��ˮ��������";
		break;
	case 131123:
		return"�ӱ�ʡ��ˮ����ǿ��";
		break;
	case 131124:
		return"�ӱ�ʡ��ˮ��������";
		break;
	case 131125:
		return"�ӱ�ʡ��ˮ�а�ƽ��";
		break;
	case 131126:
		return"�ӱ�ʡ��ˮ�йʳ���";
		break;
	case 131127:
		return"�ӱ�ʡ��ˮ�о���";
		break;
	case 131128:
		return"�ӱ�ʡ��ˮ�и�����";
		break;
	case 131181:
		return"�ӱ�ʡ��ˮ�м�����";
		break;
	case 131182:
		return"�ӱ�ʡ��ˮ��������";
		break;
	case 140000:
		return"ɽ��ʡ";
		break;
	case 140100:
		return"ɽ��ʡ̫ԭ��";
		break;
	case 140101:
		return"ɽ��ʡ̫ԭ����Ͻ��";
		break;
	case 140105:
		return"ɽ��ʡ̫ԭ��С����";
		break;
	case 140106:
		return"ɽ��ʡ̫ԭ��ӭ����";
		break;
	case 140107:
		return"ɽ��ʡ̫ԭ���ӻ�����";
		break;
	case 140108:
		return"ɽ��ʡ̫ԭ�м��ƺ��";
		break;
	case 140109:
		return"ɽ��ʡ̫ԭ���������";
		break;
	case 140110:
		return"ɽ��ʡ̫ԭ�н�Դ��";
		break;
	case 140121:
		return"ɽ��ʡ̫ԭ��������";
		break;
	case 140122:
		return"ɽ��ʡ̫ԭ��������";
		break;
	case 140123:
		return"ɽ��ʡ̫ԭ��¦����";
		break;
	case 140181:
		return"ɽ��ʡ̫ԭ�йŽ���";
		break;
	case 140200:
		return"ɽ��ʡ��ͬ��";
		break;
	case 140201:
		return"ɽ��ʡ��ͬ����Ͻ��";
		break;
	case 140202:
		return"ɽ��ʡ��ͬ�г���";
		break;
	case 140203:
		return"ɽ��ʡ��ͬ�п���";
		break;
	case 140211:
		return"ɽ��ʡ��ͬ���Ͻ���";
		break;
	case 140212:
		return"ɽ��ʡ��ͬ��������";
		break;
	case 140221:
		return"ɽ��ʡ��ͬ��������";
		break;
	case 140222:
		return"ɽ��ʡ��ͬ��������";
		break;
	case 140223:
		return"ɽ��ʡ��ͬ�й�����";
		break;
	case 140224:
		return"ɽ��ʡ��ͬ��������";
		break;
	case 140225:
		return"ɽ��ʡ��ͬ�л�Դ��";
		break;
	case 140226:
		return"ɽ��ʡ��ͬ��������";
		break;
	case 140227:
		return"ɽ��ʡ��ͬ�д�ͬ��";
		break;
	case 140300:
		return"ɽ��ʡ��Ȫ��";
		break;
	case 140301:
		return"ɽ��ʡ��Ȫ����Ͻ��";
		break;
	case 140302:
		return"ɽ��ʡ��Ȫ�г���";
		break;
	case 140303:
		return"ɽ��ʡ��Ȫ�п���";
		break;
	case 140311:
		return"ɽ��ʡ��Ȫ�н���";
		break;
	case 140321:
		return"ɽ��ʡ��Ȫ��ƽ����";
		break;
	case 140322:
		return"ɽ��ʡ��Ȫ������";
		break;
	case 140400:
		return"ɽ��ʡ������";
		break;
	case 140401:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 140402:
		return"ɽ��ʡ�����г���";
		break;
	case 140411:
		return"ɽ��ʡ�����н���";
		break;
	case 140421:
		return"ɽ��ʡ�����г�����";
		break;
	case 140423:
		return"ɽ��ʡ��������ԫ��";
		break;
	case 140424:
		return"ɽ��ʡ������������";
		break;
	case 140425:
		return"ɽ��ʡ������ƽ˳��";
		break;
	case 140426:
		return"ɽ��ʡ�����������";
		break;
	case 140427:
		return"ɽ��ʡ�����к�����";
		break;
	case 140428:
		return"ɽ��ʡ�����г�����";
		break;
	case 140429:
		return"ɽ��ʡ������������";
		break;
	case 140430:
		return"ɽ��ʡ����������";
		break;
	case 140431:
		return"ɽ��ʡ��������Դ��";
		break;
	case 140481:
		return"ɽ��ʡ������º����";
		break;
	case 140500:
		return"ɽ��ʡ������";
		break;
	case 140501:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 140502:
		return"ɽ��ʡ�����г���";
		break;
	case 140521:
		return"ɽ��ʡ��������ˮ��";
		break;
	case 140522:
		return"ɽ��ʡ������������";
		break;
	case 140524:
		return"ɽ��ʡ�������괨��";
		break;
	case 140525:
		return"ɽ��ʡ������������";
		break;
	case 140581:
		return"ɽ��ʡ�����и�ƽ��";
		break;
	case 140600:
		return"ɽ��ʡ������˷����";
		break;
	case 140601:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 140602:
		return"ɽ��ʡ������˷����";
		break;
	case 140603:
		return"ɽ��ʡ������ƽ³��";
		break;
	case 140621:
		return"ɽ��ʡ������ɽ����";
		break;
	case 140622:
		return"ɽ��ʡ������Ӧ��";
		break;
	case 140623:
		return"ɽ��ʡ������������";
		break;
	case 140624:
		return"ɽ��ʡ�����л�����";
		break;
	case 142200:
		return"ɽ��ʡ���ݵ���";
		break;
	case 142201:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142202:
		return"ɽ��ʡ���ݵ���ԭƽ��";
		break;
	case 142222:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142223:
		return"ɽ��ʡ���ݵ�����̨��";
		break;
	case 142225:
		return"ɽ��ʡ���ݵ�������";
		break;
	case 142226:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142227:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142228:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142229:
		return"ɽ��ʡ���ݵ��������";
		break;
	case 142230:
		return"ɽ��ʡ���ݵ�����կ��";
		break;
	case 142231:
		return"ɽ��ʡ���ݵ�������";
		break;
	case 142232:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142233:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142234:
		return"ɽ��ʡ���ݵ���ƫ����";
		break;
	case 142300:
		return"ɽ��ʡ���ݵ�����������";
		break;
	case 142301:
		return"ɽ��ʡ���ݵ���Т����";
		break;
	case 142302:
		return"ɽ��ʡ���ݵ�����ʯ��";
		break;
	case 142303:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142322:
		return"ɽ��ʡ���ݵ�����ˮ��";
		break;
	case 142323:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142325:
		return"ɽ��ʡ���ݵ�������";
		break;
	case 142326:
		return"ɽ��ʡ���ݵ�������";
		break;
	case 142327:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142328:
		return"ɽ��ʡ���ݵ���ʯ¥��";
		break;
	case 142329:
		return"ɽ��ʡ���ݵ������";
		break;
	case 142330:
		return"ɽ��ʡ���ݵ�����ɽ��";
		break;
	case 142332:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142333:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 142400:
		return"ɽ��ʡ���е���";
		break;
	case 142401:
		return"ɽ��ʡ���е����ܴ���";
		break;
	case 142402:
		return"ɽ��ʡ���е���������";
		break;
	case 142421:
		return"ɽ��ʡ���е���������";
		break;
	case 142422:
		return"ɽ��ʡ���е�����Ȩ��";
		break;
	case 142423:
		return"ɽ��ʡ���е�����˳��";
		break;
	case 142424:
		return"ɽ��ʡ���е���������";
		break;
	case 142427:
		return"ɽ��ʡ���е���������";
		break;
	case 142429:
		return"ɽ��ʡ���е���̫����";
		break;
	case 142430:
		return"ɽ��ʡ���е�������";
		break;
	case 142431:
		return"ɽ��ʡ���е���ƽң��";
		break;
	case 142433:
		return"ɽ��ʡ���е�����ʯ��";
		break;
	case 142600:
		return"ɽ��ʡ�ٷڵ���";
		break;
	case 142601:
		return"ɽ��ʡ�ٷڵ����ٷ���";
		break;
	case 142602:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142603:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142621:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142622:
		return"ɽ��ʡ�ٷڵ��������";
		break;
	case 142623:
		return"ɽ��ʡ�ٷڵ��������";
		break;
	case 142625:
		return"ɽ��ʡ�ٷڵ����鶴��";
		break;
	case 142627:
		return"ɽ��ʡ�ٷڵ�������";
		break;
	case 142628:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142629:
		return"ɽ��ʡ�ٷڵ�����ɽ��";
		break;
	case 142630:
		return"ɽ��ʡ�ٷڵ�������";
		break;
	case 142631:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142632:
		return"ɽ��ʡ�ٷڵ�������";
		break;
	case 142633:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142634:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142635:
		return"ɽ��ʡ�ٷڵ�������";
		break;
	case 142636:
		return"ɽ��ʡ�ٷڵ���������";
		break;
	case 142700:
		return"ɽ��ʡ�˳ǵ���";
		break;
	case 142701:
		return"ɽ��ʡ�˳ǵ����˳���";
		break;
	case 142702:
		return"ɽ��ʡ�˳ǵ���������";
		break;
	case 142703:
		return"ɽ��ʡ�˳ǵ����ӽ���";
		break;
	case 142723:
		return"ɽ��ʡ�˳ǵ����ǳ���";
		break;
	case 142724:
		return"ɽ��ʡ�˳ǵ��������";
		break;
	case 142725:
		return"ɽ��ʡ�˳ǵ���������";
		break;
	case 142726:
		return"ɽ��ʡ�˳ǵ��������";
		break;
	case 142727:
		return"ɽ��ʡ�˳ǵ����ɽ��";
		break;
	case 142729:
		return"ɽ��ʡ�˳ǵ�����ϲ��";
		break;
	case 142730:
		return"ɽ��ʡ�˳ǵ�������";
		break;
	case 142731:
		return"ɽ��ʡ�˳ǵ������";
		break;
	case 142732:
		return"ɽ��ʡ�˳ǵ���ƽ½��";
		break;
	case 142733:
		return"ɽ��ʡ�˳ǵ���ԫ����";
		break;
	case 150000:
		return"���ɹ�������";
		break;
	case 150100:
		return"���ɹ����������ͺ�����";
		break;
	case 150101:
		return"���ɹ����������ͺ�������Ͻ��";
		break;
	case 150102:
		return"���ɹ����������ͺ������³���";
		break;
	case 150103:
		return"���ɹ����������ͺ����л�����";
		break;
	case 150104:
		return"���ɹ����������ͺ�������Ȫ��";
		break;
	case 150105:
		return"���ɹ����������ͺ����н���";
		break;
	case 150121:
		return"���ɹ����������ͺ�������Ĭ������";
		break;
	case 150122:
		return"���ɹ����������ͺ������п�����";
		break;
	case 150123:
		return"���ɹ����������ͺ����к��ָ����";
		break;
	case 150124:
		return"���ɹ����������ͺ�������ˮ����";
		break;
	case 150125:
		return"���ɹ����������ͺ������䴨��";
		break;
	case 150200:
		return"���ɹ���������ͷ��";
		break;
	case 150201:
		return"���ɹ���������ͷ����Ͻ��";
		break;
	case 150202:
		return"���ɹ���������ͷ�ж�����";
		break;
	case 150203:
		return"���ɹ���������ͷ����������";
		break;
	case 150204:
		return"���ɹ���������ͷ����ɽ��";
		break;
	case 150205:
		return"���ɹ���������ͷ��ʯ�տ���";
		break;
	case 150206:
		return"���ɹ���������ͷ�а��ƿ���";
		break;
	case 150207:
		return"���ɹ���������ͷ�н���";
		break;
	case 150221:
		return"���ɹ���������ͷ����Ĭ������";
		break;
	case 150222:
		return"���ɹ���������ͷ�й�����";
		break;
	case 150223:
		return"���ɹ���������ͷ�д����ï����������";
		break;
	case 150300:
		return"���ɹ��������ں���";
		break;
	case 150301:
		return"���ɹ��������ں�����Ͻ��";
		break;
	case 150302:
		return"���ɹ��������ں��к�������";
		break;
	case 150303:
		return"���ɹ��������ں��к�����";
		break;
	case 150304:
		return"���ɹ��������ں����ڴ���";
		break;
	case 150400:
		return"���ɹ������������";
		break;
	case 150401:
		return"���ɹ��������������Ͻ��";
		break;
	case 150402:
		return"���ɹ�����������к�ɽ��";
		break;
	case 150403:
		return"���ɹ������������Ԫ��ɽ��";
		break;
	case 150404:
		return"���ɹ��������������ɽ��";
		break;
	case 150421:
		return"���ɹ�����������а�³�ƶ�����";
		break;
	case 150422:
		return"���ɹ�����������а�������";
		break;
	case 150423:
		return"���ɹ�����������а�������";
		break;
	case 150424:
		return"���ɹ������������������";
		break;
	case 150425:
		return"���ɹ�����������п�ʲ������";
		break;
	case 150426:
		return"���ɹ��������������ţ����";
		break;
	case 150428:
		return"���ɹ�����������п�������";
		break;
	case 150429:
		return"���ɹ������������������";
		break;
	case 150430:
		return"���ɹ�����������а�����";
		break;
	case 152100:
		return"���ɹ����������ױ�����";
		break;
	case 152101:
		return"���ɹ����������ױ����˺�������";
		break;
	case 152102:
		return"���ɹ����������ױ�������������";
		break;
	case 152103:
		return"���ɹ����������ױ�������������";
		break;
	case 152104:
		return"���ɹ����������ױ���������ʯ��";
		break;
	case 152105:
		return"���ɹ����������ױ����˸�����";
		break;
	case 152106:
		return"���ɹ����������ױ����˶��������";
		break;
	case 152122:
		return"���ɹ����������ױ����˰�����";
		break;
	case 152123:
		return"���ɹ����������ױ�����Ī�����ߴ��Ӷ���������";
		break;
	case 152127:
		return"���ɹ����������ױ����˶��״�������";
		break;
	case 152128:
		return"���ɹ����������ױ����˶��¿���������";
		break;
	case 152129:
		return"���ɹ����������ױ������°Ͷ�������";
		break;
	case 152130:
		return"���ɹ����������ױ������°Ͷ�������";
		break;
	case 152131:
		return"���ɹ����������ױ����˳°Ͷ�����";
		break;
	case 152200:
		return"���ɹ��������˰���";
		break;
	case 152201:
		return"���ɹ��������˰�������������";
		break;
	case 152202:
		return"���ɹ��������˰��˰���ɽ��";
		break;
	case 152221:
		return"���ɹ��������˰��˿ƶ�������ǰ��";
		break;
	case 152222:
		return"���ɹ��������˰��˿ƶ�����������";
		break;
	case 152223:
		return"���ɹ��������˰�����������";
		break;
	case 152224:
		return"���ɹ��������˰���ͻȪ��";
		break;
	case 152300:
		return"���ɹ�����������ľ��";
		break;
	case 152301:
		return"���ɹ�����������ľ��ͨ����";
		break;
	case 152302:
		return"���ɹ�����������ľ�˻��ֹ�����";
		break;
	case 152322:
		return"���ɹ�����������ľ�˿ƶ�����������";
		break;
	case 152323:
		return"���ɹ�����������ľ�˿ƶ����������";
		break;
	case 152324:
		return"���ɹ�����������ľ�˿�³��";
		break;
	case 152325:
		return"���ɹ�����������ľ�˿�����";
		break;
	case 152326:
		return"���ɹ�����������ľ��������";
		break;
	case 152327:
		return"���ɹ�����������ľ����³����";
		break;
	case 152500:
		return"���ɹ����������ֹ�����";
		break;
	case 152501:
		return"���ɹ����������ֹ����˶���������";
		break;
	case 152502:
		return"���ɹ����������ֹ��������ֺ�����";
		break;
	case 152522:
		return"���ɹ����������ֹ����˰��͸���";
		break;
	case 152523:
		return"���ɹ����������ֹ���������������";
		break;
	case 152524:
		return"���ɹ����������ֹ���������������";
		break;
	case 152525:
		return"���ɹ����������ֹ����˶�����������";
		break;
	case 152526:
		return"���ɹ����������ֹ�����������������";
		break;
	case 152527:
		return"���ɹ����������ֹ�����̫������";
		break;
	case 152528:
		return"���ɹ����������ֹ����������";
		break;
	case 152529:
		return"���ɹ����������ֹ������������";
		break;
	case 152530:
		return"���ɹ����������ֹ�����������";
		break;
	case 152531:
		return"���ɹ����������ֹ����˶�����";
		break;
	case 152600:
		return"���ɹ������������첼��";
		break;
	case 152601:
		return"���ɹ������������첼�˼�����";
		break;
	case 152602:
		return"���ɹ������������첼�˷�����";
		break;
	case 152624:
		return"���ɹ������������첼��׿����";
		break;
	case 152625:
		return"���ɹ������������첼�˻�����";
		break;
	case 152626:
		return"���ɹ������������첼���̶���";
		break;
	case 152627:
		return"���ɹ������������첼���˺���";
		break;
	case 152629:
		return"���ɹ������������첼��������";
		break;
	case 152630:
		return"���ɹ������������첼�˲��������ǰ��";
		break;
	case 152631:
		return"���ɹ������������첼�˲������������";
		break;
	case 152632:
		return"���ɹ������������첼�˲�����������";
		break;
	case 152634:
		return"���ɹ������������첼����������";
		break;
	case 152700:
		return"���ɹ���������������";
		break;
	case 152701:
		return"���ɹ��������������˶�ʤ��";
		break;
	case 152722:
		return"���ɹ��������������˴�������";
		break;
	case 152723:
		return"���ɹ���������������׼�����";
		break;
	case 152724:
		return"���ɹ��������������˶��п�ǰ��";
		break;
	case 152725:
		return"���ɹ��������������˶��п���";
		break;
	case 152726:
		return"���ɹ��������������˺�����";
		break;
	case 152727:
		return"���ɹ���������������������";
		break;
	case 152728:
		return"���ɹ������������������������";
		break;
	case 152800:
		return"���ɹ������������׶���";
		break;
	case 152801:
		return"���ɹ������������׶����ٺ���";
		break;
	case 152822:
		return"���ɹ������������׶�����ԭ��";
		break;
	case 152823:
		return"���ɹ������������׶��������";
		break;
	case 152824:
		return"���ɹ������������׶���������ǰ��";
		break;
	case 152825:
		return"���ɹ������������׶�������������";
		break;
	case 152826:
		return"���ɹ������������׶��������غ���";
		break;
	case 152827:
		return"���ɹ������������׶��˺�������";
		break;
	case 152900:
		return"���ɹ���������������";
		break;
	case 152921:
		return"���ɹ��������������˰���������";
		break;
	case 152922:
		return"���ɹ��������������˰���������";
		break;
	case 152923:
		return"���ɹ��������������˶������";
		break;
	case 210000:
		return"����ʡ";
		break;
	case 210100:
		return"����ʡ������";
		break;
	case 210101:
		return"����ʡ��������Ͻ��";
		break;
	case 210102:
		return"����ʡ�����к�ƽ��";
		break;
	case 210103:
		return"����ʡ�����������";
		break;
	case 210104:
		return"����ʡ�����д���";
		break;
	case 210105:
		return"����ʡ�����лʹ���";
		break;
	case 210106:
		return"����ʡ������������";
		break;
	case 210111:
		return"����ʡ�������ռ�����";
		break;
	case 210112:
		return"����ʡ�����ж�����";
		break;
	case 210113:
		return"����ʡ�������³�����";
		break;
	case 210114:
		return"����ʡ�������ں���";
		break;
	case 210122:
		return"����ʡ������������";
		break;
	case 210123:
		return"����ʡ�����п�ƽ��";
		break;
	case 210124:
		return"����ʡ�����з�����";
		break;
	case 210181:
		return"����ʡ������������";
		break;
	case 210200:
		return"����ʡ������";
		break;
	case 210201:
		return"����ʡ��������Ͻ��";
		break;
	case 210202:
		return"����ʡ��������ɽ��";
		break;
	case 210203:
		return"����ʡ������������";
		break;
	case 210204:
		return"����ʡ������ɳ�ӿ���";
		break;
	case 210211:
		return"����ʡ�����иʾ�����";
		break;
	case 210212:
		return"����ʡ��������˳����";
		break;
	case 210213:
		return"����ʡ�����н�����";
		break;
	case 210224:
		return"����ʡ�����г�����";
		break;
	case 210281:
		return"����ʡ�������߷�����";
		break;
	case 210282:
		return"����ʡ��������������";
		break;
	case 210283:
		return"����ʡ������ׯ����";
		break;
	case 210300:
		return"����ʡ��ɽ��";
		break;
	case 210301:
		return"����ʡ��ɽ����Ͻ��";
		break;
	case 210302:
		return"����ʡ��ɽ��������";
		break;
	case 210303:
		return"����ʡ��ɽ��������";
		break;
	case 210304:
		return"����ʡ��ɽ����ɽ��";
		break;
	case 210311:
		return"����ʡ��ɽ��ǧɽ��";
		break;
	case 210321:
		return"����ʡ��ɽ��̨����";
		break;
	case 210323:
		return"����ʡ��ɽ���������������";
		break;
	case 210381:
		return"����ʡ��ɽ�к�����";
		break;
	case 210400:
		return"����ʡ��˳��";
		break;
	case 210401:
		return"����ʡ��˳����Ͻ��";
		break;
	case 210402:
		return"����ʡ��˳���¸���";
		break;
	case 210403:
		return"����ʡ��˳��¶����";
		break;
	case 210404:
		return"����ʡ��˳��������";
		break;
	case 210411:
		return"����ʡ��˳��˳����";
		break;
	case 210421:
		return"����ʡ��˳�и�˳��";
		break;
	case 210422:
		return"����ʡ��˳���±�����������";
		break;
	case 210423:
		return"����ʡ��˳����ԭ����������";
		break;
	case 210500:
		return"����ʡ��Ϫ��";
		break;
	case 210501:
		return"����ʡ��Ϫ����Ͻ��";
		break;
	case 210502:
		return"����ʡ��Ϫ��ƽɽ��";
		break;
	case 210503:
		return"����ʡ��Ϫ��Ϫ����";
		break;
	case 210504:
		return"����ʡ��Ϫ����ɽ��";
		break;
	case 210505:
		return"����ʡ��Ϫ���Ϸ���";
		break;
	case 210521:
		return"����ʡ��Ϫ�б�Ϫ����������";
		break;
	case 210522:
		return"����ʡ��Ϫ�л�������������";
		break;
	case 210600:
		return"����ʡ������";
		break;
	case 210601:
		return"����ʡ��������Ͻ��";
		break;
	case 210602:
		return"����ʡ������Ԫ����";
		break;
	case 210603:
		return"����ʡ������������";
		break;
	case 210604:
		return"����ʡ����������";
		break;
	case 210624:
		return"����ʡ�����п������������";
		break;
	case 210681:
		return"����ʡ�����ж�����";
		break;
	case 210682:
		return"����ʡ�����з����";
		break;
	case 210700:
		return"����ʡ������";
		break;
	case 210701:
		return"����ʡ��������Ͻ��";
		break;
	case 210702:
		return"����ʡ�����й�����";
		break;
	case 210703:
		return"����ʡ�����������";
		break;
	case 210711:
		return"����ʡ������̫����";
		break;
	case 210726:
		return"����ʡ�����к�ɽ��";
		break;
	case 210727:
		return"����ʡ����������";
		break;
	case 210781:
		return"����ʡ�������躣��";
		break;
	case 210782:
		return"����ʡ�����б�����";
		break;
	case 210800:
		return"����ʡӪ����";
		break;
	case 210801:
		return"����ʡӪ������Ͻ��";
		break;
	case 210802:
		return"����ʡӪ����վǰ��";
		break;
	case 210803:
		return"����ʡӪ����������";
		break;
	case 210804:
		return"����ʡӪ��������Ȧ��";
		break;
	case 210811:
		return"����ʡӪ�����ϱ���";
		break;
	case 210881:
		return"����ʡӪ���и�����";
		break;
	case 210882:
		return"����ʡӪ���д�ʯ����";
		break;
	case 210900:
		return"����ʡ������";
		break;
	case 210901:
		return"����ʡ��������Ͻ��";
		break;
	case 210902:
		return"����ʡ�����к�����";
		break;
	case 210903:
		return"����ʡ������������";
		break;
	case 210904:
		return"����ʡ������̫ƽ��";
		break;
	case 210905:
		return"����ʡ�������������";
		break;
	case 210911:
		return"����ʡ������ϸ����";
		break;
	case 210921:
		return"����ʡ�����и����ɹ���������";
		break;
	case 210922:
		return"����ʡ������������";
		break;
	case 211000:
		return"����ʡ������";
		break;
	case 211001:
		return"����ʡ��������Ͻ��";
		break;
	case 211002:
		return"����ʡ�����а�����";
		break;
	case 211003:
		return"����ʡ��������ʥ��";
		break;
	case 211004:
		return"����ʡ�����к�ΰ��";
		break;
	case 211005:
		return"����ʡ�����й�������";
		break;
	case 211011:
		return"����ʡ������̫�Ӻ���";
		break;
	case 211021:
		return"����ʡ������������";
		break;
	case 211081:
		return"����ʡ�����е�����";
		break;
	case 211100:
		return"����ʡ�̽���";
		break;
	case 211101:
		return"����ʡ�̽�����Ͻ��";
		break;
	case 211102:
		return"����ʡ�̽���˫̨����";
		break;
	case 211103:
		return"����ʡ�̽�����¡̨��";
		break;
	case 211121:
		return"����ʡ�̽��д�����";
		break;
	case 211122:
		return"����ʡ�̽�����ɽ��";
		break;
	case 211200:
		return"����ʡ������";
		break;
	case 211201:
		return"����ʡ��������Ͻ��";
		break;
	case 211202:
		return"����ʡ������������";
		break;
	case 211204:
		return"����ʡ�����������";
		break;
	case 211221:
		return"����ʡ������������";
		break;
	case 211223:
		return"����ʡ������������";
		break;
	case 211224:
		return"����ʡ�����в�ͼ��";
		break;
	case 211281:
		return"����ʡ������������";
		break;
	case 211282:
		return"����ʡ�����п�ԭ��";
		break;
	case 211300:
		return"����ʡ������";
		break;
	case 211301:
		return"����ʡ��������Ͻ��";
		break;
	case 211302:
		return"����ʡ������˫����";
		break;
	case 211303:
		return"����ʡ������������";
		break;
	case 211321:
		return"����ʡ�����г�����";
		break;
	case 211322:
		return"����ʡ�����н�ƽ��";
		break;
	case 211324:
		return"����ʡ�����п����������ɹ���������";
		break;
	case 211381:
		return"����ʡ�����б�Ʊ��";
		break;
	case 211382:
		return"����ʡ��������Դ��";
		break;
	case 211400:
		return"����ʡ��«����";
		break;
	case 211401:
		return"����ʡ��«������Ͻ��";
		break;
	case 211402:
		return"����ʡ��«������ɽ��";
		break;
	case 211403:
		return"����ʡ��«����������";
		break;
	case 211404:
		return"����ʡ��«������Ʊ��";
		break;
	case 211421:
		return"����ʡ��«����������";
		break;
	case 211422:
		return"����ʡ��«���н�����";
		break;
	case 211481:
		return"����ʡ��«�����˳���";
		break;
	case 220000:
		return"����ʡ";
		break;
	case 220100:
		return"����ʡ������";
		break;
	case 220101:
		return"����ʡ��������Ͻ��";
		break;
	case 220102:
		return"����ʡ�������Ϲ���";
		break;
	case 220103:
		return"����ʡ�����п����";
		break;
	case 220104:
		return"����ʡ�����г�����";
		break;
	case 220105:
		return"����ʡ�����ж�����";
		break;
	case 220106:
		return"����ʡ��������԰��";
		break;
	case 220112:
		return"����ʡ������˫����";
		break;
	case 220122:
		return"����ʡ������ũ����";
		break;
	case 220181:
		return"����ʡ�����о�̨��";
		break;
	case 220182:
		return"����ʡ������������";
		break;
	case 220183:
		return"����ʡ�����е»���";
		break;
	case 220200:
		return"����ʡ������";
		break;
	case 220201:
		return"����ʡ��������Ͻ��";
		break;
	case 220202:
		return"����ʡ�����в�����";
		break;
	case 220203:
		return"����ʡ��������̶��";
		break;
	case 220204:
		return"����ʡ�����д�Ӫ��";
		break;
	case 220211:
		return"����ʡ�����з�����";
		break;
	case 220221:
		return"����ʡ������������";
		break;
	case 220281:
		return"����ʡ�������Ժ���";
		break;
	case 220282:
		return"����ʡ�����������";
		break;
	case 220283:
		return"����ʡ������������";
		break;
	case 220284:
		return"����ʡ��������ʯ��";
		break;
	case 220300:
		return"����ʡ��ƽ��";
		break;
	case 220301:
		return"����ʡ��ƽ����Ͻ��";
		break;
	case 220302:
		return"����ʡ��ƽ��������";
		break;
	case 220303:
		return"����ʡ��ƽ��������";
		break;
	case 220322:
		return"����ʡ��ƽ��������";
		break;
	case 220323:
		return"����ʡ��ƽ����ͨ����������";
		break;
	case 220381:
		return"����ʡ��ƽ�й�������";
		break;
	case 220382:
		return"����ʡ��ƽ��˫����";
		break;
	case 220400:
		return"����ʡ��Դ��";
		break;
	case 220401:
		return"����ʡ��Դ����Ͻ��";
		break;
	case 220402:
		return"����ʡ��Դ����ɽ��";
		break;
	case 220403:
		return"����ʡ��Դ��������";
		break;
	case 220421:
		return"����ʡ��Դ�ж�����";
		break;
	case 220422:
		return"����ʡ��Դ�ж�����";
		break;
	case 220500:
		return"����ʡͨ����";
		break;
	case 220501:
		return"����ʡͨ������Ͻ��";
		break;
	case 220502:
		return"����ʡͨ���ж�����";
		break;
	case 220503:
		return"����ʡͨ���ж�������";
		break;
	case 220521:
		return"����ʡͨ����ͨ����";
		break;
	case 220523:
		return"����ʡͨ���л�����";
		break;
	case 220524:
		return"����ʡͨ����������";
		break;
	case 220581:
		return"����ʡͨ����÷�ӿ���";
		break;
	case 220582:
		return"����ʡͨ���м�����";
		break;
	case 220600:
		return"����ʡ��ɽ��";
		break;
	case 220601:
		return"����ʡ��ɽ����Ͻ��";
		break;
	case 220602:
		return"����ʡ��ɽ�а˵�����";
		break;
	case 220621:
		return"����ʡ��ɽ�и�����";
		break;
	case 220622:
		return"����ʡ��ɽ�о�����";
		break;
	case 220623:
		return"����ʡ��ɽ�г��׳�����������";
		break;
	case 220625:
		return"����ʡ��ɽ�н�Դ��";
		break;
	case 220681:
		return"����ʡ��ɽ���ٽ���";
		break;
	case 220700:
		return"����ʡ��ԭ��";
		break;
	case 220701:
		return"����ʡ��ԭ����Ͻ��";
		break;
	case 220702:
		return"����ʡ��ԭ��������";
		break;
	case 220721:
		return"����ʡ��ԭ��ǰ������˹�ɹ���������";
		break;
	case 220722:
		return"����ʡ��ԭ�г�����";
		break;
	case 220723:
		return"����ʡ��ԭ��Ǭ����";
		break;
	case 220724:
		return"����ʡ��ԭ�з�����";
		break;
	case 220800:
		return"����ʡ�׳���";
		break;
	case 220801:
		return"����ʡ�׳�����Ͻ��";
		break;
	case 220802:
		return"����ʡ�׳���䬱���";
		break;
	case 220821:
		return"����ʡ�׳���������";
		break;
	case 220822:
		return"����ʡ�׳���ͨ����";
		break;
	case 220881:
		return"����ʡ�׳��������";
		break;
	case 220882:
		return"����ʡ�׳��д���";
		break;
	case 222400:
		return"����ʡ�ӱ߳�����������";
		break;
	case 222401:
		return"����ʡ�ӱ߳������������Ӽ���";
		break;
	case 222402:
		return"����ʡ�ӱ߳�����������ͼ����";
		break;
	case 222403:
		return"����ʡ�ӱ߳����������ݶػ���";
		break;
	case 222404:
		return"����ʡ�ӱ߳�����������������";
		break;
	case 222405:
		return"����ʡ�ӱ߳�����������������";
		break;
	case 222406:
		return"����ʡ�ӱ߳����������ݺ�����";
		break;
	case 222424:
		return"����ʡ�ӱ߳�����������������";
		break;
	case 222426:
		return"����ʡ�ӱ߳����������ݰ�ͼ��";
		break;
	case 230000:
		return"������ʡ";
		break;
	case 230100:
		return"������ʡ��������";
		break;
	case 230101:
		return"������ʡ����������Ͻ��";
		break;
	case 230102:
		return"������ʡ�������е�����";
		break;
	case 230103:
		return"������ʡ���������ϸ���";
		break;
	case 230104:
		return"������ʡ�������е�����";
		break;
	case 230105:
		return"������ʡ��������̫ƽ��";
		break;
	case 230106:
		return"������ʡ���������㷻��";
		break;
	case 230107:
		return"������ʡ�������ж�����";
		break;
	case 230108:
		return"������ʡ��������ƽ����";
		break;
	case 230121:
		return"������ʡ�������к�����";
		break;
	case 230123:
		return"������ʡ��������������";
		break;
	case 230124:
		return"������ʡ�������з�����";
		break;
	case 230125:
		return"������ʡ�������б���";
		break;
	case 230126:
		return"������ʡ�������а�����";
		break;
	case 230127:
		return"������ʡ��������ľ����";
		break;
	case 230128:
		return"������ʡ��������ͨ����";
		break;
	case 230129:
		return"������ʡ��������������";
		break;
	case 230181:
		return"������ʡ�������а�����";
		break;
	case 230182:
		return"������ʡ��������˫����";
		break;
	case 230183:
		return"������ʡ����������־��";
		break;
	case 230184:
		return"������ʡ���������峣��";
		break;
	case 230200:
		return"������ʡ���������";
		break;
	case 230201:
		return"������ʡ�����������Ͻ��";
		break;
	case 230202:
		return"������ʡ�����������ɳ��";
		break;
	case 230203:
		return"������ʡ��������н�����";
		break;
	case 230204:
		return"������ʡ���������������";
		break;
	case 230205:
		return"������ʡ��������а���Ϫ��";
		break;
	case 230206:
		return"������ʡ��������и���������";
		break;
	case 230207:
		return"������ʡ�������������ɽ��";
		break;
	case 230208:
		return"������ʡ���������÷��˹���Ӷ�����";
		break;
	case 230221:
		return"������ʡ���������������";
		break;
	case 230223:
		return"������ʡ���������������";
		break;
	case 230224:
		return"������ʡ���������̩����";
		break;
	case 230225:
		return"������ʡ��������и�����";
		break;
	case 230227:
		return"������ʡ��������и�ԣ��";
		break;
	case 230229:
		return"������ʡ��������п�ɽ��";
		break;
	case 230230:
		return"������ʡ��������п˶���";
		break;
	case 230231:
		return"������ʡ��������а�Ȫ��";
		break;
	case 230281:
		return"������ʡ���������ګ����";
		break;
	case 230300:
		return"������ʡ������";
		break;
	case 230301:
		return"������ʡ��������Ͻ��";
		break;
	case 230302:
		return"������ʡ�����м�����";
		break;
	case 230303:
		return"������ʡ�����к�ɽ��";
		break;
	case 230304:
		return"������ʡ�����еε���";
		break;
	case 230305:
		return"������ʡ������������";
		break;
	case 230306:
		return"������ʡ�����г��Ӻ���";
		break;
	case 230307:
		return"������ʡ��������ɽ��";
		break;
	case 230321:
		return"������ʡ�����м�����";
		break;
	case 230381:
		return"������ʡ�����л�����";
		break;
	case 230382:
		return"������ʡ��������ɽ��";
		break;
	case 230400:
		return"������ʡ�׸���";
		break;
	case 230401:
		return"������ʡ�׸�����Ͻ��";
		break;
	case 230402:
		return"������ʡ�׸���������";
		break;
	case 230403:
		return"������ʡ�׸��й�ũ��";
		break;
	case 230404:
		return"������ʡ�׸�����ɽ��";
		break;
	case 230405:
		return"������ʡ�׸����˰���";
		break;
	case 230406:
		return"������ʡ�׸��ж�ɽ��";
		break;
	case 230407:
		return"������ʡ�׸�����ɽ��";
		break;
	case 230421:
		return"������ʡ�׸����ܱ���";
		break;
	case 230422:
		return"������ʡ�׸��������";
		break;
	case 230500:
		return"������ʡ˫Ѽɽ��";
		break;
	case 230501:
		return"������ʡ˫Ѽɽ����Ͻ��";
		break;
	case 230502:
		return"������ʡ˫Ѽɽ�м�ɽ��";
		break;
	case 230503:
		return"������ʡ˫Ѽɽ���붫��";
		break;
	case 230505:
		return"������ʡ˫Ѽɽ���ķ�̨��";
		break;
	case 230506:
		return"������ʡ˫Ѽɽ�б�ɽ��";
		break;
	case 230521:
		return"������ʡ˫Ѽɽ�м�����";
		break;
	case 230522:
		return"������ʡ˫Ѽɽ��������";
		break;
	case 230523:
		return"������ʡ˫Ѽɽ�б�����";
		break;
	case 230524:
		return"������ʡ˫Ѽɽ���ĺ���";
		break;
	case 230600:
		return"������ʡ������";
		break;
	case 230601:
		return"������ʡ��������Ͻ��";
		break;
	case 230602:
		return"������ʡ����������ͼ��";
		break;
	case 230603:
		return"������ʡ������������";
		break;
	case 230604:
		return"������ʡ�������ú�·��";
		break;
	case 230605:
		return"������ʡ�����к����";
		break;
	case 230606:
		return"������ʡ�����д�ͬ��";
		break;
	case 230621:
		return"������ʡ������������";
		break;
	case 230622:
		return"������ʡ��������Դ��";
		break;
	case 230623:
		return"������ʡ�������ֵ���";
		break;
	case 230624:
		return"������ʡ�����жŶ������ɹ���������";
		break;
	case 230700:
		return"������ʡ������";
		break;
	case 230701:
		return"������ʡ��������Ͻ��";
		break;
	case 230702:
		return"������ʡ������������";
		break;
	case 230703:
		return"������ʡ�������ϲ���";
		break;
	case 230704:
		return"������ʡ�������Ѻ���";
		break;
	case 230705:
		return"������ʡ������������";
		break;
	case 230706:
		return"������ʡ�����д�����";
		break;
	case 230707:
		return"������ʡ������������";
		break;
	case 230708:
		return"������ʡ��������Ϫ��";
		break;
	case 230709:
		return"������ʡ�����н�ɽ����";
		break;
	case 230710:
		return"������ʡ��������Ӫ��";
		break;
	case 230711:
		return"������ʡ�������������";
		break;
	case 230712:
		return"������ʡ��������������";
		break;
	case 230713:
		return"������ʡ�����д�����";
		break;
	case 230714:
		return"������ʡ��������������";
		break;
	case 230715:
		return"������ʡ�����к�����";
		break;
	case 230716:
		return"������ʡ�������ϸ�����";
		break;
	case 230722:
		return"������ʡ�����м�����";
		break;
	case 230781:
		return"������ʡ������������";
		break;
	case 230800:
		return"������ʡ��ľ˹��";
		break;
	case 230801:
		return"������ʡ��ľ˹����Ͻ��";
		break;
	case 230802:
		return"������ʡ��ľ˹��������";
		break;
	case 230803:
		return"������ʡ��ľ˹��������";
		break;
	case 230804:
		return"������ʡ��ľ˹��ǰ����";
		break;
	case 230805:
		return"������ʡ��ľ˹�ж�����";
		break;
	case 230811:
		return"������ʡ��ľ˹�н���";
		break;
	case 230822:
		return"������ʡ��ľ˹��������";
		break;
	case 230826:
		return"������ʡ��ľ˹���봨��";
		break;
	case 230828:
		return"������ʡ��ľ˹����ԭ��";
		break;
	case 230833:
		return"������ʡ��ľ˹�и�Զ��";
		break;
	case 230881:
		return"������ʡ��ľ˹��ͬ����";
		break;
	case 230882:
		return"������ʡ��ľ˹�и�����";
		break;
	case 230900:
		return"������ʡ��̨����";
		break;
	case 230901:
		return"������ʡ��̨������Ͻ��";
		break;
	case 230902:
		return"������ʡ��̨����������";
		break;
	case 230903:
		return"������ʡ��̨������ɽ��";
		break;
	case 230904:
		return"������ʡ��̨�������Ӻ���";
		break;
	case 230921:
		return"������ʡ��̨���в�����";
		break;
	case 231000:
		return"������ʡĵ������";
		break;
	case 231001:
		return"������ʡĵ��������Ͻ��";
		break;
	case 231002:
		return"������ʡĵ�����ж�����";
		break;
	case 231003:
		return"������ʡĵ������������";
		break;
	case 231004:
		return"������ʡĵ�����а�����";
		break;
	case 231005:
		return"������ʡĵ������������";
		break;
	case 231024:
		return"������ʡĵ�����ж�����";
		break;
	case 231025:
		return"������ʡĵ�������ֿ���";
		break;
	case 231081:
		return"������ʡĵ��������Һ���";
		break;
	case 231083:
		return"������ʡĵ�����к�����";
		break;
	case 231084:
		return"������ʡĵ������������";
		break;
	case 231085:
		return"������ʡĵ������������";
		break;
	case 231100:
		return"������ʡ�ں���";
		break;
	case 231101:
		return"������ʡ�ں�����Ͻ��";
		break;
	case 231102:
		return"������ʡ�ں��а�����";
		break;
	case 231121:
		return"������ʡ�ں����۽���";
		break;
	case 231123:
		return"������ʡ�ں���ѷ����";
		break;
	case 231124:
		return"������ʡ�ں���������";
		break;
	case 231181:
		return"������ʡ�ں��б�����";
		break;
	case 231182:
		return"������ʡ�ں������������";
		break;
	case 232300:
		return"������ʡ�绯����";
		break;
	case 232301:
		return"������ʡ�绯�����绯��";
		break;
	case 232302:
		return"������ʡ�绯����������";
		break;
	case 232303:
		return"������ʡ�绯�����ض���";
		break;
	case 232304:
		return"������ʡ�绯����������";
		break;
	case 232324:
		return"������ʡ�绯����������";
		break;
	case 232325:
		return"������ʡ�绯����������";
		break;
	case 232326:
		return"������ʡ�绯���������";
		break;
	case 232330:
		return"������ʡ�绯�����찲��";
		break;
	case 232331:
		return"������ʡ�绯������ˮ��";
		break;
	case 232332:
		return"������ʡ�绯����������";
		break;
	case 232700:
		return"������ʡ���˰������";
		break;
	case 232721:
		return"������ʡ���˰������������";
		break;
	case 232722:
		return"������ʡ���˰������������";
		break;
	case 232723:
		return"������ʡ���˰������Į����";
		break;
	case 310000:
		return"�Ϻ���";
		break;
	case 310100:
		return"�Ϻ�����Ͻ��";
		break;
	case 310101:
		return"�Ϻ��л�����";
		break;
	case 310102:
		return"�Ϻ���������";
		break;
	case 310103:
		return"�Ϻ���¬����";
		break;
	case 310104:
		return"�Ϻ��������";
		break;
	case 310105:
		return"�Ϻ��г�����";
		break;
	case 310106:
		return"�Ϻ��о�����";
		break;
	case 310107:
		return"�Ϻ���������";
		break;
	case 310108:
		return"�Ϻ���բ����";
		break;
	case 310109:
		return"�Ϻ��к����";
		break;
	case 310110:
		return"�Ϻ���������";
		break;
	case 310112:
		return"�Ϻ���������";
		break;
	case 310113:
		return"�Ϻ��б�ɽ��";
		break;
	case 310114:
		return"�Ϻ��мζ���";
		break;
	case 310115:
		return"�Ϻ����ֶ�����";
		break;
	case 310116:
		return"�Ϻ��н�ɽ��";
		break;
	case 310117:
		return"�Ϻ����ɽ���";
		break;
	case 310200:
		return"�Ϻ�����";
		break;
	case 310225:
		return"�Ϻ����ϻ���";
		break;
	case 310226:
		return"�Ϻ��з�����";
		break;
	case 310229:
		return"�Ϻ���������";
		break;
	case 310230:
		return"�Ϻ��г�����";
		break;
	case 320000:
		return"����ʡ";
		break;
	case 320100:
		return"����ʡ�Ͼ���";
		break;
	case 320101:
		return"����ʡ�Ͼ�����Ͻ��";
		break;
	case 320102:
		return"����ʡ�Ͼ���������";
		break;
	case 320103:
		return"����ʡ�Ͼ��а�����";
		break;
	case 320104:
		return"����ʡ�Ͼ����ػ���";
		break;
	case 320105:
		return"����ʡ�Ͼ��н�����";
		break;
	case 320106:
		return"����ʡ�Ͼ��й�¥��";
		break;
	case 320107:
		return"����ʡ�Ͼ����¹���";
		break;
	case 320111:
		return"����ʡ�Ͼ����ֿ���";
		break;
	case 320112:
		return"����ʡ�Ͼ��д���";
		break;
	case 320113:
		return"����ʡ�Ͼ�����ϼ��";
		break;
	case 320114:
		return"����ʡ�Ͼ����껨̨��";
		break;
	case 320121:
		return"����ʡ�Ͼ��н�����";
		break;
	case 320122:
		return"����ʡ�Ͼ��н�����";
		break;
	case 320123:
		return"����ʡ�Ͼ���������";
		break;
	case 320124:
		return"����ʡ�Ͼ�����ˮ��";
		break;
	case 320125:
		return"����ʡ�Ͼ��иߴ���";
		break;
	case 320200:
		return"����ʡ������";
		break;
	case 320201:
		return"����ʡ��������Ͻ��";
		break;
	case 320202:
		return"����ʡ�����г簲��";
		break;
	case 320203:
		return"����ʡ�������ϳ���";
		break;
	case 320204:
		return"����ʡ�����б�����";
		break;
	case 320211:
		return"����ʡ�����н���";
		break;
	case 320281:
		return"����ʡ�����н�����";
		break;
	case 320282:
		return"����ʡ������������";
		break;
	case 320283:
		return"����ʡ��������ɽ��";
		break;
	case 320300:
		return"����ʡ������";
		break;
	case 320301:
		return"����ʡ��������Ͻ��";
		break;
	case 320302:
		return"����ʡ�����й�¥��";
		break;
	case 320303:
		return"����ʡ������������";
		break;
	case 320304:
		return"����ʡ�����о�����";
		break;
	case 320305:
		return"����ʡ�����м�����";
		break;
	case 320311:
		return"����ʡ������Ȫɽ��";
		break;
	case 320321:
		return"����ʡ�����з���";
		break;
	case 320322:
		return"����ʡ����������";
		break;
	case 320323:
		return"����ʡ������ͭɽ��";
		break;
	case 320324:
		return"����ʡ�����������";
		break;
	case 320381:
		return"����ʡ������������";
		break;
	case 320382:
		return"����ʡ������������";
		break;
	case 320400:
		return"����ʡ������";
		break;
	case 320401:
		return"����ʡ��������Ͻ��";
		break;
	case 320402:
		return"����ʡ������������";
		break;
	case 320404:
		return"����ʡ��������¥��";
		break;
	case 320405:
		return"����ʡ��������������";
		break;
	case 320411:
		return"����ʡ�����н���";
		break;
	case 320481:
		return"����ʡ������������";
		break;
	case 320482:
		return"����ʡ�����н�̳��";
		break;
	case 320483:
		return"����ʡ�����������";
		break;
	case 320500:
		return"����ʡ������";
		break;
	case 320501:
		return"����ʡ��������Ͻ��";
		break;
	case 320502:
		return"����ʡ�����в�����";
		break;
	case 320503:
		return"����ʡ������ƽ����";
		break;
	case 320504:
		return"����ʡ�����н�����";
		break;
	case 320511:
		return"����ʡ�����н���";
		break;
	case 320581:
		return"����ʡ�����г�����";
		break;
	case 320582:
		return"����ʡ�������żҸ���";
		break;
	case 320583:
		return"����ʡ��������ɽ��";
		break;
	case 320584:
		return"����ʡ�������⽭��";
		break;
	case 320585:
		return"����ʡ������̫����";
		break;
	case 320586:
		return"����ʡ������������";
		break;
	case 320600:
		return"����ʡ��ͨ��";
		break;
	case 320601:
		return"����ʡ��ͨ����Ͻ��";
		break;
	case 320602:
		return"����ʡ��ͨ�г紨��";
		break;
	case 320611:
		return"����ʡ��ͨ�и�բ��";
		break;
	case 320621:
		return"����ʡ��ͨ�к�����";
		break;
	case 320623:
		return"����ʡ��ͨ���綫��";
		break;
	case 320681:
		return"����ʡ��ͨ��������";
		break;
	case 320682:
		return"����ʡ��ͨ�������";
		break;
	case 320683:
		return"����ʡ��ͨ��ͨ����";
		break;
	case 320684:
		return"����ʡ��ͨ�к�����";
		break;
	case 320700:
		return"����ʡ���Ƹ���";
		break;
	case 320701:
		return"����ʡ���Ƹ�����Ͻ��";
		break;
	case 320703:
		return"����ʡ���Ƹ���������";
		break;
	case 320704:
		return"����ʡ���Ƹ�����̨��";
		break;
	case 320705:
		return"����ʡ���Ƹ���������";
		break;
	case 320706:
		return"����ʡ���Ƹ��к�����";
		break;
	case 320721:
		return"����ʡ���Ƹ��и�����";
		break;
	case 320722:
		return"����ʡ���Ƹ��ж�����";
		break;
	case 320723:
		return"����ʡ���Ƹ��й�����";
		break;
	case 320724:
		return"����ʡ���Ƹ��й�����";
		break;
	case 320800:
		return"����ʡ������";
		break;
	case 320801:
		return"����ʡ��������Ͻ��";
		break;
	case 320802:
		return"����ʡ�����������";
		break;
	case 320811:
		return"����ʡ������������";
		break;
	case 320821:
		return"����ʡ�����л�����";
		break;
	case 320826:
		return"����ʡ��������ˮ��";
		break;
	case 320829:
		return"����ʡ�����к�����";
		break;
	case 320830:
		return"����ʡ������������";
		break;
	case 320831:
		return"����ʡ�����н����";
		break;
	case 320882:
		return"����ʡ�����л�����";
		break;
	case 320900:
		return"����ʡ�γ���";
		break;
	case 320901:
		return"����ʡ�γ�����Ͻ��";
		break;
	case 320902:
		return"����ʡ�γ��г���";
		break;
	case 320921:
		return"����ʡ�γ�����ˮ��";
		break;
	case 320922:
		return"����ʡ�γ��б�����";
		break;
	case 320923:
		return"����ʡ�γ��и�����";
		break;
	case 320924:
		return"����ʡ�γ���������";
		break;
	case 320925:
		return"����ʡ�γ��н�����";
		break;
	case 320928:
		return"����ʡ�γ����ζ���";
		break;
	case 320981:
		return"����ʡ�γ��ж�̨��";
		break;
	case 320982:
		return"����ʡ�γ��д����";
		break;
	case 321000:
		return"����ʡ������";
		break;
	case 321001:
		return"����ʡ��������Ͻ��";
		break;
	case 321002:
		return"����ʡ�����й�����";
		break;
	case 321011:
		return"����ʡ�����н���";
		break;
	case 321023:
		return"����ʡ�����б�Ӧ��";
		break;
	case 321027:
		return"����ʡ������������";
		break;
	case 321081:
		return"����ʡ������������";
		break;
	case 321084:
		return"����ʡ�����и�����";
		break;
	case 321088:
		return"����ʡ�����н�����";
		break;
	case 321100:
		return"����ʡ����";
		break;
	case 321101:
		return"����ʡ������Ͻ��";
		break;
	case 321102:
		return"����ʡ���о�����";
		break;
	case 321111:
		return"����ʡ����������";
		break;
	case 321121:
		return"����ʡ���е�ͽ��";
		break;
	case 321181:
		return"����ʡ���е�����";
		break;
	case 321182:
		return"����ʡ����������";
		break;
	case 321183:
		return"����ʡ���о�����";
		break;
	case 321200:
		return"����ʡ̩����";
		break;
	case 321201:
		return"����ʡ̩������Ͻ��";
		break;
	case 321202:
		return"����ʡ̩���к�����";
		break;
	case 321203:
		return"����ʡ̩���и߸���";
		break;
	case 321281:
		return"����ʡ̩�����˻���";
		break;
	case 321282:
		return"����ʡ̩���о�����";
		break;
	case 321283:
		return"����ʡ̩����̩����";
		break;
	case 321284:
		return"����ʡ̩���н�����";
		break;
	case 321300:
		return"����ʡ��Ǩ��";
		break;
	case 321301:
		return"����ʡ��Ǩ����Ͻ��";
		break;
	case 321302:
		return"����ʡ��Ǩ���޳���";
		break;
	case 321321:
		return"����ʡ��Ǩ����ԥ��";
		break;
	case 321322:
		return"����ʡ��Ǩ��������";
		break;
	case 321323:
		return"����ʡ��Ǩ��������";
		break;
	case 321324:
		return"����ʡ��Ǩ��������";
		break;
	case 330000:
		return"�㽭ʡ";
		break;
	case 330100:
		return"�㽭ʡ������";
		break;
	case 330101:
		return"�㽭ʡ��������Ͻ��";
		break;
	case 330102:
		return"�㽭ʡ�������ϳ���";
		break;
	case 330103:
		return"�㽭ʡ�������³���";
		break;
	case 330104:
		return"�㽭ʡ�����н�����";
		break;
	case 330105:
		return"�㽭ʡ�����й�����";
		break;
	case 330106:
		return"�㽭ʡ������������";
		break;
	case 330108:
		return"�㽭ʡ�����б�����";
		break;
	case 330122:
		return"�㽭ʡ������ͩ®��";
		break;
	case 330127:
		return"�㽭ʡ�����д�����";
		break;
	case 330181:
		return"�㽭ʡ��������ɽ��";
		break;
	case 330182:
		return"�㽭ʡ�����н�����";
		break;
	case 330183:
		return"�㽭ʡ�����и�����";
		break;
	case 330184:
		return"�㽭ʡ�������ຼ��";
		break;
	case 330185:
		return"�㽭ʡ�������ٰ���";
		break;
	case 330200:
		return"�㽭ʡ������";
		break;
	case 330201:
		return"�㽭ʡ��������Ͻ��";
		break;
	case 330203:
		return"�㽭ʡ�����к�����";
		break;
	case 330204:
		return"�㽭ʡ�����н�����";
		break;
	case 330205:
		return"�㽭ʡ�����н�����";
		break;
	case 330206:
		return"�㽭ʡ�����б�����";
		break;
	case 330211:
		return"�㽭ʡ����������";
		break;
	case 330225:
		return"�㽭ʡ��������ɽ��";
		break;
	case 330226:
		return"�㽭ʡ������������";
		break;
	case 330227:
		return"�㽭ʡ������۴��";
		break;
	case 330281:
		return"�㽭ʡ��������Ҧ��";
		break;
	case 330282:
		return"�㽭ʡ�����д�Ϫ��";
		break;
	case 330283:
		return"�㽭ʡ�����з��";
		break;
	case 330300:
		return"�㽭ʡ������";
		break;
	case 330301:
		return"�㽭ʡ��������Ͻ��";
		break;
	case 330302:
		return"�㽭ʡ������¹����";
		break;
	case 330303:
		return"�㽭ʡ������������";
		break;
	case 330304:
		return"�㽭ʡ������걺���";
		break;
	case 330322:
		return"�㽭ʡ�����ж�ͷ��";
		break;
	case 330324:
		return"�㽭ʡ������������";
		break;
	case 330326:
		return"�㽭ʡ������ƽ����";
		break;
	case 330327:
		return"�㽭ʡ�����в�����";
		break;
	case 330328:
		return"�㽭ʡ�������ĳ���";
		break;
	case 330329:
		return"�㽭ʡ������̩˳��";
		break;
	case 330381:
		return"�㽭ʡ����������";
		break;
	case 330382:
		return"�㽭ʡ������������";
		break;
	case 330400:
		return"�㽭ʡ������";
		break;
	case 330401:
		return"�㽭ʡ��������Ͻ��";
		break;
	case 330402:
		return"�㽭ʡ�����������";
		break;
	case 330411:
		return"�㽭ʡ�����н���";
		break;
	case 330421:
		return"�㽭ʡ�����м�����";
		break;
	case 330424:
		return"�㽭ʡ�����к�����";
		break;
	case 330481:
		return"�㽭ʡ�����к�����";
		break;
	case 330482:
		return"�㽭ʡ������ƽ����";
		break;
	case 330483:
		return"�㽭ʡ������ͩ����";
		break;
	case 330500:
		return"�㽭ʡ������";
		break;
	case 330501:
		return"�㽭ʡ��������Ͻ��";
		break;
	case 330521:
		return"�㽭ʡ�����е�����";
		break;
	case 330522:
		return"�㽭ʡ�����г�����";
		break;
	case 330523:
		return"�㽭ʡ�����а�����";
		break;
	case 330600:
		return"�㽭ʡ������";
		break;
	case 330601:
		return"�㽭ʡ��������Ͻ��";
		break;
	case 330602:
		return"�㽭ʡ������Խ����";
		break;
	case 330621:
		return"�㽭ʡ������������";
		break;
	case 330624:
		return"�㽭ʡ�������²���";
		break;
	case 330681:
		return"�㽭ʡ������������";
		break;
	case 330682:
		return"�㽭ʡ������������";
		break;
	case 330683:
		return"�㽭ʡ������������";
		break;
	case 330700:
		return"�㽭ʡ����";
		break;
	case 330701:
		return"�㽭ʡ������Ͻ��";
		break;
	case 330702:
		return"�㽭ʡ�����ĳ���";
		break;
	case 330721:
		return"�㽭ʡ���н���";
		break;
	case 330723:
		return"�㽭ʡ����������";
		break;
	case 330726:
		return"�㽭ʡ�����ֽ���";
		break;
	case 330727:
		return"�㽭ʡ�����Ͱ���";
		break;
	case 330781:
		return"�㽭ʡ������Ϫ��";
		break;
	case 330782:
		return"�㽭ʡ����������";
		break;
	case 330783:
		return"�㽭ʡ���ж�����";
		break;
	case 330784:
		return"�㽭ʡ����������";
		break;
	case 330800:
		return"�㽭ʡ������";
		break;
	case 330801:
		return"�㽭ʡ��������Ͻ��";
		break;
	case 330802:
		return"�㽭ʡ�����п³���";
		break;
	case 330821:
		return"�㽭ʡ����������";
		break;
	case 330822:
		return"�㽭ʡ�����г�ɽ��";
		break;
	case 330824:
		return"�㽭ʡ�����п�����";
		break;
	case 330825:
		return"�㽭ʡ������������";
		break;
	case 330881:
		return"�㽭ʡ�����н�ɽ��";
		break;
	case 330900:
		return"�㽭ʡ��ɽ��";
		break;
	case 330901:
		return"�㽭ʡ��ɽ����Ͻ��";
		break;
	case 330902:
		return"�㽭ʡ��ɽ�ж�����";
		break;
	case 330903:
		return"�㽭ʡ��ɽ��������";
		break;
	case 330921:
		return"�㽭ʡ��ɽ���ɽ��";
		break;
	case 330922:
		return"�㽭ʡ��ɽ��������";
		break;
	case 331000:
		return"�㽭ʡ̨����";
		break;
	case 331001:
		return"�㽭ʡ̨������Ͻ��";
		break;
	case 331002:
		return"�㽭ʡ̨���н�����";
		break;
	case 331003:
		return"�㽭ʡ̨���л�����";
		break;
	case 331004:
		return"�㽭ʡ̨����·����";
		break;
	case 331021:
		return"�㽭ʡ̨��������";
		break;
	case 331022:
		return"�㽭ʡ̨����������";
		break;
	case 331023:
		return"�㽭ʡ̨������̨��";
		break;
	case 331024:
		return"�㽭ʡ̨�����ɾ���";
		break;
	case 331081:
		return"�㽭ʡ̨����������";
		break;
	case 331082:
		return"�㽭ʡ̨�����ٺ���";
		break;
	case 332500:
		return"�㽭ʡ��ˮ����";
		break;
	case 332501:
		return"�㽭ʡ��ˮ������ˮ��";
		break;
	case 332502:
		return"�㽭ʡ��ˮ������Ȫ��";
		break;
	case 332522:
		return"�㽭ʡ��ˮ����������";
		break;
	case 332523:
		return"�㽭ʡ��ˮ�����ƺ���";
		break;
	case 332525:
		return"�㽭ʡ��ˮ������Ԫ��";
		break;
	case 332526:
		return"�㽭ʡ��ˮ����������";
		break;
	case 332527:
		return"�㽭ʡ��ˮ���������";
		break;
	case 332528:
		return"�㽭ʡ��ˮ����������";
		break;
	case 332529:
		return"�㽭ʡ��ˮ�����������������";
		break;
	case 340000:
		return"����ʡ";
		break;
	case 340100:
		return"����ʡ�Ϸ���";
		break;
	case 340101:
		return"����ʡ�Ϸ�����Ͻ��";
		break;
	case 340102:
		return"����ʡ�Ϸ��ж�����";
		break;
	case 340103:
		return"����ʡ�Ϸ���������";
		break;
	case 340104:
		return"����ʡ�Ϸ���������";
		break;
	case 340111:
		return"����ʡ�Ϸ��н���";
		break;
	case 340121:
		return"����ʡ�Ϸ��г�����";
		break;
	case 340122:
		return"����ʡ�Ϸ��зʶ���";
		break;
	case 340123:
		return"����ʡ�Ϸ��з�����";
		break;
	case 340200:
		return"����ʡ�ߺ���";
		break;
	case 340201:
		return"����ʡ�ߺ�����Ͻ��";
		break;
	case 340202:
		return"����ʡ�ߺ��о�����";
		break;
	case 340203:
		return"����ʡ�ߺ���������";
		break;
	case 340204:
		return"����ʡ�ߺ���������";
		break;
	case 340207:
		return"����ʡ�ߺ���𯽭��";
		break;
	case 340221:
		return"����ʡ�ߺ����ߺ���";
		break;
	case 340222:
		return"����ʡ�ߺ��з�����";
		break;
	case 340223:
		return"����ʡ�ߺ���������";
		break;
	case 340300:
		return"����ʡ������";
		break;
	case 340301:
		return"����ʡ��������Ͻ��";
		break;
	case 340302:
		return"����ʡ�����ж�����";
		break;
	case 340303:
		return"����ʡ������������";
		break;
	case 340304:
		return"����ʡ������������";
		break;
	case 340311:
		return"����ʡ�����н���";
		break;
	case 340321:
		return"����ʡ�����л�Զ��";
		break;
	case 340322:
		return"����ʡ�����������";
		break;
	case 340323:
		return"����ʡ�����й�����";
		break;
	case 340400:
		return"����ʡ������";
		break;
	case 340401:
		return"����ʡ��������Ͻ��";
		break;
	case 340402:
		return"����ʡ�����д�ͨ��";
		break;
	case 340403:
		return"����ʡ�������������";
		break;
	case 340404:
		return"����ʡ������л�Ҽ���";
		break;
	case 340405:
		return"����ʡ�����а˹�ɽ��";
		break;
	case 340406:
		return"����ʡ�������˼���";
		break;
	case 340421:
		return"����ʡ�����з�̨��";
		break;
	case 340500:
		return"����ʡ��ɽ��";
		break;
	case 340501:
		return"����ʡ��ɽ����Ͻ��";
		break;
	case 340502:
		return"����ʡ��ɽ�н��ׯ��";
		break;
	case 340503:
		return"����ʡ��ɽ�л�ɽ��";
		break;
	case 340504:
		return"����ʡ��ɽ����ɽ��";
		break;
	case 340505:
		return"����ʡ��ɽ����ɽ��";
		break;
	case 340521:
		return"����ʡ��ɽ�е�Ϳ��";
		break;
	case 340600:
		return"����ʡ������";
		break;
	case 340601:
		return"����ʡ��������Ͻ��";
		break;
	case 340602:
		return"����ʡ�����жż���";
		break;
	case 340603:
		return"����ʡ��������ɽ��";
		break;
	case 340604:
		return"����ʡ��������ɽ��";
		break;
	case 340621:
		return"����ʡ�������Ϫ��";
		break;
	case 340700:
		return"����ʡͭ����";
		break;
	case 340701:
		return"����ʡͭ������Ͻ��";
		break;
	case 340702:
		return"����ʡͭ����ͭ��ɽ��";
		break;
	case 340703:
		return"����ʡͭ����ʨ��ɽ��";
		break;
	case 340711:
		return"����ʡͭ���н���";
		break;
	case 340721:
		return"����ʡͭ����ͭ����";
		break;
	case 340800:
		return"����ʡ������";
		break;
	case 340801:
		return"����ʡ��������Ͻ��";
		break;
	case 340802:
		return"����ʡ������ӭ����";
		break;
	case 340803:
		return"����ʡ�����д����";
		break;
	case 340811:
		return"����ʡ�����н���";
		break;
	case 340822:
		return"����ʡ�����л�����";
		break;
	case 340823:
		return"����ʡ������������";
		break;
	case 340824:
		return"����ʡ������Ǳɽ��";
		break;
	case 340825:
		return"����ʡ������̫����";
		break;
	case 340826:
		return"����ʡ������������";
		break;
	case 340827:
		return"����ʡ������������";
		break;
	case 340828:
		return"����ʡ������������";
		break;
	case 340881:
		return"����ʡ������ͩ����";
		break;
	case 341000:
		return"����ʡ��ɽ��";
		break;
	case 341001:
		return"����ʡ��ɽ����Ͻ��";
		break;
	case 341002:
		return"����ʡ��ɽ����Ϫ��";
		break;
	case 341003:
		return"����ʡ��ɽ�л�ɽ��";
		break;
	case 341004:
		return"����ʡ��ɽ�л�����";
		break;
	case 341021:
		return"����ʡ��ɽ�����";
		break;
	case 341022:
		return"����ʡ��ɽ��������";
		break;
	case 341023:
		return"����ʡ��ɽ������";
		break;
	case 341024:
		return"����ʡ��ɽ��������";
		break;
	case 341100:
		return"����ʡ������";
		break;
	case 341101:
		return"����ʡ��������Ͻ��";
		break;
	case 341102:
		return"����ʡ������������";
		break;
	case 341103:
		return"����ʡ������������";
		break;
	case 341122:
		return"����ʡ������������";
		break;
	case 341124:
		return"����ʡ������ȫ����";
		break;
	case 341125:
		return"����ʡ�����ж�Զ��";
		break;
	case 341126:
		return"����ʡ�����з�����";
		break;
	case 341181:
		return"����ʡ�������쳤��";
		break;
	case 341182:
		return"����ʡ������������";
		break;
	case 341200:
		return"����ʡ������";
		break;
	case 341201:
		return"����ʡ��������Ͻ��";
		break;
	case 341202:
		return"����ʡ�����������";
		break;
	case 341203:
		return"����ʡ������򣶫��";
		break;
	case 341204:
		return"����ʡ�������Ȫ��";
		break;
	case 341221:
		return"����ʡ��������Ȫ��";
		break;
	case 341222:
		return"����ʡ������̫����";
		break;
	case 341223:
		return"����ʡ������������";
		break;
	case 341224:
		return"����ʡ�������ɳ���";
		break;
	case 341225:
		return"����ʡ�����и�����";
		break;
	case 341226:
		return"����ʡ�����������";
		break;
	case 341227:
		return"����ʡ������������";
		break;
	case 341281:
		return"����ʡ������������";
		break;
	case 341282:
		return"����ʡ�����н�����";
		break;
	case 341300:
		return"����ʡ������";
		break;
	case 341301:
		return"����ʡ��������Ͻ��";
		break;
	case 341302:
		return"����ʡ�����������";
		break;
	case 341321:
		return"����ʡ�������ɽ��";
		break;
	case 341322:
		return"����ʡ����������";
		break;
	case 341323:
		return"����ʡ�����������";
		break;
	case 341324:
		return"����ʡ����������";
		break;
	case 342400:
		return"����ʡ��������";
		break;
	case 342401:
		return"����ʡ��������������";
		break;
	case 342422:
		return"����ʡ������������";
		break;
	case 342423:
		return"����ʡ��������������";
		break;
	case 342425:
		return"����ʡ�������������";
		break;
	case 342426:
		return"����ʡ����������կ��";
		break;
	case 342427:
		return"����ʡ����������ɽ��";
		break;
	case 342500:
		return"����ʡ���ǵ���";
		break;
	case 342501:
		return"����ʡ���ǵ���������";
		break;
	case 342502:
		return"����ʡ���ǵ���������";
		break;
	case 342522:
		return"����ʡ���ǵ�����Ϫ��";
		break;
	case 342523:
		return"����ʡ���ǵ��������";
		break;
	case 342529:
		return"����ʡ���ǵ�������";
		break;
	case 342530:
		return"����ʡ���ǵ���캵���";
		break;
	case 342531:
		return"����ʡ���ǵ�����Ϫ��";
		break;
	case 342600:
		return"����ʡ��������";
		break;
	case 342601:
		return"����ʡ��������������";
		break;
	case 342622:
		return"����ʡ��������®����";
		break;
	case 342623:
		return"����ʡ����������Ϊ��";
		break;
	case 342625:
		return"����ʡ����������ɽ��";
		break;
	case 342626:
		return"����ʡ������������";
		break;
	case 342900:
		return"����ʡ���ݵ���";
		break;
	case 342901:
		return"����ʡ���ݵ��������";
		break;
	case 342921:
		return"����ʡ���ݵ���������";
		break;
	case 342922:
		return"����ʡ���ݵ���ʯ̨��";
		break;
	case 342923:
		return"����ʡ���ݵ���������";
		break;
	case 350000:
		return"����ʡ";
		break;
	case 350100:
		return"����ʡ������";
		break;
	case 350101:
		return"����ʡ��������Ͻ��";
		break;
	case 350102:
		return"����ʡ�����й�¥��";
		break;
	case 350103:
		return"����ʡ������̨����";
		break;
	case 350104:
		return"����ʡ�����в�ɽ��";
		break;
	case 350105:
		return"����ʡ��������β��";
		break;
	case 350111:
		return"����ʡ�����н�����";
		break;
	case 350121:
		return"����ʡ������������";
		break;
	case 350122:
		return"����ʡ������������";
		break;
	case 350123:
		return"����ʡ��������Դ��";
		break;
	case 350124:
		return"����ʡ������������";
		break;
	case 350125:
		return"����ʡ��������̩��";
		break;
	case 350128:
		return"����ʡ������ƽ̶��";
		break;
	case 350181:
		return"����ʡ�����и�����";
		break;
	case 350182:
		return"����ʡ�����г�����";
		break;
	case 350200:
		return"����ʡ������";
		break;
	case 350201:
		return"����ʡ��������Ͻ��";
		break;
	case 350202:
		return"����ʡ�����й�������";
		break;
	case 350203:
		return"����ʡ������˼����";
		break;
	case 350204:
		return"����ʡ�����п�Ԫ��";
		break;
	case 350205:
		return"����ʡ������������";
		break;
	case 350206:
		return"����ʡ�����к�����";
		break;
	case 350211:
		return"����ʡ�����м�����";
		break;
	case 350212:
		return"����ʡ������ͬ����";
		break;
	case 350300:
		return"����ʡ������";
		break;
	case 350301:
		return"����ʡ��������Ͻ��";
		break;
	case 350302:
		return"����ʡ�����г�����";
		break;
	case 350303:
		return"����ʡ�����к�����";
		break;
	case 350321:
		return"����ʡ������������";
		break;
	case 350322:
		return"����ʡ������������";
		break;
	case 350400:
		return"����ʡ������";
		break;
	case 350401:
		return"����ʡ��������Ͻ��";
		break;
	case 350402:
		return"����ʡ������÷����";
		break;
	case 350403:
		return"����ʡ��������Ԫ��";
		break;
	case 350421:
		return"����ʡ��������Ϫ��";
		break;
	case 350423:
		return"����ʡ������������";
		break;
	case 350424:
		return"����ʡ������������";
		break;
	case 350425:
		return"����ʡ�����д�����";
		break;
	case 350426:
		return"����ʡ��������Ϫ��";
		break;
	case 350427:
		return"����ʡ������ɳ��";
		break;
	case 350428:
		return"����ʡ�����н�����";
		break;
	case 350429:
		return"����ʡ������̩����";
		break;
	case 350430:
		return"����ʡ�����н�����";
		break;
	case 350481:
		return"����ʡ������������";
		break;
	case 350500:
		return"����ʡȪ����";
		break;
	case 350501:
		return"����ʡȪ������Ͻ��";
		break;
	case 350502:
		return"����ʡȪ���������";
		break;
	case 350503:
		return"����ʡȪ���з�����";
		break;
	case 350504:
		return"����ʡȪ�����彭��";
		break;
	case 350521:
		return"����ʡȪ���лݰ���";
		break;
	case 350524:
		return"����ʡȪ���а�Ϫ��";
		break;
	case 350525:
		return"����ʡȪ����������";
		break;
	case 350526:
		return"����ʡȪ���е»���";
		break;
	case 350527:
		return"����ʡȪ���н�����";
		break;
	case 350581:
		return"����ʡȪ����ʯʨ��";
		break;
	case 350582:
		return"����ʡȪ���н�����";
		break;
	case 350583:
		return"����ʡȪ�����ϰ���";
		break;
	case 350600:
		return"����ʡ������";
		break;
	case 350601:
		return"����ʡ��������Ͻ��";
		break;
	case 350602:
		return"����ʡ������ܼ����";
		break;
	case 350603:
		return"����ʡ������������";
		break;
	case 350622:
		return"����ʡ������������";
		break;
	case 350623:
		return"����ʡ������������";
		break;
	case 350624:
		return"����ʡ������گ����";
		break;
	case 350625:
		return"����ʡ�����г�̩��";
		break;
	case 350626:
		return"����ʡ�����ж�ɽ��";
		break;
	case 350627:
		return"����ʡ�������Ͼ���";
		break;
	case 350628:
		return"����ʡ������ƽ����";
		break;
	case 350629:
		return"����ʡ�����л�����";
		break;
	case 350681:
		return"����ʡ������������";
		break;
	case 350700:
		return"����ʡ��ƽ��";
		break;
	case 350701:
		return"����ʡ��ƽ����Ͻ��";
		break;
	case 350702:
		return"����ʡ��ƽ����ƽ��";
		break;
	case 350721:
		return"����ʡ��ƽ��˳����";
		break;
	case 350722:
		return"����ʡ��ƽ���ֳ���";
		break;
	case 350723:
		return"����ʡ��ƽ�й�����";
		break;
	case 350724:
		return"����ʡ��ƽ����Ϫ��";
		break;
	case 350725:
		return"����ʡ��ƽ��������";
		break;
	case 350781:
		return"����ʡ��ƽ��������";
		break;
	case 350782:
		return"����ʡ��ƽ������ɽ��";
		break;
	case 350783:
		return"����ʡ��ƽ�н����";
		break;
	case 350784:
		return"����ʡ��ƽ�н�����";
		break;
	case 350800:
		return"����ʡ������";
		break;
	case 350801:
		return"����ʡ��������Ͻ��";
		break;
	case 350802:
		return"����ʡ������������";
		break;
	case 350821:
		return"����ʡ�����г�͡��";
		break;
	case 350822:
		return"����ʡ������������";
		break;
	case 350823:
		return"����ʡ�������Ϻ���";
		break;
	case 350824:
		return"����ʡ��������ƽ��";
		break;
	case 350825:
		return"����ʡ������������";
		break;
	case 350881:
		return"����ʡ��������ƽ��";
		break;
	case 352200:
		return"����ʡ���µ���";
		break;
	case 352201:
		return"����ʡ���µ���������";
		break;
	case 352202:
		return"����ʡ���µ���������";
		break;
	case 352203:
		return"����ʡ���µ���������";
		break;
	case 352225:
		return"����ʡ���µ���ϼ����";
		break;
	case 352227:
		return"����ʡ���µ���������";
		break;
	case 352228:
		return"����ʡ���µ���������";
		break;
	case 352229:
		return"����ʡ���µ���������";
		break;
	case 352230:
		return"����ʡ���µ���������";
		break;
	case 352231:
		return"����ʡ���µ���������";
		break;
	case 360000:
		return"����ʡ";
		break;
	case 360100:
		return"����ʡ�ϲ���";
		break;
	case 360101:
		return"����ʡ�ϲ�����Ͻ��";
		break;
	case 360102:
		return"����ʡ�ϲ��ж�����";
		break;
	case 360103:
		return"����ʡ�ϲ���������";
		break;
	case 360104:
		return"����ʡ�ϲ�����������";
		break;
	case 360105:
		return"����ʡ�ϲ���������";
		break;
	case 360111:
		return"����ʡ�ϲ��н���";
		break;
	case 360121:
		return"����ʡ�ϲ����ϲ���";
		break;
	case 360122:
		return"����ʡ�ϲ����½���";
		break;
	case 360123:
		return"����ʡ�ϲ��а�����";
		break;
	case 360124:
		return"����ʡ�ϲ��н�����";
		break;
	case 360200:
		return"����ʡ��������";
		break;
	case 360201:
		return"����ʡ����������Ͻ��";
		break;
	case 360202:
		return"����ʡ�������в�����";
		break;
	case 360203:
		return"����ʡ����������ɽ��";
		break;
	case 360222:
		return"����ʡ�������и�����";
		break;
	case 360281:
		return"����ʡ����������ƽ��";
		break;
	case 360300:
		return"����ʡƼ����";
		break;
	case 360301:
		return"����ʡƼ������Ͻ��";
		break;
	case 360302:
		return"����ʡƼ���а�Դ��";
		break;
	case 360313:
		return"����ʡƼ�����涫��";
		break;
	case 360321:
		return"����ʡƼ����������";
		break;
	case 360322:
		return"����ʡƼ����������";
		break;
	case 360323:
		return"����ʡƼ����«Ϫ��";
		break;
	case 360400:
		return"����ʡ�Ž���";
		break;
	case 360401:
		return"����ʡ�Ž�����Ͻ��";
		break;
	case 360402:
		return"����ʡ�Ž���®ɽ��";
		break;
	case 360403:
		return"����ʡ�Ž��������";
		break;
	case 360421:
		return"����ʡ�Ž��оŽ���";
		break;
	case 360423:
		return"����ʡ�Ž���������";
		break;
	case 360424:
		return"����ʡ�Ž�����ˮ��";
		break;
	case 360425:
		return"����ʡ�Ž���������";
		break;
	case 360426:
		return"����ʡ�Ž��е°���";
		break;
	case 360427:
		return"����ʡ�Ž���������";
		break;
	case 360428:
		return"����ʡ�Ž��ж�����";
		break;
	case 360429:
		return"����ʡ�Ž��к�����";
		break;
	case 360430:
		return"����ʡ�Ž���������";
		break;
	case 360481:
		return"����ʡ�Ž��������";
		break;
	case 360500:
		return"����ʡ������";
		break;
	case 360501:
		return"����ʡ��������Ͻ��";
		break;
	case 360502:
		return"����ʡ��������ˮ��";
		break;
	case 360521:
		return"����ʡ�����з�����";
		break;
	case 360600:
		return"����ʡӥ̶��";
		break;
	case 360601:
		return"����ʡӥ̶����Ͻ��";
		break;
	case 360602:
		return"����ʡӥ̶���º���";
		break;
	case 360622:
		return"����ʡӥ̶���཭��";
		break;
	case 360681:
		return"����ʡӥ̶�й�Ϫ��";
		break;
	case 360700:
		return"����ʡ������";
		break;
	case 360701:
		return"����ʡ��������Ͻ��";
		break;
	case 360702:
		return"����ʡ�������¹���";
		break;
	case 360721:
		return"����ʡ�����и���";
		break;
	case 360722:
		return"����ʡ�������ŷ���";
		break;
	case 360723:
		return"����ʡ�����д�����";
		break;
	case 360724:
		return"����ʡ������������";
		break;
	case 360725:
		return"����ʡ�����г�����";
		break;
	case 360726:
		return"����ʡ�����а�Զ��";
		break;
	case 360727:
		return"����ʡ������������";
		break;
	case 360728:
		return"����ʡ�����ж�����";
		break;
	case 360729:
		return"����ʡ������ȫ����";
		break;
	case 360730:
		return"����ʡ������������";
		break;
	case 360731:
		return"����ʡ�������ڶ���";
		break;
	case 360732:
		return"����ʡ�������˹���";
		break;
	case 360733:
		return"����ʡ�����л����";
		break;
	case 360734:
		return"����ʡ������Ѱ����";
		break;
	case 360735:
		return"����ʡ������ʯ����";
		break;
	case 360781:
		return"����ʡ�����������";
		break;
	case 360782:
		return"����ʡ�������Ͽ���";
		break;
	case 362200:
		return"����ʡ�˴�����";
		break;
	case 362201:
		return"����ʡ�˴������˴���";
		break;
	case 362202:
		return"����ʡ�˴����������";
		break;
	case 362203:
		return"����ʡ�˴�����������";
		break;
	case 362204:
		return"����ʡ�˴������߰���";
		break;
	case 362226:
		return"����ʡ�˴�����������";
		break;
	case 362227:
		return"����ʡ�˴�����������";
		break;
	case 362228:
		return"����ʡ�˴������ϸ���";
		break;
	case 362229:
		return"����ʡ�˴������˷���";
		break;
	case 362232:
		return"����ʡ�˴�����������";
		break;
	case 362233:
		return"����ʡ�˴�����ͭ����";
		break;
	case 362300:
		return"����ʡ���ĵ���";
		break;
	case 362301:
		return"����ʡ���ĵ���������";
		break;
	case 362302:
		return"����ʡ���ĵ���������";
		break;
	case 362321:
		return"����ʡ���ĵ���������";
		break;
	case 362322:
		return"����ʡ���ĵ��������";
		break;
	case 362323:
		return"����ʡ���ĵ�����ɽ��";
		break;
	case 362324:
		return"����ʡ���ĵ���Ǧɽ��";
		break;
	case 362325:
		return"����ʡ���ĵ��������";
		break;
	case 362326:
		return"����ʡ���ĵ���߮����";
		break;
	case 362329:
		return"����ʡ���ĵ��������";
		break;
	case 362330:
		return"����ʡ���ĵ���������";
		break;
	case 362331:
		return"����ʡ���ĵ���������";
		break;
	case 362334:
		return"����ʡ���ĵ�����Դ��";
		break;
	case 362400:
		return"����ʡ��������";
		break;
	case 362401:
		return"����ʡ��������������";
		break;
	case 362402:
		return"����ʡ������������ɽ��";
		break;
	case 362421:
		return"����ʡ��������������";
		break;
	case 362422:
		return"����ʡ����������ˮ��";
		break;
	case 362423:
		return"����ʡ��������Ͽ����";
		break;
	case 362424:
		return"����ʡ���������¸���";
		break;
	case 362425:
		return"����ʡ��������������";
		break;
	case 362426:
		return"����ʡ��������̩����";
		break;
	case 362427:
		return"����ʡ���������촨��";
		break;
	case 362428:
		return"����ʡ������������";
		break;
	case 362429:
		return"����ʡ��������������";
		break;
	case 362430:
		return"����ʡ��������������";
		break;
	case 362432:
		return"����ʡ��������������";
		break;
	case 362500:
		return"����ʡ���ݵ���";
		break;
	case 362502:
		return"����ʡ���ݵ����ٴ���";
		break;
	case 362522:
		return"����ʡ���ݵ����ϳ���";
		break;
	case 362523:
		return"����ʡ���ݵ����质��";
		break;
	case 362524:
		return"����ʡ���ݵ����Ϸ���";
		break;
	case 362525:
		return"����ʡ���ݵ���������";
		break;
	case 362526:
		return"����ʡ���ݵ����ְ���";
		break;
	case 362527:
		return"����ʡ���ݵ����˻���";
		break;
	case 362528:
		return"����ʡ���ݵ�����Ϫ��";
		break;
	case 362529:
		return"����ʡ���ݵ�����Ϫ��";
		break;
	case 362531:
		return"����ʡ���ݵ���������";
		break;
	case 362532:
		return"����ʡ���ݵ��������";
		break;
	case 370000:
		return"ɽ��ʡ";
		break;
	case 370100:
		return"ɽ��ʡ������";
		break;
	case 370101:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 370102:
		return"ɽ��ʡ������������";
		break;
	case 370103:
		return"ɽ��ʡ������������";
		break;
	case 370104:
		return"ɽ��ʡ�����л�����";
		break;
	case 370105:
		return"ɽ��ʡ������������";
		break;
	case 370112:
		return"ɽ��ʡ������������";
		break;
	case 370123:
		return"ɽ��ʡ�����г�����";
		break;
	case 370124:
		return"ɽ��ʡ������ƽ����";
		break;
	case 370125:
		return"ɽ��ʡ�����м�����";
		break;
	case 370126:
		return"ɽ��ʡ�������̺���";
		break;
	case 370181:
		return"ɽ��ʡ������������";
		break;
	case 370200:
		return"ɽ��ʡ�ൺ��";
		break;
	case 370201:
		return"ɽ��ʡ�ൺ����Ͻ��";
		break;
	case 370202:
		return"ɽ��ʡ�ൺ��������";
		break;
	case 370203:
		return"ɽ��ʡ�ൺ���б���";
		break;
	case 370205:
		return"ɽ��ʡ�ൺ���ķ���";
		break;
	case 370211:
		return"ɽ��ʡ�ൺ�лƵ���";
		break;
	case 370212:
		return"ɽ��ʡ�ൺ����ɽ��";
		break;
	case 370213:
		return"ɽ��ʡ�ൺ�������";
		break;
	case 370214:
		return"ɽ��ʡ�ൺ�г�����";
		break;
	case 370281:
		return"ɽ��ʡ�ൺ�н�����";
		break;
	case 370282:
		return"ɽ��ʡ�ൺ�м�ī��";
		break;
	case 370283:
		return"ɽ��ʡ�ൺ��ƽ����";
		break;
	case 370284:
		return"ɽ��ʡ�ൺ�н�����";
		break;
	case 370285:
		return"ɽ��ʡ�ൺ��������";
		break;
	case 370300:
		return"ɽ��ʡ�Ͳ���";
		break;
	case 370301:
		return"ɽ��ʡ�Ͳ�����Ͻ��";
		break;
	case 370302:
		return"ɽ��ʡ�Ͳ����ʹ���";
		break;
	case 370303:
		return"ɽ��ʡ�Ͳ����ŵ���";
		break;
	case 370304:
		return"ɽ��ʡ�Ͳ��в�ɽ��";
		break;
	case 370305:
		return"ɽ��ʡ�Ͳ���������";
		break;
	case 370306:
		return"ɽ��ʡ�Ͳ����ܴ���";
		break;
	case 370321:
		return"ɽ��ʡ�Ͳ��л�̨��";
		break;
	case 370322:
		return"ɽ��ʡ�Ͳ��и�����";
		break;
	case 370323:
		return"ɽ��ʡ�Ͳ�����Դ��";
		break;
	case 370400:
		return"ɽ��ʡ��ׯ��";
		break;
	case 370401:
		return"ɽ��ʡ��ׯ����Ͻ��";
		break;
	case 370402:
		return"ɽ��ʡ��ׯ��������";
		break;
	case 370403:
		return"ɽ��ʡ��ׯ��Ѧ����";
		break;
	case 370404:
		return"ɽ��ʡ��ׯ��ỳ���";
		break;
	case 370405:
		return"ɽ��ʡ��ׯ��̨��ׯ��";
		break;
	case 370406:
		return"ɽ��ʡ��ׯ��ɽͤ��";
		break;
	case 370481:
		return"ɽ��ʡ��ׯ��������";
		break;
	case 370500:
		return"ɽ��ʡ��Ӫ��";
		break;
	case 370501:
		return"ɽ��ʡ��Ӫ����Ͻ��";
		break;
	case 370502:
		return"ɽ��ʡ��Ӫ�ж�Ӫ��";
		break;
	case 370503:
		return"ɽ��ʡ��Ӫ�кӿ���";
		break;
	case 370521:
		return"ɽ��ʡ��Ӫ�п�����";
		break;
	case 370522:
		return"ɽ��ʡ��Ӫ��������";
		break;
	case 370523:
		return"ɽ��ʡ��Ӫ�й�����";
		break;
	case 370600:
		return"ɽ��ʡ��̨��";
		break;
	case 370601:
		return"ɽ��ʡ��̨����Ͻ��";
		break;
	case 370602:
		return"ɽ��ʡ��̨��֥���";
		break;
	case 370611:
		return"ɽ��ʡ��̨�и�ɽ��";
		break;
	case 370612:
		return"ɽ��ʡ��̨��Ĳƽ��";
		break;
	case 370613:
		return"ɽ��ʡ��̨����ɽ��";
		break;
	case 370634:
		return"ɽ��ʡ��̨�г�����";
		break;
	case 370681:
		return"ɽ��ʡ��̨��������";
		break;
	case 370682:
		return"ɽ��ʡ��̨��������";
		break;
	case 370683:
		return"ɽ��ʡ��̨��������";
		break;
	case 370684:
		return"ɽ��ʡ��̨��������";
		break;
	case 370685:
		return"ɽ��ʡ��̨����Զ��";
		break;
	case 370686:
		return"ɽ��ʡ��̨����ϼ��";
		break;
	case 370687:
		return"ɽ��ʡ��̨�к�����";
		break;
	case 370700:
		return"ɽ��ʡΫ����";
		break;
	case 370701:
		return"ɽ��ʡΫ������Ͻ��";
		break;
	case 370702:
		return"ɽ��ʡΫ����Ϋ����";
		break;
	case 370703:
		return"ɽ��ʡΫ���к�ͤ��";
		break;
	case 370704:
		return"ɽ��ʡΫ���з�����";
		break;
	case 370705:
		return"ɽ��ʡΫ���п�����";
		break;
	case 370724:
		return"ɽ��ʡΫ����������";
		break;
	case 370725:
		return"ɽ��ʡΫ���в�����";
		break;
	case 370781:
		return"ɽ��ʡΫ����������";
		break;
	case 370782:
		return"ɽ��ʡΫ���������";
		break;
	case 370783:
		return"ɽ��ʡΫ�����ٹ���";
		break;
	case 370784:
		return"ɽ��ʡΫ���а�����";
		break;
	case 370785:
		return"ɽ��ʡΫ���и�����";
		break;
	case 370786:
		return"ɽ��ʡΫ���в�����";
		break;
	case 370800:
		return"ɽ��ʡ������";
		break;
	case 370801:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 370802:
		return"ɽ��ʡ������������";
		break;
	case 370811:
		return"ɽ��ʡ�������γ���";
		break;
	case 370826:
		return"ɽ��ʡ������΢ɽ��";
		break;
	case 370827:
		return"ɽ��ʡ��������̨��";
		break;
	case 370828:
		return"ɽ��ʡ�����н�����";
		break;
	case 370829:
		return"ɽ��ʡ�����м�����";
		break;
	case 370830:
		return"ɽ��ʡ������������";
		break;
	case 370831:
		return"ɽ��ʡ��������ˮ��";
		break;
	case 370832:
		return"ɽ��ʡ��������ɽ��";
		break;
	case 370881:
		return"ɽ��ʡ������������";
		break;
	case 370882:
		return"ɽ��ʡ������������";
		break;
	case 370883:
		return"ɽ��ʡ�������޳���";
		break;
	case 370900:
		return"ɽ��ʡ̩����";
		break;
	case 370901:
		return"ɽ��ʡ̩������Ͻ��";
		break;
	case 370902:
		return"ɽ��ʡ̩����̩ɽ��";
		break;
	case 370911:
		return"ɽ��ʡ̩���н���";
		break;
	case 370921:
		return"ɽ��ʡ̩����������";
		break;
	case 370923:
		return"ɽ��ʡ̩���ж�ƽ��";
		break;
	case 370982:
		return"ɽ��ʡ̩������̩��";
		break;
	case 370983:
		return"ɽ��ʡ̩���зʳ���";
		break;
	case 371000:
		return"ɽ��ʡ������";
		break;
	case 371001:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 371002:
		return"ɽ��ʡ�����л�����";
		break;
	case 371081:
		return"ɽ��ʡ�������ĵ���";
		break;
	case 371082:
		return"ɽ��ʡ�������ٳ���";
		break;
	case 371083:
		return"ɽ��ʡ��������ɽ��";
		break;
	case 371100:
		return"ɽ��ʡ������";
		break;
	case 371101:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 371102:
		return"ɽ��ʡ�����ж�����";
		break;
	case 371121:
		return"ɽ��ʡ������������";
		break;
	case 371122:
		return"ɽ��ʡ����������";
		break;
	case 371200:
		return"ɽ��ʡ������";
		break;
	case 371201:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 371202:
		return"ɽ��ʡ������������";
		break;
	case 371203:
		return"ɽ��ʡ�����иֳ���";
		break;
	case 371300:
		return"ɽ��ʡ������";
		break;
	case 371301:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 371302:
		return"ɽ��ʡ��������ɽ��";
		break;
	case 371311:
		return"ɽ��ʡ��������ׯ��";
		break;
	case 371312:
		return"ɽ��ʡ�����кӶ���";
		break;
	case 371321:
		return"ɽ��ʡ������������";
		break;
	case 371322:
		return"ɽ��ʡ������۰����";
		break;
	case 371323:
		return"ɽ��ʡ��������ˮ��";
		break;
	case 371324:
		return"ɽ��ʡ�����в�ɽ��";
		break;
	case 371325:
		return"ɽ��ʡ�����з���";
		break;
	case 371326:
		return"ɽ��ʡ������ƽ����";
		break;
	case 371327:
		return"ɽ��ʡ������������";
		break;
	case 371328:
		return"ɽ��ʡ������������";
		break;
	case 371329:
		return"ɽ��ʡ������������";
		break;
	case 371400:
		return"ɽ��ʡ������";
		break;
	case 371401:
		return"ɽ��ʡ��������Ͻ��";
		break;
	case 371402:
		return"ɽ��ʡ�����е³���";
		break;
	case 371421:
		return"ɽ��ʡ����������";
		break;
	case 371422:
		return"ɽ��ʡ������������";
		break;
	case 371423:
		return"ɽ��ʡ������������";
		break;
	case 371424:
		return"ɽ��ʡ������������";
		break;
	case 371425:
		return"ɽ��ʡ�����������";
		break;
	case 371426:
		return"ɽ��ʡ������ƽԭ��";
		break;
	case 371427:
		return"ɽ��ʡ�������Ľ���";
		break;
	case 371428:
		return"ɽ��ʡ�����������";
		break;
	case 371481:
		return"ɽ��ʡ������������";
		break;
	case 371482:
		return"ɽ��ʡ�����������";
		break;
	case 371500:
		return"ɽ��ʡ�ĳ���";
		break;
	case 371501:
		return"ɽ��ʡ�ĳ�����Ͻ��";
		break;
	case 371502:
		return"ɽ��ʡ�ĳ��ж�������";
		break;
	case 371521:
		return"ɽ��ʡ�ĳ���������";
		break;
	case 371522:
		return"ɽ��ʡ�ĳ���ݷ��";
		break;
	case 371523:
		return"ɽ��ʡ�ĳ�����ƽ��";
		break;
	case 371524:
		return"ɽ��ʡ�ĳ��ж�����";
		break;
	case 371525:
		return"ɽ��ʡ�ĳ��й���";
		break;
	case 371526:
		return"ɽ��ʡ�ĳ��и�����";
		break;
	case 371581:
		return"ɽ��ʡ�ĳ���������";
		break;
	case 372300:
		return"ɽ��ʡ���ݵ���";
		break;
	case 372301:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 372321:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 372323:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 372324:
		return"ɽ��ʡ���ݵ��������";
		break;
	case 372325:
		return"ɽ��ʡ���ݵ���մ����";
		break;
	case 372328:
		return"ɽ��ʡ���ݵ���������";
		break;
	case 372330:
		return"ɽ��ʡ���ݵ�����ƽ��";
		break;
	case 372900:
		return"ɽ��ʡ�������";
		break;
	case 372901:
		return"ɽ��ʡ�������������";
		break;
	case 372922:
		return"ɽ��ʡ�����������";
		break;
	case 372923:
		return"ɽ��ʡ�������������";
		break;
	case 372924:
		return"ɽ��ʡ�������������";
		break;
	case 372925:
		return"ɽ��ʡ�����������";
		break;
	case 372926:
		return"ɽ��ʡ���������Ұ��";
		break;
	case 372928:
		return"ɽ��ʡ�������۩����";
		break;
	case 372929:
		return"ɽ��ʡ�������۲����";
		break;
	case 372930:
		return"ɽ��ʡ�������������";
		break;
	case 410000:
		return"����ʡ";
		break;
	case 410100:
		return"����ʡ֣����";
		break;
	case 410101:
		return"����ʡ֣������Ͻ��";
		break;
	case 410102:
		return"����ʡ֣������ԭ��";
		break;
	case 410103:
		return"����ʡ֣���ж�����";
		break;
	case 410104:
		return"����ʡ֣���йܳǻ�����";
		break;
	case 410105:
		return"����ʡ֣���н�ˮ��";
		break;
	case 410106:
		return"����ʡ֣�����Ͻ���";
		break;
	case 410108:
		return"����ʡ֣������ɽ��";
		break;
	case 410122:
		return"����ʡ֣������Ĳ��";
		break;
	case 410181:
		return"����ʡ֣���й�����";
		break;
	case 410182:
		return"����ʡ֣����������";
		break;
	case 410183:
		return"����ʡ֣����������";
		break;
	case 410184:
		return"����ʡ֣������֣��";
		break;
	case 410185:
		return"����ʡ֣���еǷ���";
		break;
	case 410200:
		return"����ʡ������";
		break;
	case 410201:
		return"����ʡ��������Ͻ��";
		break;
	case 410202:
		return"����ʡ��������ͤ��";
		break;
	case 410203:
		return"����ʡ������˳�ӻ�����";
		break;
	case 410204:
		return"����ʡ�����й�¥��";
		break;
	case 410205:
		return"����ʡ�������Ϲ���";
		break;
	case 410211:
		return"����ʡ�����н���";
		break;
	case 410221:
		return"����ʡ���������";
		break;
	case 410222:
		return"����ʡ������ͨ����";
		break;
	case 410223:
		return"����ʡ������ξ����";
		break;
	case 410224:
		return"����ʡ�����п�����";
		break;
	case 410225:
		return"����ʡ������������";
		break;
	case 410300:
		return"����ʡ������";
		break;
	case 410301:
		return"����ʡ��������Ͻ��";
		break;
	case 410302:
		return"����ʡ�������ϳ���";
		break;
	case 410303:
		return"����ʡ������������";
		break;
	case 410304:
		return"����ʡ�������ܺӻ�����";
		break;
	case 410305:
		return"����ʡ�����н�����";
		break;
	case 410306:
		return"����ʡ�����м�����";
		break;
	case 410311:
		return"����ʡ�����н���";
		break;
	case 410322:
		return"����ʡ�������Ͻ���";
		break;
	case 410323:
		return"����ʡ�������°���";
		break;
	case 410324:
		return"����ʡ�������ﴨ��";
		break;
	case 410325:
		return"����ʡ����������";
		break;
	case 410326:
		return"����ʡ������������";
		break;
	case 410327:
		return"����ʡ������������";
		break;
	case 410328:
		return"����ʡ������������";
		break;
	case 410329:
		return"����ʡ������������";
		break;
	case 410381:
		return"����ʡ��������ʦ��";
		break;
	case 410400:
		return"����ʡƽ��ɽ��";
		break;
	case 410401:
		return"����ʡƽ��ɽ����Ͻ��";
		break;
	case 410402:
		return"����ʡƽ��ɽ���»���";
		break;
	case 410403:
		return"����ʡƽ��ɽ��������";
		break;
	case 410404:
		return"����ʡƽ��ɽ��ʯ����";
		break;
	case 410411:
		return"����ʡƽ��ɽ��տ����";
		break;
	case 410421:
		return"����ʡƽ��ɽ�б�����";
		break;
	case 410422:
		return"����ʡƽ��ɽ��Ҷ��";
		break;
	case 410423:
		return"����ʡƽ��ɽ��³ɽ��";
		break;
	case 410425:
		return"����ʡƽ��ɽ��ۣ��";
		break;
	case 410481:
		return"����ʡƽ��ɽ�������";
		break;
	case 410482:
		return"����ʡƽ��ɽ��������";
		break;
	case 410500:
		return"����ʡ������";
		break;
	case 410501:
		return"����ʡ��������Ͻ��";
		break;
	case 410502:
		return"����ʡ�������ķ���";
		break;
	case 410503:
		return"����ʡ�����б�����";
		break;
	case 410504:
		return"����ʡ������������";
		break;
	case 410511:
		return"����ʡ�����н���";
		break;
	case 410522:
		return"����ʡ�����а�����";
		break;
	case 410523:
		return"����ʡ������������";
		break;
	case 410526:
		return"����ʡ�����л���";
		break;
	case 410527:
		return"����ʡ�������ڻ���";
		break;
	case 410581:
		return"����ʡ������������";
		break;
	case 410600:
		return"����ʡ�ױ���";
		break;
	case 410601:
		return"����ʡ�ױ�����Ͻ��";
		break;
	case 410602:
		return"����ʡ�ױ��к�ɽ��";
		break;
	case 410603:
		return"����ʡ�ױ���ɽ����";
		break;
	case 410611:
		return"����ʡ�ױ��н���";
		break;
	case 410621:
		return"����ʡ�ױ��п���";
		break;
	case 410622:
		return"����ʡ�ױ������";
		break;
	case 410700:
		return"����ʡ������";
		break;
	case 410701:
		return"����ʡ��������Ͻ��";
		break;
	case 410702:
		return"����ʡ�����к�����";
		break;
	case 410703:
		return"����ʡ�������»���";
		break;
	case 410704:
		return"����ʡ�����б�վ��";
		break;
	case 410711:
		return"����ʡ�����н���";
		break;
	case 410721:
		return"����ʡ������������";
		break;
	case 410724:
		return"����ʡ�����л����";
		break;
	case 410725:
		return"����ʡ������ԭ����";
		break;
	case 410726:
		return"����ʡ�������ӽ���";
		break;
	case 410727:
		return"����ʡ�����з�����";
		break;
	case 410728:
		return"����ʡ�����г�ԫ��";
		break;
	case 410781:
		return"����ʡ������������";
		break;
	case 410782:
		return"����ʡ�����л�����";
		break;
	case 410800:
		return"����ʡ������";
		break;
	case 410801:
		return"����ʡ��������Ͻ��";
		break;
	case 410802:
		return"����ʡ�����н����";
		break;
	case 410803:
		return"����ʡ��������վ��";
		break;
	case 410804:
		return"����ʡ�����������";
		break;
	case 410811:
		return"����ʡ������ɽ����";
		break;
	case 410821:
		return"����ʡ������������";
		break;
	case 410822:
		return"����ʡ�����в�����";
		break;
	case 410823:
		return"����ʡ������������";
		break;
	case 410825:
		return"����ʡ����������";
		break;
	case 410881:
		return"����ʡ�����м�Դ��";
		break;
	case 410882:
		return"����ʡ������������";
		break;
	case 410883:
		return"����ʡ������������";
		break;
	case 410900:
		return"����ʡ�����";
		break;
	case 410901:
		return"����ʡ�������Ͻ��";
		break;
	case 410902:
		return"����ʡ���������";
		break;
	case 410922:
		return"����ʡ����������";
		break;
	case 410923:
		return"����ʡ�����������";
		break;
	case 410926:
		return"����ʡ����з���";
		break;
	case 410927:
		return"����ʡ�����̨ǰ��";
		break;
	case 410928:
		return"����ʡ����������";
		break;
	case 411000:
		return"����ʡ�����";
		break;
	case 411001:
		return"����ʡ�������Ͻ��";
		break;
	case 411002:
		return"����ʡ�����κ����";
		break;
	case 411023:
		return"����ʡ����������";
		break;
	case 411024:
		return"����ʡ�����۳����";
		break;
	case 411025:
		return"����ʡ����������";
		break;
	case 411081:
		return"����ʡ�����������";
		break;
	case 411082:
		return"����ʡ����г�����";
		break;
	case 411100:
		return"����ʡ�����";
		break;
	case 411101:
		return"����ʡ�������Ͻ��";
		break;
	case 411102:
		return"����ʡ�����Դ����";
		break;
	case 411121:
		return"����ʡ�����������";
		break;
	case 411122:
		return"����ʡ����������";
		break;
	case 411123:
		return"����ʡ�����۱����";
		break;
	case 411200:
		return"����ʡ����Ͽ��";
		break;
	case 411201:
		return"����ʡ����Ͽ����Ͻ��";
		break;
	case 411202:
		return"����ʡ����Ͽ�к�����";
		break;
	case 411221:
		return"����ʡ����Ͽ���ų���";
		break;
	case 411222:
		return"����ʡ����Ͽ������";
		break;
	case 411224:
		return"����ʡ����Ͽ��¬����";
		break;
	case 411281:
		return"����ʡ����Ͽ��������";
		break;
	case 411282:
		return"����ʡ����Ͽ���鱦��";
		break;
	case 411300:
		return"����ʡ������";
		break;
	case 411301:
		return"����ʡ��������Ͻ��";
		break;
	case 411302:
		return"����ʡ�����������";
		break;
	case 411303:
		return"����ʡ������������";
		break;
	case 411321:
		return"����ʡ������������";
		break;
	case 411322:
		return"����ʡ�����з�����";
		break;
	case 411323:
		return"����ʡ��������Ͽ��";
		break;
	case 411324:
		return"����ʡ��������ƽ��";
		break;
	case 411325:
		return"����ʡ������������";
		break;
	case 411326:
		return"����ʡ������������";
		break;
	case 411327:
		return"����ʡ������������";
		break;
	case 411328:
		return"����ʡ�������ƺ���";
		break;
	case 411329:
		return"����ʡ��������Ұ��";
		break;
	case 411330:
		return"����ʡ������ͩ����";
		break;
	case 411381:
		return"����ʡ�����е�����";
		break;
	case 411400:
		return"����ʡ������";
		break;
	case 411401:
		return"����ʡ��������Ͻ��";
		break;
	case 411402:
		return"����ʡ��������԰��";
		break;
	case 411403:
		return"����ʡ�����������";
		break;
	case 411421:
		return"����ʡ��������Ȩ��";
		break;
	case 411422:
		return"����ʡ���������";
		break;
	case 411423:
		return"����ʡ������������";
		break;
	case 411424:
		return"����ʡ�������ϳ���";
		break;
	case 411425:
		return"����ʡ�������ݳ���";
		break;
	case 411426:
		return"����ʡ������������";
		break;
	case 411481:
		return"����ʡ������������";
		break;
	case 411500:
		return"����ʡ������";
		break;
	case 411501:
		return"����ʡ��������Ͻ��";
		break;
	case 411502:
		return"����ʡ������ʦ����";
		break;
	case 411503:
		return"����ʡ������ƽ����";
		break;
	case 411521:
		return"����ʡ��������ɽ��";
		break;
	case 411522:
		return"����ʡ�����й�ɽ��";
		break;
	case 411523:
		return"����ʡ����������";
		break;
	case 411524:
		return"����ʡ�������̳���";
		break;
	case 411525:
		return"����ʡ�����й�ʼ��";
		break;
	case 411526:
		return"����ʡ�������괨��";
		break;
	case 411527:
		return"����ʡ�����л�����";
		break;
	case 411528:
		return"����ʡ������Ϣ��";
		break;
	case 412700:
		return"����ʡ�ܿڵ���";
		break;
	case 412701:
		return"����ʡ�ܿڵ����ܿ���";
		break;
	case 412702:
		return"����ʡ�ܿڵ��������";
		break;
	case 412721:
		return"����ʡ�ܿڵ���������";
		break;
	case 412722:
		return"����ʡ�ܿڵ���������";
		break;
	case 412723:
		return"����ʡ�ܿڵ�����ˮ��";
		break;
	case 412724:
		return"����ʡ�ܿڵ���̫����";
		break;
	case 412725:
		return"����ʡ�ܿڵ���¹����";
		break;
	case 412726:
		return"����ʡ�ܿڵ���������";
		break;
	case 412727:
		return"����ʡ�ܿڵ���������";
		break;
	case 412728:
		return"����ʡ�ܿڵ���������";
		break;
	case 412800:
		return"����ʡפ������";
		break;
	case 412801:
		return"����ʡפ������פ�����";
		break;
	case 412821:
		return"����ʡפ������ȷɽ��";
		break;
	case 412822:
		return"����ʡפ������������";
		break;
	case 412823:
		return"����ʡפ��������ƽ��";
		break;
	case 412824:
		return"����ʡפ��������ƽ��";
		break;
	case 412825:
		return"����ʡפ�������ϲ���";
		break;
	case 412826:
		return"����ʡפ������������";
		break;
	case 412827:
		return"����ʡפ������ƽ����";
		break;
	case 412828:
		return"����ʡפ�������²���";
		break;
	case 412829:
		return"����ʡפ������������";
		break;
	case 420000:
		return"����ʡ";
		break;
	case 420100:
		return"����ʡ�人��";
		break;
	case 420101:
		return"����ʡ�人����Ͻ��";
		break;
	case 420102:
		return"����ʡ�人�н�����";
		break;
	case 420103:
		return"����ʡ�人�н�����";
		break;
	case 420104:
		return"����ʡ�人���ǿ���";
		break;
	case 420105:
		return"����ʡ�人�к�����";
		break;
	case 420106:
		return"����ʡ�人�������";
		break;
	case 420107:
		return"����ʡ�人����ɽ��";
		break;
	case 420111:
		return"����ʡ�人�к�ɽ��";
		break;
	case 420112:
		return"����ʡ�人�ж�������";
		break;
	case 420113:
		return"����ʡ�人�к�����";
		break;
	case 420114:
		return"����ʡ�人�в̵���";
		break;
	case 420115:
		return"����ʡ�人�н�����";
		break;
	case 420116:
		return"����ʡ�人�л�����";
		break;
	case 420117:
		return"����ʡ�人��������";
		break;
	case 420200:
		return"����ʡ��ʯ��";
		break;
	case 420201:
		return"����ʡ��ʯ����Ͻ��";
		break;
	case 420202:
		return"����ʡ��ʯ�л�ʯ����";
		break;
	case 420203:
		return"����ʡ��ʯ��ʯ��Ҥ��";
		break;
	case 420204:
		return"����ʡ��ʯ����½��";
		break;
	case 420205:
		return"����ʡ��ʯ����ɽ��";
		break;
	case 420222:
		return"����ʡ��ʯ��������";
		break;
	case 420281:
		return"����ʡ��ʯ�д�ұ��";
		break;
	case 420300:
		return"����ʡʮ����";
		break;
	case 420301:
		return"����ʡʮ������Ͻ��";
		break;
	case 420302:
		return"����ʡʮ����é����";
		break;
	case 420303:
		return"����ʡʮ����������";
		break;
	case 420321:
		return"����ʡʮ��������";
		break;
	case 420322:
		return"����ʡʮ����������";
		break;
	case 420323:
		return"����ʡʮ������ɽ��";
		break;
	case 420324:
		return"����ʡʮ������Ϫ��";
		break;
	case 420325:
		return"����ʡʮ���з���";
		break;
	case 420381:
		return"����ʡʮ���е�������";
		break;
	case 420500:
		return"����ʡ�˲���";
		break;
	case 420501:
		return"����ʡ�˲�����Ͻ��";
		break;
	case 420502:
		return"����ʡ�˲���������";
		break;
	case 420503:
		return"����ʡ�˲�����Ҹ���";
		break;
	case 420504:
		return"����ʡ�˲��е����";
		break;
	case 420505:
		return"����ʡ�˲��л�ͤ��";
		break;
	case 420521:
		return"����ʡ�˲����˲���";
		break;
	case 420525:
		return"����ʡ�˲���Զ����";
		break;
	case 420526:
		return"����ʡ�˲�����ɽ��";
		break;
	case 420527:
		return"����ʡ�˲���������";
		break;
	case 420528:
		return"����ʡ�˲��г���������������";
		break;
	case 420529:
		return"����ʡ�˲������������������";
		break;
	case 420581:
		return"����ʡ�˲����˶���";
		break;
	case 420582:
		return"����ʡ�˲��е�����";
		break;
	case 420583:
		return"����ʡ�˲���֦����";
		break;
	case 420600:
		return"����ʡ�差��";
		break;
	case 420601:
		return"����ʡ�差����Ͻ��";
		break;
	case 420602:
		return"����ʡ�差�������";
		break;
	case 420606:
		return"����ʡ�差�з�����";
		break;
	case 420621:
		return"����ʡ�差��������";
		break;
	case 420624:
		return"����ʡ�差��������";
		break;
	case 420625:
		return"����ʡ�差�йȳ���";
		break;
	case 420626:
		return"����ʡ�差�б�����";
		break;
	case 420682:
		return"����ʡ�差���Ϻӿ���";
		break;
	case 420683:
		return"����ʡ�差��������";
		break;
	case 420684:
		return"����ʡ�差���˳���";
		break;
	case 420700:
		return"����ʡ������";
		break;
	case 420701:
		return"����ʡ��������Ͻ��";
		break;
	case 420702:
		return"����ʡ���������Ӻ���";
		break;
	case 420703:
		return"����ʡ�����л�����";
		break;
	case 420704:
		return"����ʡ�����ж�����";
		break;
	case 420800:
		return"����ʡ������";
		break;
	case 420801:
		return"����ʡ��������Ͻ��";
		break;
	case 420802:
		return"����ʡ�����ж�����";
		break;
	case 420821:
		return"����ʡ�����о�ɽ��";
		break;
	case 420822:
		return"����ʡ������ɳ����";
		break;
	case 420881:
		return"����ʡ������������";
		break;
	case 420900:
		return"����ʡТ����";
		break;
	case 420901:
		return"����ʡТ������Ͻ��";
		break;
	case 420902:
		return"����ʡТ����Т����";
		break;
	case 420921:
		return"����ʡТ����Т����";
		break;
	case 420922:
		return"����ʡТ���д�����";
		break;
	case 420923:
		return"����ʡТ����������";
		break;
	case 420981:
		return"����ʡТ����Ӧ����";
		break;
	case 420982:
		return"����ʡТ���а�½��";
		break;
	case 420983:
		return"����ʡТ���й�ˮ��";
		break;
	case 420984:
		return"����ʡТ���к�����";
		break;
	case 421000:
		return"����ʡ������";
		break;
	case 421001:
		return"����ʡ��������Ͻ��";
		break;
	case 421002:
		return"����ʡ������ɳ����";
		break;
	case 421003:
		return"����ʡ�����о�����";
		break;
	case 421022:
		return"����ʡ�����й�����";
		break;
	case 421023:
		return"����ʡ�����м�����";
		break;
	case 421024:
		return"����ʡ�����н�����";
		break;
	case 421081:
		return"����ʡ������ʯ����";
		break;
	case 421083:
		return"����ʡ�����к����";
		break;
	case 421087:
		return"����ʡ������������";
		break;
	case 421100:
		return"����ʡ�Ƹ���";
		break;
	case 421101:
		return"����ʡ�Ƹ�����Ͻ��";
		break;
	case 421102:
		return"����ʡ�Ƹ��л�����";
		break;
	case 421121:
		return"����ʡ�Ƹ����ŷ���";
		break;
	case 421122:
		return"����ʡ�Ƹ��к찲��";
		break;
	case 421123:
		return"����ʡ�Ƹ���������";
		break;
	case 421124:
		return"����ʡ�Ƹ���Ӣɽ��";
		break;
	case 421125:
		return"����ʡ�Ƹ����ˮ��";
		break;
	case 421126:
		return"����ʡ�Ƹ���ޭ����";
		break;
	case 421127:
		return"����ʡ�Ƹ��л�÷��";
		break;
	case 421181:
		return"����ʡ�Ƹ��������";
		break;
	case 421182:
		return"����ʡ�Ƹ�����Ѩ��";
		break;
	case 421200:
		return"����ʡ������";
		break;
	case 421201:
		return"����ʡ��������Ͻ��";
		break;
	case 421202:
		return"����ʡ�������̰���";
		break;
	case 421221:
		return"����ʡ�����м�����";
		break;
	case 421222:
		return"����ʡ������ͨ����";
		break;
	case 421223:
		return"����ʡ�����г�����";
		break;
	case 421224:
		return"����ʡ������ͨɽ��";
		break;
	case 422800:
		return"����ʡʩ����������������";
		break;
	case 422801:
		return"����ʡ��ʩ���������������ݶ�ʩ��";
		break;
	case 422802:
		return"����ʡ��ʩ����������������������";
		break;
	case 422822:
		return"����ʡ��ʩ���������������ݽ�ʼ��";
		break;
	case 422823:
		return"����ʡ��ʩ���������������ݰͶ���";
		break;
	case 422825:
		return"����ʡ��ʩ����������������������";
		break;
	case 422826:
		return"����ʡ��ʩ�����������������̷���";
		break;
	case 422827:
		return"����ʡ��ʩ����������������������";
		break;
	case 422828:
		return"����ʡ��ʩ���������������ݺ׷���";
		break;
	case 429000:
		return"����ʡʡֱϽ�ؼ�������λ";
		break;
	case 429001:
		return"����ʡ������";
		break;
	case 429004:
		return"����ʡ������";
		break;
	case 429005:
		return"����ʡǱ����";
		break;
	case 429006:
		return"����ʡ������";
		break;
	case 429021:
		return"����ʡ��ũ������";
		break;
	case 430000:
		return"����ʡ";
		break;
	case 430100:
		return"����ʡ��ɳ��";
		break;
	case 430101:
		return"����ʡ��ɳ����Ͻ��";
		break;
	case 430102:
		return"����ʡ��ɳ��ܽ����";
		break;
	case 430103:
		return"����ʡ��ɳ��������";
		break;
	case 430104:
		return"����ʡ��ɳ����´��";
		break;
	case 430105:
		return"����ʡ��ɳ�п�����";
		break;
	case 430111:
		return"����ʡ��ɳ���껨��";
		break;
	case 430121:
		return"����ʡ��ɳ�г�ɳ��";
		break;
	case 430122:
		return"����ʡ��ɳ��������";
		break;
	case 430124:
		return"����ʡ��ɳ��������";
		break;
	case 430181:
		return"����ʡ��ɳ�������";
		break;
	case 430200:
		return"����ʡ������";
		break;
	case 430201:
		return"����ʡ��������Ͻ��";
		break;
	case 430202:
		return"����ʡ�����к�����";
		break;
	case 430203:
		return"����ʡ������«����";
		break;
	case 430204:
		return"����ʡ������ʯ����";
		break;
	case 430211:
		return"����ʡ��������Ԫ��";
		break;
	case 430221:
		return"����ʡ������������";
		break;
	case 430223:
		return"����ʡ����������";
		break;
	case 430224:
		return"����ʡ�����в�����";
		break;
	case 430225:
		return"����ʡ������������";
		break;
	case 430281:
		return"����ʡ������������";
		break;
	case 430300:
		return"����ʡ��̶��";
		break;
	case 430301:
		return"����ʡ��̶����Ͻ��";
		break;
	case 430302:
		return"����ʡ��̶�������";
		break;
	case 430304:
		return"����ʡ��̶��������";
		break;
	case 430321:
		return"����ʡ��̶����̶��";
		break;
	case 430381:
		return"����ʡ��̶��������";
		break;
	case 430382:
		return"����ʡ��̶����ɽ��";
		break;
	case 430400:
		return"����ʡ������";
		break;
	case 430401:
		return"����ʡ��������Ͻ��";
		break;
	case 430402:
		return"����ʡ�����н�����";
		break;
	case 430403:
		return"����ʡ�����г�����";
		break;
	case 430404:
		return"����ʡ�����гǱ���";
		break;
	case 430411:
		return"����ʡ�����н���";
		break;
	case 430412:
		return"����ʡ������������";
		break;
	case 430421:
		return"����ʡ�����к�����";
		break;
	case 430422:
		return"����ʡ�����к�����";
		break;
	case 430423:
		return"����ʡ�����к�ɽ��";
		break;
	case 430424:
		return"����ʡ�����кⶫ��";
		break;
	case 430426:
		return"����ʡ���������";
		break;
	case 430481:
		return"����ʡ������������";
		break;
	case 430482:
		return"����ʡ�����г�����";
		break;
	case 430500:
		return"����ʡ������";
		break;
	case 430501:
		return"����ʡ��������Ͻ��";
		break;
	case 430502:
		return"����ʡ������˫����";
		break;
	case 430503:
		return"����ʡ�����д�����";
		break;
	case 430511:
		return"����ʡ�����б�����";
		break;
	case 430521:
		return"����ʡ�������۶���";
		break;
	case 430522:
		return"����ʡ������������";
		break;
	case 430523:
		return"����ʡ������������";
		break;
	case 430524:
		return"����ʡ������¡����";
		break;
	case 430525:
		return"����ʡ�����ж�����";
		break;
	case 430527:
		return"����ʡ������������";
		break;
	case 430528:
		return"����ʡ������������";
		break;
	case 430529:
		return"����ʡ�����гǲ�����������";
		break;
	case 430581:
		return"����ʡ�����������";
		break;
	case 430600:
		return"����ʡ������";
		break;
	case 430601:
		return"����ʡ��������Ͻ��";
		break;
	case 430602:
		return"����ʡ����������¥��";
		break;
	case 430603:
		return"����ʡ��������Ϫ��";
		break;
	case 430611:
		return"����ʡ�����о�ɽ��";
		break;
	case 430621:
		return"����ʡ������������";
		break;
	case 430623:
		return"����ʡ�����л�����";
		break;
	case 430624:
		return"����ʡ������������";
		break;
	case 430626:
		return"����ʡ������ƽ����";
		break;
	case 430681:
		return"����ʡ������������";
		break;
	case 430682:
		return"����ʡ������������";
		break;
	case 430700:
		return"����ʡ������";
		break;
	case 430701:
		return"����ʡ��������Ͻ��";
		break;
	case 430702:
		return"����ʡ������������";
		break;
	case 430703:
		return"����ʡ�����ж�����";
		break;
	case 430721:
		return"����ʡ�����а�����";
		break;
	case 430722:
		return"����ʡ�����к�����";
		break;
	case 430723:
		return"����ʡ���������";
		break;
	case 430724:
		return"����ʡ�����������";
		break;
	case 430725:
		return"����ʡ��������Դ��";
		break;
	case 430726:
		return"����ʡ������ʯ����";
		break;
	case 430781:
		return"����ʡ�����н�����";
		break;
	case 430800:
		return"����ʡ�żҽ���";
		break;
	case 430801:
		return"����ʡ�żҽ�����Ͻ��";
		break;
	case 430802:
		return"����ʡ�żҽ���������";
		break;
	case 430811:
		return"����ʡ�żҽ�������Դ��";
		break;
	case 430821:
		return"����ʡ�żҽ��д�����";
		break;
	case 430822:
		return"����ʡ�żҽ���ɣֲ��";
		break;
	case 430900:
		return"����ʡ������";
		break;
	case 430901:
		return"����ʡ��������Ͻ��";
		break;
	case 430902:
		return"����ʡ������������";
		break;
	case 430903:
		return"����ʡ�����к�ɽ��";
		break;
	case 430921:
		return"����ʡ����������";
		break;
	case 430922:
		return"����ʡ�������ҽ���";
		break;
	case 430923:
		return"����ʡ�����а�����";
		break;
	case 430981:
		return"����ʡ�������佭��";
		break;
	case 431000:
		return"����ʡ������";
		break;
	case 431001:
		return"����ʡ��������Ͻ��";
		break;
	case 431002:
		return"����ʡ�����б�����";
		break;
	case 431003:
		return"����ʡ������������";
		break;
	case 431021:
		return"����ʡ�����й�����";
		break;
	case 431022:
		return"����ʡ������������";
		break;
	case 431023:
		return"����ʡ������������";
		break;
	case 431024:
		return"����ʡ�����мκ���";
		break;
	case 431025:
		return"����ʡ������������";
		break;
	case 431026:
		return"����ʡ�����������";
		break;
	case 431027:
		return"����ʡ�����й���";
		break;
	case 431028:
		return"����ʡ�����а�����";
		break;
	case 431081:
		return"����ʡ������������";
		break;
	case 431100:
		return"����ʡ������";
		break;
	case 431101:
		return"����ʡ��������Ͻ��";
		break;
	case 431102:
		return"����ʡ������֥ɽ��";
		break;
	case 431103:
		return"����ʡ��������ˮ̲��";
		break;
	case 431121:
		return"����ʡ������������";
		break;
	case 431122:
		return"����ʡ�����ж�����";
		break;
	case 431123:
		return"����ʡ������˫����";
		break;
	case 431124:
		return"����ʡ�����е���";
		break;
	case 431125:
		return"����ʡ�����н�����";
		break;
	case 431126:
		return"����ʡ��������Զ��";
		break;
	case 431127:
		return"����ʡ��������ɽ��";
		break;
	case 431128:
		return"����ʡ������������";
		break;
	case 431129:
		return"����ʡ�����н�������������";
		break;
	case 431200:
		return"����ʡ������";
		break;
	case 431201:
		return"����ʡ��������Ͻ��";
		break;
	case 431202:
		return"����ʡ�����к׳���";
		break;
	case 431221:
		return"����ʡ�������з���";
		break;
	case 431222:
		return"����ʡ������������";
		break;
	case 431223:
		return"����ʡ�����г�Ϫ��";
		break;
	case 431224:
		return"����ʡ������������";
		break;
	case 431225:
		return"����ʡ�����л�ͬ��";
		break;
	case 431226:
		return"����ʡ��������������������";
		break;
	case 431227:
		return"����ʡ�������»ζ���������";
		break;
	case 431228:
		return"����ʡ�������ƽ�����������";
		break;
	case 431229:
		return"����ʡ�����о������嶱��������";
		break;
	case 431230:
		return"����ʡ������ͨ������������";
		break;
	case 431281:
		return"����ʡ�����к齭��";
		break;
	case 432500:
		return"����ʡ¦�׵���";
		break;
	case 432501:
		return"����ʡ¦�׵���¦����";
		break;
	case 432502:
		return"����ʡ¦�׵�����ˮ����";
		break;
	case 432503:
		return"����ʡ¦�׵�����Դ��";
		break;
	case 432522:
		return"����ʡ¦�׵���˫����";
		break;
	case 432524:
		return"����ʡ¦�׵����»���";
		break;
	case 433000:
		return"����ʡ������";
		break;
	case 433001:
		return"����ʡ������";
		break;
	case 433100:
		return"����ʡ��������������������";
		break;
	case 433101:
		return"����ʡ�������������������ݼ�����";
		break;
	case 433122:
		return"����ʡ����������������������Ϫ��";
		break;
	case 433123:
		return"����ʡ�������������������ݷ����";
		break;
	case 433124:
		return"����ʡ�������������������ݻ�ԫ��";
		break;
	case 433125:
		return"����ʡ�������������������ݱ�����";
		break;
	case 433126:
		return"����ʡ�������������������ݹ�����";
		break;
	case 433127:
		return"����ʡ����������������������˳��";
		break;
	case 433130:
		return"����ʡ����������������������ɽ��";
		break;
	case 440000:
		return"�㶫ʡ";
		break;
	case 440100:
		return"�㶫ʡ������";
		break;
	case 440101:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 440102:
		return"�㶫ʡ�����ж�ɽ��";
		break;
	case 440103:
		return"�㶫ʡ������������";
		break;
	case 440104:
		return"�㶫ʡ������Խ����";
		break;
	case 440105:
		return"�㶫ʡ�����к�����";
		break;
	case 440106:
		return"�㶫ʡ�����������";
		break;
	case 440107:
		return"�㶫ʡ�����з�����";
		break;
	case 440111:
		return"�㶫ʡ�����а�����";
		break;
	case 440112:
		return"�㶫ʡ�����л�����";
		break;
	case 440181:
		return"�㶫ʡ�����з�خ��";
		break;
	case 440182:
		return"�㶫ʡ�����л�����";
		break;
	case 440183:
		return"�㶫ʡ������������";
		break;
	case 440184:
		return"�㶫ʡ�����дӻ���";
		break;
	case 440200:
		return"�㶫ʡ�ع���";
		break;
	case 440201:
		return"�㶫ʡ�ع�����Ͻ��";
		break;
	case 440202:
		return"�㶫ʡ�ع��б�����";
		break;
	case 440203:
		return"�㶫ʡ�ع����佭��";
		break;
	case 440204:
		return"�㶫ʡ�ع���䥽���";
		break;
	case 440221:
		return"�㶫ʡ�ع���������";
		break;
	case 440222:
		return"�㶫ʡ�ع���ʼ����";
		break;
	case 440224:
		return"�㶫ʡ�ع����ʻ���";
		break;
	case 440229:
		return"�㶫ʡ�ع�����Դ��";
		break;
	case 440232:
		return"�㶫ʡ�ع�����Դ����������";
		break;
	case 440233:
		return"�㶫ʡ�ع����·���";
		break;
	case 440281:
		return"�㶫ʡ�ع����ֲ���";
		break;
	case 440282:
		return"�㶫ʡ�ع���������";
		break;
	case 440300:
		return"�㶫ʡ������";
		break;
	case 440301:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 440303:
		return"�㶫ʡ�������޺���";
		break;
	case 440304:
		return"�㶫ʡ�����и�����";
		break;
	case 440305:
		return"�㶫ʡ��������ɽ��";
		break;
	case 440306:
		return"�㶫ʡ�����б�����";
		break;
	case 440307:
		return"�㶫ʡ������������";
		break;
	case 440308:
		return"�㶫ʡ������������";
		break;
	case 440400:
		return"�㶫ʡ�麣��";
		break;
	case 440401:
		return"�㶫ʡ�麣����Ͻ��";
		break;
	case 440402:
		return"�㶫ʡ�麣��������";
		break;
	case 440421:
		return"�㶫ʡ�麣�ж�����";
		break;
	case 440500:
		return"�㶫ʡ��ͷ��";
		break;
	case 440501:
		return"�㶫ʡ��ͷ����Ͻ��";
		break;
	case 440506:
		return"�㶫ʡ��ͷ�д����";
		break;
	case 440507:
		return"�㶫ʡ��ͷ��������";
		break;
	case 440508:
		return"�㶫ʡ��ͷ�н�԰��";
		break;
	case 440509:
		return"�㶫ʡ��ͷ����ƽ��";
		break;
	case 440510:
		return"�㶫ʡ��ͷ�к�����";
		break;
	case 440523:
		return"�㶫ʡ��ͷ���ϰ���";
		break;
	case 440582:
		return"�㶫ʡ��ͷ�г�����";
		break;
	case 440583:
		return"�㶫ʡ��ͷ�гκ���";
		break;
	case 440600:
		return"�㶫ʡ��ɽ��";
		break;
	case 440601:
		return"�㶫ʡ��ɽ����Ͻ��";
		break;
	case 440602:
		return"�㶫ʡ��ɽ�г���";
		break;
	case 440603:
		return"�㶫ʡ��ɽ��ʯ����";
		break;
	case 440681:
		return"�㶫ʡ��ɽ��˳����";
		break;
	case 440682:
		return"�㶫ʡ��ɽ���Ϻ���";
		break;
	case 440683:
		return"�㶫ʡ��ɽ����ˮ��";
		break;
	case 440684:
		return"�㶫ʡ��ɽ�и�����";
		break;
	case 440700:
		return"�㶫ʡ������";
		break;
	case 440701:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 440703:
		return"�㶫ʡ���������";
		break;
	case 440704:
		return"�㶫ʡ�����н�����";
		break;
	case 440781:
		return"�㶫ʡ������̨ɽ��";
		break;
	case 440782:
		return"�㶫ʡ�������»���";
		break;
	case 440783:
		return"�㶫ʡ�����п�ƽ��";
		break;
	case 440784:
		return"�㶫ʡ�����к�ɽ��";
		break;
	case 440785:
		return"�㶫ʡ�����ж�ƽ��";
		break;
	case 440800:
		return"�㶫ʡտ����";
		break;
	case 440801:
		return"�㶫ʡտ������Ͻ��";
		break;
	case 440802:
		return"�㶫ʡտ���г࿲��";
		break;
	case 440803:
		return"�㶫ʡտ����ϼɽ��";
		break;
	case 440804:
		return"�㶫ʡտ������ͷ��";
		break;
	case 440811:
		return"�㶫ʡտ����������";
		break;
	case 440823:
		return"�㶫ʡտ������Ϫ��";
		break;
	case 440825:
		return"�㶫ʡտ����������";
		break;
	case 440881:
		return"�㶫ʡտ����������";
		break;
	case 440882:
		return"�㶫ʡտ����������";
		break;
	case 440883:
		return"�㶫ʡտ�����⴨��";
		break;
	case 440900:
		return"�㶫ʡï����";
		break;
	case 440901:
		return"�㶫ʡï������Ͻ��";
		break;
	case 440902:
		return"�㶫ʡï����ï����";
		break;
	case 440923:
		return"�㶫ʡï���е����";
		break;
	case 440981:
		return"�㶫ʡï���и�����";
		break;
	case 440982:
		return"�㶫ʡï���л�����";
		break;
	case 440983:
		return"�㶫ʡï����������";
		break;
	case 441200:
		return"�㶫ʡ������";
		break;
	case 441201:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 441202:
		return"�㶫ʡ�����ж�����";
		break;
	case 441203:
		return"�㶫ʡ�����ж�����";
		break;
	case 441223:
		return"�㶫ʡ�����й�����";
		break;
	case 441224:
		return"�㶫ʡ�����л�����";
		break;
	case 441225:
		return"�㶫ʡ�����з⿪��";
		break;
	case 441226:
		return"�㶫ʡ�����е�����";
		break;
	case 441283:
		return"�㶫ʡ�����и�Ҫ��";
		break;
	case 441284:
		return"�㶫ʡ�������Ļ���";
		break;
	case 441300:
		return"�㶫ʡ������";
		break;
	case 441301:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 441302:
		return"�㶫ʡ�����лݳ���";
		break;
	case 441322:
		return"�㶫ʡ�����в�����";
		break;
	case 441323:
		return"�㶫ʡ�����лݶ���";
		break;
	case 441324:
		return"�㶫ʡ������������";
		break;
	case 441381:
		return"�㶫ʡ�����л�����";
		break;
	case 441400:
		return"�㶫ʡ÷����";
		break;
	case 441401:
		return"�㶫ʡ÷������Ͻ��";
		break;
	case 441402:
		return"�㶫ʡ÷����÷����";
		break;
	case 441421:
		return"�㶫ʡ÷����÷��";
		break;
	case 441422:
		return"�㶫ʡ÷���д�����";
		break;
	case 441423:
		return"�㶫ʡ÷���з�˳��";
		break;
	case 441424:
		return"�㶫ʡ÷�����廪��";
		break;
	case 441426:
		return"�㶫ʡ÷����ƽԶ��";
		break;
	case 441427:
		return"�㶫ʡ÷���н�����";
		break;
	case 441481:
		return"�㶫ʡ÷����������";
		break;
	case 441500:
		return"�㶫ʡ��β��";
		break;
	case 441501:
		return"�㶫ʡ��β����Ͻ��";
		break;
	case 441502:
		return"�㶫ʡ��β�г���";
		break;
	case 441521:
		return"�㶫ʡ��β�к�����";
		break;
	case 441523:
		return"�㶫ʡ��β��½����";
		break;
	case 441581:
		return"�㶫ʡ��β��½����";
		break;
	case 441600:
		return"�㶫ʡ��Դ��";
		break;
	case 441601:
		return"�㶫ʡ��Դ����Ͻ��";
		break;
	case 441602:
		return"�㶫ʡ��Դ��Դ����";
		break;
	case 441621:
		return"�㶫ʡ��Դ���Ͻ���";
		break;
	case 441622:
		return"�㶫ʡ��Դ��������";
		break;
	case 441623:
		return"�㶫ʡ��Դ����ƽ��";
		break;
	case 441624:
		return"�㶫ʡ��Դ�к�ƽ��";
		break;
	case 441625:
		return"�㶫ʡ��Դ�ж�Դ��";
		break;
	case 441700:
		return"�㶫ʡ������";
		break;
	case 441701:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 441702:
		return"�㶫ʡ�����н�����";
		break;
	case 441721:
		return"�㶫ʡ������������";
		break;
	case 441723:
		return"�㶫ʡ������������";
		break;
	case 441781:
		return"�㶫ʡ������������";
		break;
	case 441800:
		return"�㶫ʡ��Զ��";
		break;
	case 441801:
		return"�㶫ʡ��Զ����Ͻ��";
		break;
	case 441802:
		return"�㶫ʡ��Զ�������";
		break;
	case 441821:
		return"�㶫ʡ��Զ�з����";
		break;
	case 441823:
		return"�㶫ʡ��Զ����ɽ��";
		break;
	case 441825:
		return"�㶫ʡ��Զ����ɽ׳������������";
		break;
	case 441826:
		return"�㶫ʡ��Զ����������������";
		break;
	case 441827:
		return"�㶫ʡ��Զ��������";
		break;
	case 441881:
		return"�㶫ʡ��Զ��Ӣ����";
		break;
	case 441882:
		return"�㶫ʡ��Զ��������";
		break;
	case 441900:
		return"�㶫ʡ��ݸ��";
		break;
	case 441901:
		return"�㶫ʡ��ݸ����Ͻ��";
		break;
	case 442000:
		return"�㶫ʡ��ɽ��";
		break;
	case 442001:
		return"�㶫ʡ��ɽ����Ͻ��";
		break;
	case 445100:
		return"�㶫ʡ������";
		break;
	case 445101:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 445102:
		return"�㶫ʡ������������";
		break;
	case 445121:
		return"�㶫ʡ�����г�����";
		break;
	case 445122:
		return"�㶫ʡ��������ƽ��";
		break;
	case 445200:
		return"�㶫ʡ������";
		break;
	case 445201:
		return"�㶫ʡ��������Ͻ��";
		break;
	case 445202:
		return"�㶫ʡ�������ų���";
		break;
	case 445221:
		return"�㶫ʡ�����нҶ���";
		break;
	case 445222:
		return"�㶫ʡ�����н�����";
		break;
	case 445224:
		return"�㶫ʡ�����л�����";
		break;
	case 445281:
		return"�㶫ʡ������������";
		break;
	case 445300:
		return"�㶫ʡ�Ƹ���";
		break;
	case 445301:
		return"�㶫ʡ�Ƹ�����Ͻ��";
		break;
	case 445302:
		return"�㶫ʡ�Ƹ����Ƴ���";
		break;
	case 445321:
		return"�㶫ʡ�Ƹ���������";
		break;
	case 445322:
		return"�㶫ʡ�Ƹ���������";
		break;
	case 445323:
		return"�㶫ʡ�Ƹ����ư���";
		break;
	case 445381:
		return"�㶫ʡ�Ƹ����޶���";
		break;
	case 450000:
		return"����׳��������";
		break;
	case 450100:
		return"����׳��������������";
		break;
	case 450101:
		return"����׳����������������Ͻ��";
		break;
	case 450102:
		return"����׳��������������������";
		break;
	case 450103:
		return"����׳���������������³���";
		break;
	case 450104:
		return"����׳�������������гǱ���";
		break;
	case 450105:
		return"����׳�������������н�����";
		break;
	case 450106:
		return"����׳��������������������";
		break;
	case 450111:
		return"����׳���������������н���";
		break;
	case 450121:
		return"����׳��������������������";
		break;
	case 450122:
		return"����׳��������������������";
		break;
	case 450200:
		return"����׳��������������";
		break;
	case 450201:
		return"����׳����������������Ͻ��";
		break;
	case 450202:
		return"����׳�������������г�����";
		break;
	case 450203:
		return"����׳�������������������";
		break;
	case 450204:
		return"����׳��������������������";
		break;
	case 450205:
		return"����׳��������������������";
		break;
	case 450211:
		return"����׳���������������н���";
		break;
	case 450221:
		return"����׳��������������������";
		break;
	case 450222:
		return"����׳��������������������";
		break;
	case 450300:
		return"����׳��������������";
		break;
	case 450301:
		return"����׳����������������Ͻ��";
		break;
	case 450302:
		return"����׳�������������������";
		break;
	case 450303:
		return"����׳�������������е�����";
		break;
	case 450304:
		return"����׳����������������ɽ��";
		break;
	case 450305:
		return"����׳��������������������";
		break;
	case 450311:
		return"����׳����������������ɽ��";
		break;
	case 450321:
		return"����׳����������������˷��";
		break;
	case 450322:
		return"����׳���������������ٹ���";
		break;
	case 450323:
		return"����׳���������������鴨��";
		break;
	case 450324:
		return"����׳��������������ȫ����";
		break;
	case 450325:
		return"����׳���������������˰���";
		break;
	case 450326:
		return"����׳��������������������";
		break;
	case 450327:
		return"����׳�������������й�����";
		break;
	case 450328:
		return"����׳����������������ʤ����������";
		break;
	case 450329:
		return"����׳����������������Դ��";
		break;
	case 450330:
		return"����׳��������������ƽ����";
		break;
	case 450331:
		return"����׳��������������������";
		break;
	case 450332:
		return"����׳�������������й�������������";
		break;
	case 450400:
		return"����׳��������������";
		break;
	case 450401:
		return"����׳����������������Ͻ��";
		break;
	case 450403:
		return"����׳��������������������";
		break;
	case 450404:
		return"����׳�������������е�ɽ��";
		break;
	case 450411:
		return"����׳���������������н���";
		break;
	case 450421:
		return"����׳�������������в�����";
		break;
	case 450422:
		return"����׳������������������";
		break;
	case 450423:
		return"����׳����������������ɽ��";
		break;
	case 450481:
		return"����׳���������������Ϫ��";
		break;
	case 450500:
		return"����׳��������������";
		break;
	case 450501:
		return"����׳����������������Ͻ��";
		break;
	case 450502:
		return"����׳�������������к�����";
		break;
	case 450503:
		return"����׳��������������������";
		break;
	case 450512:
		return"����׳����������������ɽ����";
		break;
	case 450521:
		return"����׳�������������к�����";
		break;
	case 450600:
		return"����׳�����������Ǹ���";
		break;
	case 450601:
		return"����׳�����������Ǹ�����Ͻ��";
		break;
	case 450602:
		return"����׳�����������Ǹ��иۿ���";
		break;
	case 450603:
		return"����׳�����������Ǹ��з�����";
		break;
	case 450621:
		return"����׳�����������Ǹ�����˼��";
		break;
	case 450681:
		return"����׳�����������Ǹ��ж�����";
		break;
	case 450700:
		return"����׳��������������";
		break;
	case 450701:
		return"����׳����������������Ͻ��";
		break;
	case 450702:
		return"����׳��������������������";
		break;
	case 450703:
		return"����׳���������������ձ���";
		break;
	case 450721:
		return"����׳����������������ɽ��";
		break;
	case 450722:
		return"����׳���������������ֱ���";
		break;
	case 450800:
		return"����׳�������������";
		break;
	case 450801:
		return"����׳���������������Ͻ��";
		break;
	case 450802:
		return"����׳������������и۱���";
		break;
	case 450803:
		return"����׳������������и�����";
		break;
	case 450821:
		return"����׳�������������ƽ����";
		break;
	case 450881:
		return"����׳������������й�ƽ��";
		break;
	case 450900:
		return"����׳��������������";
		break;
	case 450901:
		return"����׳����������������Ͻ��";
		break;
	case 450902:
		return"����׳��������������������";
		break;
	case 450921:
		return"����׳������������������";
		break;
	case 450922:
		return"����׳��������������½����";
		break;
	case 450923:
		return"����׳�������������в�����";
		break;
	case 450924:
		return"����׳����������������ҵ��";
		break;
	case 450981:
		return"����׳�������������б�����";
		break;
	case 452100:
		return"����׳����������������";
		break;
	case 452101:
		return"����׳����������������ƾ����";
		break;
	case 452122:
		return"����׳��������������������";
		break;
	case 452123:
		return"����׳����������������������";
		break;
	case 452124:
		return"����׳����������������������";
		break;
	case 452126:
		return"����׳����������������¡����";
		break;
	case 452127:
		return"����׳������������������ɽ��";
		break;
	case 452128:
		return"����׳����������������������";
		break;
	case 452129:
		return"����׳����������������������";
		break;
	case 452130:
		return"����׳����������������������";
		break;
	case 452131:
		return"����׳���������������������";
		break;
	case 452132:
		return"����׳����������������������";
		break;
	case 452133:
		return"����׳����������������������";
		break;
	case 452200:
		return"����׳�����������ݵ���";
		break;
	case 452201:
		return"����׳�����������ݵ�����ɽ��";
		break;
	case 452223:
		return"����׳�����������ݵ���¹կ��";
		break;
	case 452224:
		return"����׳�����������ݵ���������";
		break;
	case 452225:
		return"����׳�����������ݵ���������";
		break;
	case 452226:
		return"����׳�����������ݵ���������";
		break;
	case 452227:
		return"����׳�����������ݵ����ڰ���";
		break;
	case 452228:
		return"����׳�����������ݵ�����������������";
		break;
	case 452229:
		return"����׳�����������ݵ�����ˮ����������";
		break;
	case 452230:
		return"����׳�����������ݵ�����������������";
		break;
	case 452231:
		return"����׳�����������ݵ����ó���";
		break;
	case 452400:
		return"����׳�����������ݵ���";
		break;
	case 452402:
		return"����׳�����������ݵ���������";
		break;
	case 452424:
		return"����׳�����������ݵ�����ƽ��";
		break;
	case 452427:
		return"����׳�����������ݵ�����ɽ��";
		break;
	case 452428:
		return"����׳�����������ݵ�����������������";
		break;
	case 452600:
		return"����׳����������ɫ����";
		break;
	case 452601:
		return"����׳����������ɫ������ɫ��";
		break;
	case 452622:
		return"����׳����������ɫ����������";
		break;
	case 452623:
		return"����׳����������ɫ�����ﶫ��";
		break;
	case 452624:
		return"����׳����������ɫ����ƽ����";
		break;
	case 452625:
		return"����׳����������ɫ�����±���";
		break;
	case 452626:
		return"����׳����������ɫ����������";
		break;
	case 452627:
		return"����׳����������ɫ����������";
		break;
	case 452628:
		return"����׳����������ɫ����������";
		break;
	case 452629:
		return"����׳����������ɫ������ҵ��";
		break;
	case 452630:
		return"����׳����������ɫ����������";
		break;
	case 452631:
		return"����׳����������ɫ����¡�ָ���������";
		break;
	case 452632:
		return"����׳����������ɫ����������";
		break;
	case 452700:
		return"����׳���������ӳص���";
		break;
	case 452701:
		return"����׳���������ӳص����ӳ���";
		break;
	case 452702:
		return"����׳���������ӳص���������";
		break;
	case 452723:
		return"����׳���������ӳص����޳�������������";
		break;
	case 452724:
		return"����׳���������ӳص�������ë����������";
		break;
	case 452725:
		return"����׳���������ӳص����ϵ���";
		break;
	case 452726:
		return"����׳���������ӳص��������";
		break;
	case 452727:
		return"����׳���������ӳص�����ɽ��";
		break;
	case 452728:
		return"����׳���������ӳص���������";
		break;
	case 452729:
		return"����׳���������ӳص�����������������";
		break;
	case 452730:
		return"����׳���������ӳص�����������������";
		break;
	case 452731:
		return"����׳���������ӳص���������������";
		break;
	case 460000:
		return"����ʡ";
		break;
	case 460001:
		return"����ʡ������ͨʲ��";
		break;
	case 460002:
		return"����ʡ����������";
		break;
	case 460003:
		return"����ʡ������������";
		break;
	case 460004:
		return"����ʡ��������ɽ��";
		break;
	case 460005:
		return"����ʡ�������Ĳ���";
		break;
	case 460006:
		return"����ʡ������������";
		break;
	case 460007:
		return"����ʡ�����ж�����";
		break;
	case 460025:
		return"����ʡ�����ж�����";
		break;
	case 460026:
		return"����ʡ�������Ͳ���";
		break;
	case 460027:
		return"����ʡ�����г�����";
		break;
	case 460028:
		return"����ʡ�������ٸ���";
		break;
	case 460030:
		return"����ʡ�����а�ɳ����������";
		break;
	case 460031:
		return"����ʡ�����в�������������";
		break;
	case 460033:
		return"����ʡ�������ֶ�����������";
		break;
	case 460034:
		return"����ʡ��������ˮ����������";
		break;
	case 460035:
		return"����ʡ�����б�ͤ��������������";
		break;
	case 460036:
		return"����ʡ������������������������";
		break;
	case 460037:
		return"����ʡ��ɳȺ��";
		break;
	case 460038:
		return"����ʡ��ɳȺ��";
		break;
	case 460039:
		return"����ʡ��ɳȺ���ĵ������亣��";
		break;
	case 460100:
		return"����ʡ������";
		break;
	case 460101:
		return"����ʡ��������Ͻ��";
		break;
	case 460102:
		return"����ʡ����������";
		break;
	case 460103:
		return"����ʡ�������»���";
		break;
	case 460104:
		return"����ʡ��������Ӣ��";
		break;
	case 460200:
		return"����ʡ������";
		break;
	case 460201:
		return"����ʡ��������Ͻ��";
		break;
	case 500000:
		return"������";
		break;
	case 500100:
		return"��������Ͻ��";
		break;
	case 500101:
		return"������������";
		break;
	case 500102:
		return"�����и�����";
		break;
	case 500103:
		return"������������";
		break;
	case 500104:
		return"�����д�ɿ���";
		break;
	case 500105:
		return"�����н�����";
		break;
	case 500106:
		return"������ɳƺ����";
		break;
	case 500107:
		return"�����о�������";
		break;
	case 500108:
		return"�������ϰ���";
		break;
	case 500109:
		return"�����б�����";
		break;
	case 500110:
		return"��������ʢ��";
		break;
	case 500111:
		return"������˫����";
		break;
	case 500112:
		return"�������山��";
		break;
	case 500113:
		return"�����а�����";
		break;
	case 500200:
		return"��������";
		break;
	case 500221:
		return"�����г�����";
		break;
	case 500222:
		return"�������뽭��";
		break;
	case 500223:
		return"������������";
		break;
	case 500224:
		return"������ͭ����";
		break;
	case 500225:
		return"�����д�����";
		break;
	case 500226:
		return"�������ٲ���";
		break;
	case 500227:
		return"�������ɽ��";
		break;
	case 500228:
		return"��������ƽ��";
		break;
	case 500229:
		return"�����гǿ���";
		break;
	case 500230:
		return"�����зᶼ��";
		break;
	case 500231:
		return"�����е潭��";
		break;
	case 500232:
		return"��������¡��";
		break;
	case 500233:
		return"����������";
		break;
	case 500234:
		return"�����п���";
		break;
	case 500235:
		return"������������";
		break;
	case 500236:
		return"�����з����";
		break;
	case 500237:
		return"��������ɽ��";
		break;
	case 500238:
		return"��������Ϫ��";
		break;
	case 500239:
		return"������ǭ������������������";
		break;
	case 500240:
		return"������ʯ��������������";
		break;
	case 500241:
		return"��������ɽ����������������";
		break;
	case 500242:
		return"��������������������������";
		break;
	case 500243:
		return"��������ˮ����������������";
		break;
	case 500300:
		return"������(��)";
		break;
	case 500381:
		return"�����н�����";
		break;
	case 500382:
		return"�����кϴ���";
		break;
	case 500383:
		return"������������";
		break;
	case 500384:
		return"�������ϴ���";
		break;
	case 510000:
		return"�Ĵ�ʡ";
		break;
	case 510100:
		return"�Ĵ�ʡ�ɶ���";
		break;
	case 510101:
		return"�Ĵ�ʡ�ɶ�����Ͻ��";
		break;
	case 510104:
		return"�Ĵ�ʡ�ɶ��н�����";
		break;
	case 510105:
		return"�Ĵ�ʡ�ɶ���������";
		break;
	case 510106:
		return"�Ĵ�ʡ�ɶ��н�ţ��";
		break;
	case 510107:
		return"�Ĵ�ʡ�ɶ��������";
		break;
	case 510108:
		return"�Ĵ�ʡ�ɶ��гɻ���";
		break;
	case 510112:
		return"�Ĵ�ʡ�ɶ�����Ȫ����";
		break;
	case 510113:
		return"�Ĵ�ʡ�ɶ�����׽���";
		break;
	case 510121:
		return"�Ĵ�ʡ�ɶ��н�����";
		break;
	case 510122:
		return"�Ĵ�ʡ�ɶ���˫����";
		break;
	case 510123:
		return"�Ĵ�ʡ�ɶ����½���";
		break;
	case 510124:
		return"�Ĵ�ʡ�ɶ���ۯ��";
		break;
	case 510125:
		return"�Ĵ�ʡ�ɶ����¶���";
		break;
	case 510129:
		return"�Ĵ�ʡ�ɶ��д�����";
		break;
	case 510131:
		return"�Ĵ�ʡ�ɶ����ѽ���";
		break;
	case 510132:
		return"�Ĵ�ʡ�ɶ����½���";
		break;
	case 510181:
		return"�Ĵ�ʡ�ɶ��ж�������";
		break;
	case 510182:
		return"�Ĵ�ʡ�ɶ���������";
		break;
	case 510183:
		return"�Ĵ�ʡ�ɶ���������";
		break;
	case 510184:
		return"�Ĵ�ʡ�ɶ��г�����";
		break;
	case 510300:
		return"�Ĵ�ʡ�Թ���";
		break;
	case 510301:
		return"�Ĵ�ʡ�Թ�����Ͻ��";
		break;
	case 510302:
		return"�Ĵ�ʡ�Թ�����������";
		break;
	case 510303:
		return"�Ĵ�ʡ�Թ��й�����";
		break;
	case 510304:
		return"�Ĵ�ʡ�Թ��д���";
		break;
	case 510311:
		return"�Ĵ�ʡ�Թ�����̲��";
		break;
	case 510321:
		return"�Ĵ�ʡ�Թ�������";
		break;
	case 510322:
		return"�Ĵ�ʡ�Թ��и�˳��";
		break;
	case 510400:
		return"�Ĵ�ʡ��֦����";
		break;
	case 510401:
		return"�Ĵ�ʡ��֦������Ͻ��";
		break;
	case 510402:
		return"�Ĵ�ʡ��֦���ж���";
		break;
	case 510403:
		return"�Ĵ�ʡ��֦��������";
		break;
	case 510411:
		return"�Ĵ�ʡ��֦�����ʺ���";
		break;
	case 510421:
		return"�Ĵ�ʡ��֦����������";
		break;
	case 510422:
		return"�Ĵ�ʡ��֦�����α���";
		break;
	case 510500:
		return"�Ĵ�ʡ������";
		break;
	case 510501:
		return"�Ĵ�ʡ��������Ͻ��";
		break;
	case 510502:
		return"�Ĵ�ʡ�����н�����";
		break;
	case 510503:
		return"�Ĵ�ʡ��������Ϫ��";
		break;
	case 510504:
		return"�Ĵ�ʡ����������̶��";
		break;
	case 510521:
		return"�Ĵ�ʡ����������";
		break;
	case 510522:
		return"�Ĵ�ʡ�����кϽ���";
		break;
	case 510524:
		return"�Ĵ�ʡ������������";
		break;
	case 510525:
		return"�Ĵ�ʡ�����й�����";
		break;
	case 510600:
		return"�Ĵ�ʡ������";
		break;
	case 510601:
		return"�Ĵ�ʡ��������Ͻ��";
		break;
	case 510603:
		return"�Ĵ�ʡ�����������";
		break;
	case 510623:
		return"�Ĵ�ʡ�������н���";
		break;
	case 510626:
		return"�Ĵ�ʡ�������޽���";
		break;
	case 510681:
		return"�Ĵ�ʡ�����й㺺��";
		break;
	case 510682:
		return"�Ĵ�ʡ������ʲ����";
		break;
	case 510683:
		return"�Ĵ�ʡ������������";
		break;
	case 510700:
		return"�Ĵ�ʡ������";
		break;
	case 510701:
		return"�Ĵ�ʡ��������Ͻ��";
		break;
	case 510703:
		return"�Ĵ�ʡ�����и�����";
		break;
	case 510704:
		return"�Ĵ�ʡ������������";
		break;
	case 510722:
		return"�Ĵ�ʡ��������̨��";
		break;
	case 510723:
		return"�Ĵ�ʡ��������ͤ��";
		break;
	case 510724:
		return"�Ĵ�ʡ�����а���";
		break;
	case 510725:
		return"�Ĵ�ʡ������������";
		break;
	case 510726:
		return"�Ĵ�ʡ�����б�����";
		break;
	case 510727:
		return"�Ĵ�ʡ������ƽ����";
		break;
	case 510781:
		return"�Ĵ�ʡ�����н�����";
		break;
	case 510800:
		return"�Ĵ�ʡ��Ԫ��";
		break;
	case 510801:
		return"�Ĵ�ʡ��Ԫ����Ͻ��";
		break;
	case 510802:
		return"�Ĵ�ʡ��Ԫ��������";
		break;
	case 510811:
		return"�Ĵ�ʡ��Ԫ��Ԫ����";
		break;
	case 510812:
		return"�Ĵ�ʡ��Ԫ�г�����";
		break;
	case 510821:
		return"�Ĵ�ʡ��Ԫ��������";
		break;
	case 510822:
		return"�Ĵ�ʡ��Ԫ���ന��";
		break;
	case 510823:
		return"�Ĵ�ʡ��Ԫ�н�����";
		break;
	case 510824:
		return"�Ĵ�ʡ��Ԫ�в�Ϫ��";
		break;
	case 510900:
		return"�Ĵ�ʡ������";
		break;
	case 510901:
		return"�Ĵ�ʡ��������Ͻ��";
		break;
	case 510902:
		return"�Ĵ�ʡ������������";
		break;
	case 510921:
		return"�Ĵ�ʡ��������Ϫ��";
		break;
	case 510922:
		return"�Ĵ�ʡ�����������";
		break;
	case 510923:
		return"�Ĵ�ʡ�����д�Ӣ��";
		break;
	case 511000:
		return"�Ĵ�ʡ�ڽ���";
		break;
	case 511001:
		return"�Ĵ�ʡ�ڽ�����Ͻ��";
		break;
	case 511002:
		return"�Ĵ�ʡ�ڽ���������";
		break;
	case 511011:
		return"�Ĵ�ʡ�ڽ��ж�����";
		break;
	case 511024:
		return"�Ĵ�ʡ�ڽ�����Զ��";
		break;
	case 511025:
		return"�Ĵ�ʡ�ڽ���������";
		break;
	case 511028:
		return"�Ĵ�ʡ�ڽ���¡����";
		break;
	case 511100:
		return"�Ĵ�ʡ��ɽ��";
		break;
	case 511101:
		return"�Ĵ�ʡ��ɽ����Ͻ��";
		break;
	case 511102:
		return"�Ĵ�ʡ��ɽ��������";
		break;
	case 511111:
		return"�Ĵ�ʡ��ɽ��ɳ����";
		break;
	case 511112:
		return"�Ĵ�ʡ��ɽ����ͨ����";
		break;
	case 511113:
		return"�Ĵ�ʡ��ɽ�н�ں���";
		break;
	case 511123:
		return"�Ĵ�ʡ��ɽ����Ϊ��";
		break;
	case 511124:
		return"�Ĵ�ʡ��ɽ�о�����";
		break;
	case 511126:
		return"�Ĵ�ʡ��ɽ�мн���";
		break;
	case 511129:
		return"�Ĵ�ʡ��ɽ���崨��";
		break;
	case 511132:
		return"�Ĵ�ʡ��ɽ�ж������������";
		break;
	case 511133:
		return"�Ĵ�ʡ��ɽ���������������";
		break;
	case 511181:
		return"�Ĵ�ʡ��ɽ�ж�üɽ��";
		break;
	case 511300:
		return"�Ĵ�ʡ�ϳ���";
		break;
	case 511301:
		return"�Ĵ�ʡ�ϳ�����Ͻ��";
		break;
	case 511302:
		return"�Ĵ�ʡ�ϳ���˳����";
		break;
	case 511303:
		return"�Ĵ�ʡ�ϳ��и�ƺ��";
		break;
	case 511304:
		return"�Ĵ�ʡ�ϳ��м�����";
		break;
	case 511321:
		return"�Ĵ�ʡ�ϳ����ϲ���";
		break;
	case 511322:
		return"�Ĵ�ʡ�ϳ���Ӫɽ��";
		break;
	case 511323:
		return"�Ĵ�ʡ�ϳ������";
		break;
	case 511324:
		return"�Ĵ�ʡ�ϳ�����¤��";
		break;
	case 511325:
		return"�Ĵ�ʡ�ϳ���������";
		break;
	case 511381:
		return"�Ĵ�ʡ�ϳ���������";
		break;
	case 511500:
		return"�Ĵ�ʡ�˱���";
		break;
	case 511501:
		return"�Ĵ�ʡ�˱�����Ͻ��";
		break;
	case 511502:
		return"�Ĵ�ʡ�˱��д�����";
		break;
	case 511521:
		return"�Ĵ�ʡ�˱����˱���";
		break;
	case 511522:
		return"�Ĵ�ʡ�˱�����Ϫ��";
		break;
	case 511523:
		return"�Ĵ�ʡ�˱��н�����";
		break;
	case 511524:
		return"�Ĵ�ʡ�˱��г�����";
		break;
	case 511525:
		return"�Ĵ�ʡ�˱��и���";
		break;
	case 511526:
		return"�Ĵ�ʡ�˱�������";
		break;
	case 511527:
		return"�Ĵ�ʡ�˱���������";
		break;
	case 511528:
		return"�Ĵ�ʡ�˱���������";
		break;
	case 511529:
		return"�Ĵ�ʡ�˱�����ɽ��";
		break;
	case 511600:
		return"�Ĵ�ʡ�㰲��";
		break;
	case 511601:
		return"�Ĵ�ʡ�㰲����Ͻ��";
		break;
	case 511602:
		return"�Ĵ�ʡ�㰲�й㰲��";
		break;
	case 511621:
		return"�Ĵ�ʡ�㰲��������";
		break;
	case 511622:
		return"�Ĵ�ʡ�㰲����ʤ��";
		break;
	case 511623:
		return"�Ĵ�ʡ�㰲����ˮ��";
		break;
	case 511681:
		return"�Ĵ�ʡ�㰲�л�����";
		break;
	case 513000:
		return"�Ĵ�ʡ�ﴨ����";
		break;
	case 513001:
		return"�Ĵ�ʡ�ﴨ�����ﴨ��";
		break;
	case 513002:
		return"�Ĵ�ʡ�ﴨ������Դ��";
		break;
	case 513021:
		return"�Ĵ�ʡ�ﴨ��������";
		break;
	case 513022:
		return"�Ĵ�ʡ�ﴨ����������";
		break;
	case 513023:
		return"�Ĵ�ʡ�ﴨ����������";
		break;
	case 513029:
		return"�Ĵ�ʡ�ﴨ����������";
		break;
	case 513030:
		return"�Ĵ�ʡ�ﴨ��������";
		break;
	case 513100:
		return"�Ĵ�ʡ�Ű�����";
		break;
	case 513101:
		return"�Ĵ�ʡ�Ű������Ű���";
		break;
	case 513122:
		return"�Ĵ�ʡ�Ű�������ɽ��";
		break;
	case 513123:
		return"�Ĵ�ʡ�Ű�����������";
		break;
	case 513124:
		return"�Ĵ�ʡ�Ű�������Դ��";
		break;
	case 513125:
		return"�Ĵ�ʡ�Ű�����ʯ����";
		break;
	case 513126:
		return"�Ĵ�ʡ�Ű�������ȫ��";
		break;
	case 513127:
		return"�Ĵ�ʡ�Ű�����«ɽ��";
		break;
	case 513128:
		return"�Ĵ�ʡ�Ű�����������";
		break;
	case 513200:
		return"�Ĵ�ʡ���Ӳ���Ǽ��������";
		break;
	case 513221:
		return"�Ĵ�ʡ���Ӳ���Ǽ���������봨��";
		break;
	case 513222:
		return"�Ĵ�ʡ���Ӳ���Ǽ������������";
		break;
	case 513223:
		return"�Ĵ�ʡ���Ӳ���Ǽ��������ï��";
		break;
	case 513224:
		return"�Ĵ�ʡ���Ӳ���Ǽ��������������";
		break;
	case 513225:
		return"�Ĵ�ʡ���Ӳ���Ǽ�������ݾ�կ����";
		break;
	case 513226:
		return"�Ĵ�ʡ���Ӳ���Ǽ�������ݽ���";
		break;
	case 513227:
		return"�Ĵ�ʡ���Ӳ���Ǽ��������С����";
		break;
	case 513228:
		return"�Ĵ�ʡ���Ӳ���Ǽ�������ݺ�ˮ��";
		break;
	case 513229:
		return"�Ĵ�ʡ���Ӳ���Ǽ���������������";
		break;
	case 513230:
		return"�Ĵ�ʡ���Ӳ���Ǽ��������������";
		break;
	case 513231:
		return"�Ĵ�ʡ���Ӳ���Ǽ�������ݰ�����";
		break;
	case 513232:
		return"�Ĵ�ʡ���Ӳ���Ǽ����������������";
		break;
	case 513233:
		return"�Ĵ�ʡ���Ӳ���Ǽ�������ݺ�ԭ��";
		break;
	case 513300:
		return"�Ĵ�ʡ���β���������";
		break;
	case 513321:
		return"�Ĵ�ʡ���β��������ݿ�����";
		break;
	case 513322:
		return"�Ĵ�ʡ���β�������������";
		break;
	case 513323:
		return"�Ĵ�ʡ���β��������ݵ�����";
		break;
	case 513324:
		return"�Ĵ�ʡ���β��������ݾ�����";
		break;
	case 513325:
		return"�Ĵ�ʡ���β����������Ž���";
		break;
	case 513326:
		return"�Ĵ�ʡ���β��������ݵ�����";
		break;
	case 513327:
		return"�Ĵ�ʡ���β���������¯����";
		break;
	case 513328:
		return"�Ĵ�ʡ���β��������ݸ�����";
		break;
	case 513329:
		return"�Ĵ�ʡ���β���������������";
		break;
	case 513330:
		return"�Ĵ�ʡ���β��������ݵ¸���";
		break;
	case 513331:
		return"�Ĵ�ʡ���β��������ݰ�����";
		break;
	case 513332:
		return"�Ĵ�ʡ���β���������ʯ����";
		break;
	case 513333:
		return"�Ĵ�ʡ���β���������ɫ����";
		break;
	case 513334:
		return"�Ĵ�ʡ���β���������������";
		break;
	case 513335:
		return"�Ĵ�ʡ���β��������ݰ�����";
		break;
	case 513336:
		return"�Ĵ�ʡ���β��������������";
		break;
	case 513337:
		return"�Ĵ�ʡ���β��������ݵ�����";
		break;
	case 513338:
		return"�Ĵ�ʡ���β��������ݵ�����";
		break;
	case 513400:
		return"�Ĵ�ʡ��ɽ����������";
		break;
	case 513401:
		return"�Ĵ�ʡ��ɽ����������������";
		break;
	case 513422:
		return"�Ĵ�ʡ��ɽ����������ľ�����������";
		break;
	case 513423:
		return"�Ĵ�ʡ��ɽ������������Դ��";
		break;
	case 513424:
		return"�Ĵ�ʡ��ɽ���������ݵ²���";
		break;
	case 513425:
		return"�Ĵ�ʡ��ɽ���������ݻ�����";
		break;
	case 513426:
		return"�Ĵ�ʡ��ɽ���������ݻᶫ��";
		break;
	case 513427:
		return"�Ĵ�ʡ��ɽ����������������";
		break;
	case 513428:
		return"�Ĵ�ʡ��ɽ�����������ո���";
		break;
	case 513429:
		return"�Ĵ�ʡ��ɽ���������ݲ�����";
		break;
	case 513430:
		return"�Ĵ�ʡ��ɽ���������ݽ�����";
		break;
	case 513431:
		return"�Ĵ�ʡ��ɽ�����������Ѿ���";
		break;
	case 513432:
		return"�Ĵ�ʡ��ɽ����������ϲ����";
		break;
	case 513433:
		return"�Ĵ�ʡ��ɽ����������������";
		break;
	case 513434:
		return"�Ĵ�ʡ��ɽ����������Խ����";
		break;
	case 513435:
		return"�Ĵ�ʡ��ɽ���������ݸ�����";
		break;
	case 513436:
		return"�Ĵ�ʡ��ɽ����������������";
		break;
	case 513437:
		return"�Ĵ�ʡ��ɽ�����������ײ���";
		break;
	case 513700:
		return"�Ĵ�ʡ���е���";
		break;
	case 513701:
		return"�Ĵ�ʡ���е���������";
		break;
	case 513721:
		return"�Ĵ�ʡ���е���ͨ����";
		break;
	case 513722:
		return"�Ĵ�ʡ���е����Ͻ���";
		break;
	case 513723:
		return"�Ĵ�ʡ���е���ƽ����";
		break;
	case 513800:
		return"�Ĵ�ʡüɽ����";
		break;
	case 513821:
		return"�Ĵ�ʡüɽ����üɽ��";
		break;
	case 513822:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 513823:
		return"�Ĵ�ʡüɽ������ɽ��";
		break;
	case 513824:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 513825:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 513826:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 513900:
		return"�Ĵ�ʡüɽ������������";
		break;
	case 513901:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 513902:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 513921:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 513922:
		return"�Ĵ�ʡüɽ����������";
		break;
	case 520000:
		return"����ʡ";
		break;
	case 520100:
		return"����ʡ������";
		break;
	case 520101:
		return"����ʡ��������Ͻ��";
		break;
	case 520102:
		return"����ʡ������������";
		break;
	case 520103:
		return"����ʡ������������";
		break;
	case 520111:
		return"����ʡ�����л�Ϫ��";
		break;
	case 520112:
		return"����ʡ�������ڵ���";
		break;
	case 520113:
		return"����ʡ�����а�����";
		break;
	case 520121:
		return"����ʡ�����п�����";
		break;
	case 520122:
		return"����ʡ������Ϣ����";
		break;
	case 520123:
		return"����ʡ������������";
		break;
	case 520181:
		return"����ʡ������������";
		break;
	case 520200:
		return"����ʡ����ˮ��";
		break;
	case 520201:
		return"����ʡ����ˮ����ɽ��";
		break;
	case 520202:
		return"����ʡ����ˮ����������";
		break;
	case 520203:
		return"����ʡ����ˮ����֦����";
		break;
	case 520221:
		return"����ʡ����ˮ��ˮ����";
		break;
	case 520300:
		return"����ʡ������";
		break;
	case 520301:
		return"����ʡ��������Ͻ��";
		break;
	case 520302:
		return"����ʡ�����к컨����";
		break;
	case 520321:
		return"����ʡ������������";
		break;
	case 520322:
		return"����ʡ������ͩ����";
		break;
	case 520323:
		return"����ʡ������������";
		break;
	case 520324:
		return"����ʡ������������";
		break;
	case 520325:
		return"����ʡ�����е�������������������";
		break;
	case 520326:
		return"����ʡ������������������������";
		break;
	case 520327:
		return"����ʡ�����з����";
		break;
	case 520328:
		return"����ʡ��������̶��";
		break;
	case 520329:
		return"����ʡ������������";
		break;
	case 520330:
		return"����ʡ������ϰˮ��";
		break;
	case 520381:
		return"����ʡ�����г�ˮ��";
		break;
	case 520382:
		return"����ʡ�������ʻ���";
		break;
	case 522200:
		return"����ʡͭ�ʵ���";
		break;
	case 522201:
		return"����ʡͭ�ʵ���ͭ����";
		break;
	case 522222:
		return"����ʡͭ�ʵ���������";
		break;
	case 522223:
		return"����ʡͭ�ʵ�����������������";
		break;
	case 522224:
		return"����ʡͭ�ʵ���ʯ����";
		break;
	case 522225:
		return"����ʡͭ�ʵ���˼����";
		break;
	case 522226:
		return"����ʡͭ�ʵ���ӡ������������������";
		break;
	case 522227:
		return"����ʡͭ�ʵ����½���";
		break;
	case 522228:
		return"����ʡͭ�ʵ����غ�������������";
		break;
	case 522229:
		return"����ʡͭ�ʵ�����������������";
		break;
	case 522230:
		return"����ʡͭ�ʵ�����ɽ����";
		break;
	case 522300:
		return"����ʡǭ���ϲ���������������";
		break;
	case 522301:
		return"����ʡǭ���ϲ���������������������";
		break;
	case 522322:
		return"����ʡǭ���ϲ���������������������";
		break;
	case 522323:
		return"����ʡǭ���ϲ����������������հ���";
		break;
	case 522324:
		return"����ʡǭ���ϲ�����������������¡��";
		break;
	case 522325:
		return"����ʡǭ���ϲ��������������������";
		break;
	case 522326:
		return"����ʡǭ���ϲ���������������������";
		break;
	case 522327:
		return"����ʡǭ���ϲ��������������ݲ����";
		break;
	case 522328:
		return"����ʡǭ���ϲ��������������ݰ�����";
		break;
	case 522400:
		return"����ʡ�Ͻڵ���";
		break;
	case 522401:
		return"����ʡ�Ͻڵ����Ͻ���";
		break;
	case 522422:
		return"����ʡ�Ͻڵ�������";
		break;
	case 522423:
		return"����ʡ�Ͻڵ���ǭ����";
		break;
	case 522424:
		return"����ʡ�Ͻڵ�����ɳ��";
		break;
	case 522425:
		return"����ʡ�Ͻڵ���֯����";
		break;
	case 522426:
		return"����ʡ�Ͻڵ�����Ӻ��";
		break;
	case 522427:
		return"����ʡ�Ͻڵ������������������������";
		break;
	case 522428:
		return"����ʡ�Ͻڵ���������";
		break;
	case 522500:
		return"����ʡ��˳����";
		break;
	case 522501:
		return"����ʡ��˳������˳��";
		break;
	case 522526:
		return"����ʡ��˳����ƽ����";
		break;
	case 522527:
		return"����ʡ��˳�����ն���";
		break;
	case 522528:
		return"����ʡ��˳�������벼��������������";
		break;
	case 522529:
		return"����ʡ��˳������������������������";
		break;
	case 522530:
		return"����ʡ��˳�����������岼����������";
		break;
	case 522600:
		return"����ʡǭ�������嶱��������";
		break;
	case 522601:
		return"����ʡǭ�������嶱�������ݿ�����";
		break;
	case 522622:
		return"����ʡǭ�������嶱�������ݻ�ƽ��";
		break;
	case 522623:
		return"����ʡǭ�������嶱��������ʩ����";
		break;
	case 522624:
		return"����ʡǭ�������嶱��������������";
		break;
	case 522625:
		return"����ʡǭ�������嶱����������Զ��";
		break;
	case 522626:
		return"����ʡǭ�������嶱��������᯹���";
		break;
	case 522627:
		return"����ʡǭ�������嶱��������������";
		break;
	case 522628:
		return"����ʡǭ�������嶱�������ݽ�����";
		break;
	case 522629:
		return"����ʡǭ�������嶱�������ݽ�����";
		break;
	case 522630:
		return"����ʡǭ�������嶱��������̨����";
		break;
	case 522631:
		return"����ʡǭ�������嶱����������ƽ��";
		break;
	case 522632:
		return"����ʡǭ�������嶱���������Ž���";
		break;
	case 522633:
		return"����ʡǭ�������嶱�������ݴӽ���";
		break;
	case 522634:
		return"����ʡǭ�������嶱����������ɽ��";
		break;
	case 522635:
		return"����ʡǭ�������嶱���������齭��";
		break;
	case 522636:
		return"����ʡǭ�������嶱�������ݵ�կ��";
		break;
	case 522700:
		return"����ʡǭ�ϲ���������������";
		break;
	case 522701:
		return"����ʡǭ�ϲ��������������ݶ�����";
		break;
	case 522702:
		return"����ʡǭ�ϲ��������������ݸ�Ȫ��";
		break;
	case 522722:
		return"����ʡǭ�ϲ�������������������";
		break;
	case 522723:
		return"����ʡǭ�ϲ��������������ݹ���";
		break;
	case 522725:
		return"����ʡǭ�ϲ����������������Ͱ���";
		break;
	case 522726:
		return"����ʡǭ�ϲ��������������ݶ�ɽ��";
		break;
	case 522727:
		return"����ʡǭ�ϲ���������������ƽ����";
		break;
	case 522728:
		return"����ʡǭ�ϲ����������������޵���";
		break;
	case 522729:
		return"����ʡǭ�ϲ��������������ݳ�˳��";
		break;
	case 522730:
		return"����ʡǭ�ϲ���������������������";
		break;
	case 522731:
		return"����ʡǭ�ϲ��������������ݻ�ˮ��";
		break;
	case 522732:
		return"����ʡǭ�ϲ�������������������ˮ��������";
		break;
	case 530000:
		return"����ʡ";
		break;
	case 530100:
		return"����ʡ������";
		break;
	case 530101:
		return"����ʡ��������Ͻ��";
		break;
	case 530102:
		return"����ʡ�������廪��";
		break;
	case 530103:
		return"����ʡ������������";
		break;
	case 530111:
		return"����ʡ�����йٶ���";
		break;
	case 530112:
		return"����ʡ��������ɽ��";
		break;
	case 530113:
		return"����ʡ�����ж�����";
		break;
	case 530121:
		return"����ʡ�����гʹ���";
		break;
	case 530122:
		return"����ʡ�����н�����";
		break;
	case 530124:
		return"����ʡ�����и�����";
		break;
	case 530125:
		return"����ʡ������������";
		break;
	case 530126:
		return"����ʡ������ʯ������������";
		break;
	case 530127:
		return"����ʡ������������";
		break;
	case 530128:
		return"����ʡ������»Ȱ��������������";
		break;
	case 530129:
		return"����ʡ������Ѱ���������������";
		break;
	case 530181:
		return"����ʡ�����а�����";
		break;
	case 530300:
		return"����ʡ������";
		break;
	case 530301:
		return"����ʡ��������Ͻ��";
		break;
	case 530302:
		return"����ʡ������������";
		break;
	case 530321:
		return"����ʡ������������";
		break;
	case 530322:
		return"����ʡ������½����";
		break;
	case 530323:
		return"����ʡ������ʦ����";
		break;
	case 530324:
		return"����ʡ��������ƽ��";
		break;
	case 530325:
		return"����ʡ�����и�Դ��";
		break;
	case 530326:
		return"����ʡ�����л�����";
		break;
	case 530328:
		return"����ʡ������մ����";
		break;
	case 530381:
		return"����ʡ������������";
		break;
	case 530400:
		return"����ʡ��Ϫ��";
		break;
	case 530401:
		return"����ʡ��Ϫ����Ͻ��";
		break;
	case 530402:
		return"����ʡ��Ϫ�к�����";
		break;
	case 530421:
		return"����ʡ��Ϫ�н�����";
		break;
	case 530422:
		return"����ʡ��Ϫ�гν���";
		break;
	case 530423:
		return"����ʡ��Ϫ��ͨ����";
		break;
	case 530424:
		return"����ʡ��Ϫ�л�����";
		break;
	case 530425:
		return"����ʡ��Ϫ��������";
		break;
	case 530426:
		return"����ʡ��Ϫ�ж�ɽ����������";
		break;
	case 530427:
		return"����ʡ��Ϫ����ƽ�������������";
		break;
	case 530428:
		return"����ʡ��Ϫ��Ԫ���������������������";
		break;
	case 532100:
		return"����ʡ��ͨ����";
		break;
	case 532101:
		return"����ʡ��ͨ������ͨ��";
		break;
	case 532122:
		return"����ʡ��ͨ����³����";
		break;
	case 532123:
		return"����ʡ��ͨ�����ɼ���";
		break;
	case 532124:
		return"����ʡ��ͨ�����ν���";
		break;
	case 532125:
		return"����ʡ��ͨ���������";
		break;
	case 532126:
		return"����ʡ��ͨ����������";
		break;
	case 532127:
		return"����ʡ��ͨ�����罭��";
		break;
	case 532128:
		return"����ʡ��ͨ����������";
		break;
	case 532129:
		return"����ʡ��ͨ����������";
		break;
	case 532130:
		return"����ʡ��ͨ����������";
		break;
	case 532131:
		return"����ʡ��ͨ����ˮ����";
		break;
	case 532300:
		return"����ʡ��������������";
		break;
	case 532301:
		return"����ʡ�������������ݳ�����";
		break;
	case 532322:
		return"����ʡ��������������˫����";
		break;
	case 532323:
		return"����ʡ��������������Ĳ����";
		break;
	case 532324:
		return"����ʡ���������������ϻ���";
		break;
	case 532325:
		return"����ʡ��������������Ҧ����";
		break;
	case 532326:
		return"����ʡ�������������ݴ�Ҧ��";
		break;
	case 532327:
		return"����ʡ��������������������";
		break;
	case 532328:
		return"����ʡ��������������Ԫı��";
		break;
	case 532329:
		return"����ʡ���������������䶨��";
		break;
	case 532331:
		return"����ʡ��������������»����";
		break;
	case 532500:
		return"����ʡ��ӹ���������������";
		break;
	case 532501:
		return"����ʡ��ӹ��������������ݸ�����";
		break;
	case 532502:
		return"����ʡ��ӹ��������������ݿ�Զ��";
		break;
	case 532522:
		return"����ʡ��ӹ���������������������";
		break;
	case 532523:
		return"����ʡ��ӹ�����������������������������";
		break;
	case 532524:
		return"����ʡ��ӹ��������������ݽ�ˮ��";
		break;
	case 532525:
		return"����ʡ��ӹ���������������ʯ����";
		break;
	case 532526:
		return"����ʡ��ӹ���������������������";
		break;
	case 532527:
		return"����ʡ��ӹ���������������������";
		break;
	case 532528:
		return"����ʡ��ӹ���������������Ԫ����";
		break;
	case 532529:
		return"����ʡ��ӹ��������������ݺ����";
		break;
	case 532530:
		return"����ʡ��ӹ��������������ݽ�ƽ�����������������";
		break;
	case 532531:
		return"����ʡ��ӹ����������������̴���";
		break;
	case 532532:
		return"����ʡ��ӹ��������������ݺӿ�����������";
		break;
	case 532600:
		return"����ʡ��ɽ׳������������";
		break;
	case 532621:
		return"����ʡ��ɽ׳��������������ɽ��";
		break;
	case 532622:
		return"����ʡ��ɽ׳��������������ɽ��";
		break;
	case 532623:
		return"����ʡ��ɽ׳������������������";
		break;
	case 532624:
		return"����ʡ��ɽ׳��������������������";
		break;
	case 532625:
		return"����ʡ��ɽ׳�����������������";
		break;
	case 532626:
		return"����ʡ��ɽ׳����������������";
		break;
	case 532627:
		return"����ʡ��ɽ׳�����������ݹ�����";
		break;
	case 532628:
		return"����ʡ��ɽ׳�����������ݸ�����";
		break;
	case 532700:
		return"����ʡ˼é����";
		break;
	case 532701:
		return"����ʡ˼é����˼é��";
		break;
	case 532722:
		return"����ʡ˼é�����ն�����������������";
		break;
	case 532723:
		return"����ʡ˼é����ī��������������";
		break;
	case 532724:
		return"����ʡ˼é������������������";
		break;
	case 532725:
		return"����ʡ˼é�������ȴ�������������";
		break;
	case 532726:
		return"����ʡ˼é�����������������������������";
		break;
	case 532727:
		return"����ʡ˼é�������ǹ���������������";
		break;
	case 532728:
		return"����ʡ˼é����������������������������";
		break;
	case 532729:
		return"����ʡ˼é��������������������";
		break;
	case 532730:
		return"����ʡ˼é������������������";
		break;
	case 532800:
		return"����ʡ��˫���ɴ���������";
		break;
	case 532801:
		return"����ʡ��˫���ɴ��������ݾ�����";
		break;
	case 532822:
		return"����ʡ��˫���ɴ����������º���";
		break;
	case 532823:
		return"����ʡ��˫���ɴ���������������";
		break;
	case 532900:
		return"����ʡ�������������";
		break;
	case 532901:
		return"����ʡ������������ݴ�����";
		break;
	case 532922:
		return"����ʡ��������������������������";
		break;
	case 532923:
		return"����ʡ�������������������";
		break;
	case 532924:
		return"����ʡ������������ݱ�����";
		break;
	case 532925:
		return"����ʡ��������������ֶ���";
		break;
	case 532926:
		return"����ʡ��������������Ͻ�����������";
		break;
	case 532927:
		return"����ʡ�������������Ρɽ�������������";
		break;
	case 532928:
		return"����ʡ���������������ƽ��";
		break;
	case 532929:
		return"����ʡ�������������������";
		break;
	case 532930:
		return"����ʡ������������ݶ�Դ��";
		break;
	case 532931:
		return"����ʡ������������ݽ�����";
		break;
	case 532932:
		return"����ʡ������������ݺ�����";
		break;
	case 533000:
		return"����ʡ��ɽ����";
		break;
	case 533001:
		return"����ʡ��ɽ������ɽ��";
		break;
	case 533022:
		return"����ʡ��ɽ����ʩ����";
		break;
	case 533023:
		return"����ʡ��ɽ�����ڳ���";
		break;
	case 533024:
		return"����ʡ��ɽ����������";
		break;
	case 533025:
		return"����ʡ��ɽ����������";
		break;
	case 533100:
		return"����ʡ�º���徰����������";
		break;
	case 533101:
		return"����ʡ�º���徰��������������";
		break;
	case 533102:
		return"����ʡ�º���徰����������������";
		break;
	case 533103:
		return"����ʡ�º���徰����������º����";
		break;
	case 533122:
		return"����ʡ�º���徰����������������";
		break;
	case 533123:
		return"����ʡ�º���徰����������ӯ����";
		break;
	case 533124:
		return"����ʡ�º���徰����������¤����";
		break;
	case 533200:
		return"����ʡ��������";
		break;
	case 533221:
		return"����ʡ������������������������";
		break;
	case 533222:
		return"����ʡ����������ʤ��";
		break;
	case 533223:
		return"����ʡ����������ƺ��";
		break;
	case 533224:
		return"����ʡ����������������������";
		break;
	case 533300:
		return"����ʡŭ��������������";
		break;
	case 533321:
		return"����ʡŭ����������������ˮ��";
		break;
	case 533323:
		return"����ʡŭ�������������ݸ�����";
		break;
	case 533324:
		return"����ʡŭ�������������ݹ�ɽ������ŭ��������";
		break;
	case 533325:
		return"����ʡŭ����������������ƺ����������������";
		break;
	case 533400:
		return"����ʡ�������������";
		break;
	case 533421:
		return"����ʡ��������������е���";
		break;
	case 533422:
		return"����ʡ������������ݵ�����";
		break;
	case 533423:
		return"����ʡ�������������ά��������������";
		break;
	case 533500:
		return"����ʡ�ٲ׵���";
		break;
	case 533521:
		return"����ʡ�ٲ׵����ٲ���";
		break;
	case 533522:
		return"����ʡ�ٲ׵���������";
		break;
	case 533523:
		return"����ʡ�ٲ׵�������";
		break;
	case 533524:
		return"����ʡ�ٲ׵���������";
		break;
	case 533525:
		return"����ʡ�ٲ׵�������";
		break;
	case 533526:
		return"����ʡ�ٲ׵���˫�����������岼�������������";
		break;
	case 533527:
		return"����ʡ�ٲ׵��������������������";
		break;
	case 533528:
		return"����ʡ�ٲ׵�����Դ����������";
		break;
	case 540000:
		return"����������";
		break;
	case 540100:
		return"����������������";
		break;
	case 540101:
		return"������������������Ͻ��";
		break;
	case 540102:
		return"���������������гǹ���";
		break;
	case 540121:
		return"����������������������";
		break;
	case 540122:
		return"���������������е�����";
		break;
	case 540123:
		return"������������������ľ��";
		break;
	case 540124:
		return"������������������ˮ��";
		break;
	case 540125:
		return"���������������ж���������";
		break;
	case 540126:
		return"���������������д�����";
		break;
	case 540127:
		return"����������������ī�񹤿���";
		break;
	case 542100:
		return"������������������";
		break;
	case 542121:
		return"������������������������";
		break;
	case 542122:
		return"������������������������";
		break;
	case 542123:
		return"������������������������";
		break;
	case 542124:
		return"��������������������������";
		break;
	case 542125:
		return"������������������������";
		break;
	case 542126:
		return"������������������������";
		break;
	case 542127:
		return"������������������������";
		break;
	case 542128:
		return"����������������������";
		break;
	case 542129:
		return"������������������â����";
		break;
	case 542132:
		return"��������������������¡��";
		break;
	case 542133:
		return"�������������������߰���";
		break;
	case 542134:
		return"�������������������ξ���";
		break;
	case 542135:
		return"������������������������";
		break;
	case 542136:
		return"�������������������װ���";
		break;
	case 542137:
		return"������������������������";
		break;
	case 542200:
		return"����������ɽ�ϵ���";
		break;
	case 542221:
		return"����������ɽ�ϵ����˶���";
		break;
	case 542222:
		return"����������ɽ�ϵ���������";
		break;
	case 542223:
		return"����������ɽ�ϵ���������";
		break;
	case 542224:
		return"����������ɽ�ϵ���ɣ����";
		break;
	case 542225:
		return"����������ɽ�ϵ��������";
		break;
	case 542226:
		return"����������ɽ�ϵ���������";
		break;
	case 542227:
		return"����������ɽ�ϵ���������";
		break;
	case 542228:
		return"����������ɽ�ϵ���������";
		break;
	case 542229:
		return"����������ɽ�ϵ����Ӳ���";
		break;
	case 542231:
		return"����������ɽ�ϵ���¡����";
		break;
	case 542232:
		return"����������ɽ�ϵ���������";
		break;
	case 542233:
		return"����������ɽ�ϵ����˿�����";
		break;
	case 542300:
		return"�����������տ������";
		break;
	case 542301:
		return"�����������տ�������տ�����";
		break;
	case 542322:
		return"�����������տ��������ľ����";
		break;
	case 542323:
		return"�����������տ������������";
		break;
	case 542324:
		return"�����������տ������������";
		break;
	case 542325:
		return"�����������տ������������";
		break;
	case 542326:
		return"�����������տ������������";
		break;
	case 542327:
		return"�����������տ������������";
		break;
	case 542328:
		return"�����������տ������лͨ����";
		break;
	case 542329:
		return"�����������տ������������";
		break;
	case 542330:
		return"�����������տ�������ʲ���";
		break;
	case 542331:
		return"�����������տ������������";
		break;
	case 542332:
		return"�����������տ������������";
		break;
	case 542333:
		return"�����������տ�������ٰ���";
		break;
	case 542334:
		return"�����������տ�������Ƕ���";
		break;
	case 542335:
		return"�����������տ��������¡��";
		break;
	case 542336:
		return"�����������տ����������ľ��";
		break;
	case 542337:
		return"�����������տ������������";
		break;
	case 542338:
		return"�����������տ�������ڰ���";
		break;
	case 542400:
		return"������������������";
		break;
	case 542421:
		return"������������������������";
		break;
	case 542422:
		return"������������������������";
		break;
	case 542423:
		return"������������������������";
		break;
	case 542424:
		return"������������������������";
		break;
	case 542425:
		return"������������������������";
		break;
	case 542426:
		return"������������������������";
		break;
	case 542427:
		return"����������������������";
		break;
	case 542428:
		return"�����������������������";
		break;
	case 542429:
		return"������������������������";
		break;
	case 542430:
		return"������������������������";
		break;
	case 542500:
		return"�����������������";
		break;
	case 542521:
		return"�����������������������";
		break;
	case 542522:
		return"�����������������������";
		break;
	case 542523:
		return"�����������������������";
		break;
	case 542524:
		return"�����������������������";
		break;
	case 542525:
		return"������������������Ｊ��";
		break;
	case 542526:
		return"�����������������������";
		break;
	case 542527:
		return"�����������������������";
		break;
	case 542528:
		return"�����������������¡�����";
		break;
	case 542600:
		return"������������֥����";
		break;
	case 542621:
		return"������������֥������֥��";
		break;
	case 542622:
		return"������������֥��������������";
		break;
	case 542623:
		return"������������֥����������";
		break;
	case 542624:
		return"������������֥����ī����";
		break;
	case 542625:
		return"������������֥����������";
		break;
	case 542626:
		return"������������֥����������";
		break;
	case 542627:
		return"������������֥��������";
		break;
	case 610000:
		return"����ʡ";
		break;
	case 610100:
		return"����ʡ������";
		break;
	case 610101:
		return"����ʡ��������Ͻ��";
		break;
	case 610102:
		return"����ʡ�������³���";
		break;
	case 610103:
		return"����ʡ�����б�����";
		break;
	case 610104:
		return"����ʡ������������";
		break;
	case 610111:
		return"����ʡ�����������";
		break;
	case 610112:
		return"����ʡ������δ����";
		break;
	case 610113:
		return"����ʡ������������";
		break;
	case 610114:
		return"����ʡ������������";
		break;
	case 610115:
		return"����ʡ������������";
		break;
	case 610121:
		return"����ʡ�����г�����";
		break;
	case 610122:
		return"����ʡ������������";
		break;
	case 610124:
		return"����ʡ������������";
		break;
	case 610125:
		return"����ʡ�����л���";
		break;
	case 610126:
		return"����ʡ�����и�����";
		break;
	case 610200:
		return"����ʡͭ����";
		break;
	case 610201:
		return"����ʡͭ������Ͻ��";
		break;
	case 610202:
		return"����ʡͭ���г���";
		break;
	case 610203:
		return"����ʡͭ���н���";
		break;
	case 610221:
		return"����ʡͭ����ҫ��";
		break;
	case 610222:
		return"����ʡͭ�����˾���";
		break;
	case 610300:
		return"����ʡ������";
		break;
	case 610301:
		return"����ʡ��������Ͻ��";
		break;
	case 610302:
		return"����ʡ������μ����";
		break;
	case 610303:
		return"����ʡ�����н�̨��";
		break;
	case 610321:
		return"����ʡ�����б�����";
		break;
	case 610322:
		return"����ʡ�����з�����";
		break;
	case 610323:
		return"����ʡ�������ɽ��";
		break;
	case 610324:
		return"����ʡ�����з�����";
		break;
	case 610326:
		return"����ʡ������ü��";
		break;
	case 610327:
		return"����ʡ������¤��";
		break;
	case 610328:
		return"����ʡ������ǧ����";
		break;
	case 610329:
		return"����ʡ������������";
		break;
	case 610330:
		return"����ʡ�����з���";
		break;
	case 610331:
		return"����ʡ������̫����";
		break;
	case 610400:
		return"����ʡ������";
		break;
	case 610401:
		return"����ʡ��������Ͻ��";
		break;
	case 610402:
		return"����ʡ�������ض���";
		break;
	case 610403:
		return"����ʡ������������";
		break;
	case 610404:
		return"����ʡ������μ����";
		break;
	case 610422:
		return"����ʡ��������ԭ��";
		break;
	case 610423:
		return"����ʡ������������";
		break;
	case 610424:
		return"����ʡ������Ǭ��";
		break;
	case 610425:
		return"����ʡ��������Ȫ��";
		break;
	case 610426:
		return"����ʡ������������";
		break;
	case 610427:
		return"����ʡ�����б���";
		break;
	case 610428:
		return"����ʡ�����г�����";
		break;
	case 610429:
		return"����ʡ������Ѯ����";
		break;
	case 610430:
		return"����ʡ�����д�����";
		break;
	case 610431:
		return"����ʡ�������书��";
		break;
	case 610481:
		return"����ʡ��������ƽ��";
		break;
	case 610500:
		return"����ʡμ����";
		break;
	case 610501:
		return"����ʡμ������Ͻ��";
		break;
	case 610502:
		return"����ʡμ������μ��";
		break;
	case 610521:
		return"����ʡμ���л���";
		break;
	case 610522:
		return"����ʡμ����������";
		break;
	case 610523:
		return"����ʡμ���д�����";
		break;
	case 610524:
		return"����ʡμ���к�����";
		break;
	case 610525:
		return"����ʡμ���гγ���";
		break;
	case 610526:
		return"����ʡμ�����ѳ���";
		break;
	case 610527:
		return"����ʡμ���а�ˮ��";
		break;
	case 610528:
		return"����ʡμ���и�ƽ��";
		break;
	case 610581:
		return"����ʡμ���к�����";
		break;
	case 610582:
		return"����ʡμ���л�����";
		break;
	case 610600:
		return"����ʡ�Ӱ���";
		break;
	case 610601:
		return"����ʡ�Ӱ�����Ͻ��";
		break;
	case 610602:
		return"����ʡ�Ӱ��б�����";
		break;
	case 610621:
		return"����ʡ�Ӱ����ӳ���";
		break;
	case 610622:
		return"����ʡ�Ӱ����Ӵ���";
		break;
	case 610623:
		return"����ʡ�Ӱ����ӳ���";
		break;
	case 610624:
		return"����ʡ�Ӱ��а�����";
		break;
	case 610625:
		return"����ʡ�Ӱ���־����";
		break;
	case 610626:
		return"����ʡ�Ӱ���������";
		break;
	case 610627:
		return"����ʡ�Ӱ��и�Ȫ��";
		break;
	case 610628:
		return"����ʡ�Ӱ��и���";
		break;
	case 610629:
		return"����ʡ�Ӱ����崨��";
		break;
	case 610630:
		return"����ʡ�Ӱ����˴���";
		break;
	case 610631:
		return"����ʡ�Ӱ��л�����";
		break;
	case 610632:
		return"����ʡ�Ӱ��л�����";
		break;
	case 610700:
		return"����ʡ������";
		break;
	case 610701:
		return"����ʡ��������Ͻ��";
		break;
	case 610702:
		return"����ʡ�����к�̨��";
		break;
	case 610721:
		return"����ʡ��������֣��";
		break;
	case 610722:
		return"����ʡ�����гǹ���";
		break;
	case 610723:
		return"����ʡ����������";
		break;
	case 610724:
		return"����ʡ������������";
		break;
	case 610725:
		return"����ʡ����������";
		break;
	case 610726:
		return"����ʡ��������ǿ��";
		break;
	case 610727:
		return"����ʡ������������";
		break;
	case 610728:
		return"����ʡ�����������";
		break;
	case 610729:
		return"����ʡ������������";
		break;
	case 610730:
		return"����ʡ�����з�ƺ��";
		break;
	case 612400:
		return"����ʡ��������";
		break;
	case 612401:
		return"����ʡ��������������";
		break;
	case 612422:
		return"����ʡ��������������";
		break;
	case 612423:
		return"����ʡ��������ʯȪ��";
		break;
	case 612424:
		return"����ʡ��������������";
		break;
	case 612425:
		return"����ʡ��������������";
		break;
	case 612426:
		return"����ʡ��������᰸���";
		break;
	case 612427:
		return"����ʡ��������ƽ����";
		break;
	case 612428:
		return"����ʡ����������ƺ��";
		break;
	case 612429:
		return"����ʡ��������Ѯ����";
		break;
	case 612430:
		return"����ʡ���������׺���";
		break;
	case 612500:
		return"����ʡ�������";
		break;
	case 612501:
		return"����ʡ�������������";
		break;
	case 612522:
		return"����ʡ�������������";
		break;
	case 612523:
		return"����ʡ�������������";
		break;
	case 612524:
		return"����ʡ�������������";
		break;
	case 612525:
		return"����ʡ�������ɽ����";
		break;
	case 612526:
		return"����ʡ�����������";
		break;
	case 612527:
		return"����ʡ���������ˮ��";
		break;
	case 612700:
		return"����ʡ���ֵ���";
		break;
	case 612701:
		return"����ʡ���ֵ���������";
		break;
	case 612722:
		return"����ʡ���ֵ�����ľ��";
		break;
	case 612723:
		return"����ʡ���ֵ���������";
		break;
	case 612724:
		return"����ʡ���ֵ�����ɽ��";
		break;
	case 612725:
		return"����ʡ���ֵ���������";
		break;
	case 612726:
		return"����ʡ���ֵ���������";
		break;
	case 612727:
		return"����ʡ���ֵ��������";
		break;
	case 612728:
		return"����ʡ���ֵ�����֬��";
		break;
	case 612729:
		return"����ʡ���ֵ�������";
		break;
	case 612730:
		return"����ʡ���ֵ����Ɽ��";
		break;
	case 612731:
		return"����ʡ���ֵ����彧��";
		break;
	case 612732:
		return"����ʡ���ֵ���������";
		break;
	case 620000:
		return"����ʡ";
		break;
	case 620100:
		return"����ʡ������";
		break;
	case 620101:
		return"����ʡ��������Ͻ��";
		break;
	case 620102:
		return"����ʡ�����гǹ���";
		break;
	case 620103:
		return"����ʡ�������������";
		break;
	case 620104:
		return"����ʡ������������";
		break;
	case 620105:
		return"����ʡ�����а�����";
		break;
	case 620111:
		return"����ʡ�����к����";
		break;
	case 620121:
		return"����ʡ������������";
		break;
	case 620122:
		return"����ʡ�����и�����";
		break;
	case 620123:
		return"����ʡ������������";
		break;
	case 620200:
		return"����ʡ��������";
		break;
	case 620201:
		return"����ʡ����������Ͻ��";
		break;
	case 620300:
		return"����ʡ�������н����";
		break;
	case 620301:
		return"����ʡ����������Ͻ��";
		break;
	case 620302:
		return"����ʡ�������н���";
		break;
	case 620321:
		return"����ʡ��������������";
		break;
	case 620400:
		return"����ʡ������";
		break;
	case 620401:
		return"����ʡ��������Ͻ��";
		break;
	case 620402:
		return"����ʡ�����а�����";
		break;
	case 620403:
		return"����ʡ������ƽ����";
		break;
	case 620421:
		return"����ʡ�����о�Զ��";
		break;
	case 620422:
		return"����ʡ�����л�����";
		break;
	case 620423:
		return"����ʡ�����о�̩��";
		break;
	case 620500:
		return"����ʡ��ˮ��";
		break;
	case 620501:
		return"����ʡ��ˮ����Ͻ��";
		break;
	case 620502:
		return"����ʡ��ˮ���س���";
		break;
	case 620503:
		return"����ʡ��ˮ�б�����";
		break;
	case 620521:
		return"����ʡ��ˮ����ˮ��";
		break;
	case 620522:
		return"����ʡ��ˮ���ذ���";
		break;
	case 620523:
		return"����ʡ��ˮ�иʹ���";
		break;
	case 620524:
		return"����ʡ��ˮ����ɽ��";
		break;
	case 620525:
		return"����ʡ��ˮ���żҴ�����������";
		break;
	case 622100:
		return"����ʡ��Ȫ����";
		break;
	case 622101:
		return"����ʡ��Ȫ����������";
		break;
	case 622102:
		return"����ʡ��Ȫ������Ȫ��";
		break;
	case 622103:
		return"����ʡ��Ȫ�����ػ���";
		break;
	case 622123:
		return"����ʡ��Ȫ����������";
		break;
	case 622124:
		return"����ʡ��Ȫ�����౱�ɹ���������";
		break;
	case 622125:
		return"����ʡ��Ȫ������������������������";
		break;
	case 622126:
		return"����ʡ��Ȫ����������";
		break;
	case 622200:
		return"����ʡ��Ҵ����";
		break;
	case 622201:
		return"����ʡ��Ҵ������Ҵ��";
		break;
	case 622222:
		return"����ʡ��Ҵ��������ԣ����������";
		break;
	case 622223:
		return"����ʡ��Ҵ����������";
		break;
	case 622224:
		return"����ʡ��Ҵ����������";
		break;
	case 622225:
		return"����ʡ��Ҵ������̨��";
		break;
	case 622226:
		return"����ʡ��Ҵ����ɽ����";
		break;
	case 622300:
		return"����ʡ��������";
		break;
	case 622301:
		return"����ʡ��������������";
		break;
	case 622322:
		return"����ʡ��������������";
		break;
	case 622323:
		return"����ʡ��������������";
		break;
	case 622326:
		return"����ʡ����������ף����������";
		break;
	case 622400:
		return"����ʡ��������";
		break;
	case 622421:
		return"����ʡ��������������";
		break;
	case 622424:
		return"����ʡ��������ͨμ��";
		break;
	case 622425:
		return"����ʡ��������¤����";
		break;
	case 622426:
		return"����ʡ��������μԴ��";
		break;
	case 622427:
		return"����ʡ�������������";
		break;
	case 622428:
		return"����ʡ������������";
		break;
	case 622429:
		return"����ʡ�����������";
		break;
	case 622600:
		return"����ʡ¤�ϵ���";
		break;
	case 622621:
		return"����ʡ¤�ϵ����䶼��";
		break;
	case 622623:
		return"����ʡ¤�ϵ���崲���";
		break;
	case 622624:
		return"����ʡ¤�ϵ�������";
		break;
	case 622625:
		return"����ʡ¤�ϵ�������";
		break;
	case 622626:
		return"����ʡ¤�ϵ�������";
		break;
	case 622627:
		return"����ʡ¤�ϵ���������";
		break;
	case 622628:
		return"����ʡ¤�ϵ�������";
		break;
	case 622629:
		return"����ʡ¤�ϵ���������";
		break;
	case 622630:
		return"����ʡ¤�ϵ�������";
		break;
	case 622700:
		return"����ʡƽ������";
		break;
	case 622701:
		return"����ʡƽ������ƽ����";
		break;
	case 622722:
		return"����ʡƽ������������";
		break;
	case 622723:
		return"����ʡƽ��������̨��";
		break;
	case 622724:
		return"����ʡƽ������������";
		break;
	case 622725:
		return"����ʡƽ��������ͤ��";
		break;
	case 622726:
		return"����ʡƽ������ׯ����";
		break;
	case 622727:
		return"����ʡƽ������������";
		break;
	case 622800:
		return"����ʡ��������";
		break;
	case 622801:
		return"����ʡ��������������";
		break;
	case 622821:
		return"����ʡ��������������";
		break;
	case 622822:
		return"����ʡ������������";
		break;
	case 622823:
		return"����ʡ��������������";
		break;
	case 622824:
		return"����ʡ����������ˮ��";
		break;
	case 622825:
		return"����ʡ��������������";
		break;
	case 622826:
		return"����ʡ������������";
		break;
	case 622827:
		return"����ʡ����������ԭ��";
		break;
	case 622900:
		return"����ʡ���Ļ���������";
		break;
	case 622901:
		return"����ʡ���Ļ���������������";
		break;
	case 622921:
		return"����ʡ���Ļ���������������";
		break;
	case 622922:
		return"����ʡ���Ļ��������ݿ�����";
		break;
	case 622923:
		return"����ʡ���Ļ���������������";
		break;
	case 622924:
		return"����ʡ���Ļ��������ݹ����";
		break;
	case 622925:
		return"����ʡ���Ļ��������ݺ�����";
		break;
	case 622926:
		return"����ʡ���Ļ��������ݶ�����������";
		break;
	case 622927:
		return"����ʡ���Ļ��������ݻ�ʯɽ�����嶫����������������";
		break;
	case 623000:
		return"����ʡ���ϲ���������";
		break;
	case 623001:
		return"����ʡ���ϲ��������ݺ�����";
		break;
	case 623021:
		return"����ʡ���ϲ�����������̶��";
		break;
	case 623022:
		return"����ʡ���ϲ���������׿����";
		break;
	case 623023:
		return"����ʡ���ϲ���������������";
		break;
	case 623024:
		return"����ʡ���ϲ��������ݵ�����";
		break;
	case 623025:
		return"����ʡ���ϲ���������������";
		break;
	case 623026:
		return"����ʡ���ϲ���������µ����";
		break;
	case 623027:
		return"����ʡ���ϲ����������ĺ���";
		break;
	case 630000:
		return"�ຣʡ";
		break;
	case 630100:
		return"�ຣʡ������";
		break;
	case 630101:
		return"�ຣʡ��������Ͻ��";
		break;
	case 630102:
		return"�ຣʡ�����гǶ���";
		break;
	case 630103:
		return"�ຣʡ�����г�����";
		break;
	case 630104:
		return"�ຣʡ�����г�����";
		break;
	case 630105:
		return"�ຣʡ�����гǱ���";
		break;
	case 630121:
		return"�ຣʡ�����д�ͨ��������������";
		break;
	case 632100:
		return"�ຣʡ��������";
		break;
	case 632121:
		return"�ຣʡ��������ƽ����";
		break;
	case 632122:
		return"�ຣʡ����������ͻ�������������";
		break;
	case 632123:
		return"�ຣʡ���������ֶ���";
		break;
	case 632124:
		return"�ຣʡ��������������";
		break;
	case 632125:
		return"�ຣʡ����������Դ��";
		break;
	case 632126:
		return"�ຣʡ����������������������";
		break;
	case 632127:
		return"�ຣʡ����������¡����������";
		break;
	case 632128:
		return"�ຣʡ��������ѭ��������������";
		break;
	case 632200:
		return"�ຣʡ��������������";
		break;
	case 632221:
		return"�ຣʡ����������������Դ����������";
		break;
	case 632222:
		return"�ຣʡ��������������������";
		break;
	case 632223:
		return"�ຣʡ�������������ݺ�����";
		break;
	case 632224:
		return"�ຣʡ�������������ݸղ���";
		break;
	case 632300:
		return"�ຣʡ���ϲ���������";
		break;
	case 632321:
		return"�ຣʡ���ϲ���������ͬ����";
		break;
	case 632322:
		return"�ຣʡ���ϲ��������ݼ�����";
		break;
	case 632323:
		return"�ຣʡ���ϲ��������������";
		break;
	case 632324:
		return"�ຣʡ���ϲ��������ݺ����ɹ���������";
		break;
	case 632500:
		return"�ຣʡ���ϲ���������";
		break;
	case 632521:
		return"�ຣʡ���ϲ��������ݹ�����";
		break;
	case 632522:
		return"�ຣʡ���ϲ���������ͬ����";
		break;
	case 632523:
		return"�ຣʡ���ϲ��������ݹ����";
		break;
	case 632524:
		return"�ຣʡ���ϲ����������˺���";
		break;
	case 632525:
		return"�ຣʡ���ϲ��������ݹ�����";
		break;
	case 632600:
		return"�ຣʡ�������������";
		break;
	case 632621:
		return"�ຣʡ�������������������";
		break;
	case 632622:
		return"�ຣʡ������������ݰ�����";
		break;
	case 632623:
		return"�ຣʡ������������ݸʵ���";
		break;
	case 632624:
		return"�ຣʡ������������ݴ�����";
		break;
	case 632625:
		return"�ຣʡ������������ݾ�����";
		break;
	case 632626:
		return"�ຣʡ������������������";
		break;
	case 632700:
		return"�ຣʡ��������������";
		break;
	case 632721:
		return"�ຣʡ��������������������";
		break;
	case 632722:
		return"�ຣʡ���������������Ӷ���";
		break;
	case 632723:
		return"�ຣʡ�������������ݳƶ���";
		break;
	case 632724:
		return"�ຣʡ���������������ζ���";
		break;
	case 632725:
		return"�ຣʡ����������������ǫ��";
		break;
	case 632726:
		return"�ຣʡ����������������������";
		break;
	case 632800:
		return"�ຣʡ�����ɹ������������";
		break;
	case 632801:
		return"�ຣʡ�����ɹ�����������ݸ��ľ��";
		break;
	case 632802:
		return"�ຣʡ�����ɹ�����������ݵ������";
		break;
	case 632821:
		return"�ຣʡ�����ɹ������������������";
		break;
	case 632822:
		return"�ຣʡ�����ɹ�����������ݶ�����";
		break;
	case 632823:
		return"�ຣʡ�����ɹ�����������������";
		break;
	case 640000:
		return"���Ļ���������";
		break;
	case 640100:
		return"���Ļ���������������";
		break;
	case 640101:
		return"���Ļ�����������������Ͻ��";
		break;
	case 640102:
		return"���Ļ��������������г���";
		break;
	case 640103:
		return"���Ļ����������������³���";
		break;
	case 640111:
		return"���Ļ��������������н���";
		break;
	case 640121:
		return"���Ļ���������������������";
		break;
	case 640122:
		return"���Ļ��������������к�����";
		break;
	case 640200:
		return"���Ļ���������ʯ��ɽ��";
		break;
	case 640201:
		return"���Ļ���������ʯ��ɽ����Ͻ��";
		break;
	case 640202:
		return"���Ļ���������ʯ��ɽ�д������";
		break;
	case 640203:
		return"���Ļ���������ʯ��ɽ��ʯ��ɽ��";
		break;
	case 640204:
		return"���Ļ���������ʯ��ɽ��ʯ̿����";
		break;
	case 640221:
		return"���Ļ���������ʯ��ɽ��ƽ����";
		break;
	case 640222:
		return"���Ļ���������ʯ��ɽ��������";
		break;
	case 640223:
		return"���Ļ���������ʯ��ɽ�л�ũ��";
		break;
	case 640300:
		return"���Ļ���������������";
		break;
	case 640301:
		return"���Ļ�����������������Ͻ��";
		break;
	case 640302:
		return"���Ļ�����������������ͨ��";
		break;
	case 640321:
		return"���Ļ���������������������";
		break;
	case 640322:
		return"���Ļ���������������������";
		break;
	case 640323:
		return"���Ļ����������������γ���";
		break;
	case 640324:
		return"���Ļ���������������ͬ����";
		break;
	case 640381:
		return"���Ļ�����������������ͭϿ��";
		break;
	case 640382:
		return"���Ļ���������������������";
		break;
	case 642200:
		return"���Ļ�����������ԭ����";
		break;
	case 642221:
		return"���Ļ�����������ԭ������ԭ��";
		break;
	case 642222:
		return"���Ļ�����������ԭ������ԭ��";
		break;
	case 642223:
		return"���Ļ�����������ԭ����������";
		break;
	case 642224:
		return"���Ļ�����������ԭ����¡����";
		break;
	case 642225:
		return"���Ļ�����������ԭ������Դ��";
		break;
	case 642226:
		return"���Ļ�����������ԭ����������";
		break;
	case 650000:
		return"�½�ά���������";
		break;
	case 650100:
		return"�½�ά�������������³ľ����";
		break;
	case 650101:
		return"�½�ά�������������³ľ������Ͻ��";
		break;
	case 650102:
		return"�½�ά�������������³ľ������ɽ��";
		break;
	case 650103:
		return"�½�ά�������������³ľ����ɳ���Ϳ���";
		break;
	case 650104:
		return"�½�ά�������������³ľ����������";
		break;
	case 650105:
		return"�½�ά�������������³ľ����ˮĥ����";
		break;
	case 650106:
		return"�½�ά�������������³ľ����ͷ�ͺ���";
		break;
	case 650107:
		return"�½�ά�������������³ľ������ɽ����";
		break;
	case 650108:
		return"�½�ά�������������³ľ���ж�ɽ��";
		break;
	case 650121:
		return"�½�ά�������������³ľ������³ľ����";
		break;
	case 650200:
		return"�½�ά���������������������";
		break;
	case 650201:
		return"�½�ά�����������������������Ͻ��";
		break;
	case 650202:
		return"�½�ά��������������������ж�ɽ����";
		break;
	case 650203:
		return"�½�ά��������������������п���������";
		break;
	case 650204:
		return"�½�ά��������������������а׼�̲��";
		break;
	case 650205:
		return"�½�ά����������������������ڶ�����";
		break;
	case 652100:
		return"�½�ά�������������³������";
		break;
	case 652101:
		return"�½�ά�������������³��������³����";
		break;
	case 652122:
		return"�½�ά�������������³������۷����";
		break;
	case 652123:
		return"�½�ά�������������³�������п�ѷ��";
		break;
	case 652200:
		return"�½�ά��������������ܵ���";
		break;
	case 652201:
		return"�½�ά��������������ܵ���������";
		break;
	case 652222:
		return"�½�ά��������������ܵ���������������������";
		break;
	case 652223:
		return"�½�ά��������������ܵ���������";
		break;
	case 652300:
		return"�½�ά�������������������������";
		break;
	case 652301:
		return"�½�ά������������������������ݲ�����";
		break;
	case 652302:
		return"�½�ά������������������������ݸ�����";
		break;
	case 652303:
		return"�½�ά���������������������������Ȫ��";
		break;
	case 652323:
		return"�½�ά������������������������ݺ�ͼ����";
		break;
	case 652324:
		return"�½�ά�����������������������������˹��";
		break;
	case 652325:
		return"�½�ά���������������������������̨��";
		break;
	case 652327:
		return"�½�ά������������������������ݼ�ľ������";
		break;
	case 652328:
		return"�½�ά�������������������������ľ�ݹ�����������";
		break;
	case 652700:
		return"�½�ά��������������������ɹ�������";
		break;
	case 652701:
		return"�½�ά��������������������ɹ������ݲ�����";
		break;
	case 652722:
		return"�½�ά��������������������ɹ������ݾ�����";
		break;
	case 652723:
		return"�½�ά��������������������ɹ���������Ȫ��";
		break;
	case 652800:
		return"�½�ά��������������������ɹ�������";
		break;
	case 652801:
		return"�½�ά��������������������ɹ������ݿ������";
		break;
	case 652822:
		return"�½�ά��������������������ɹ���������̨��";
		break;
	case 652823:
		return"�½�ά��������������������ɹ�������ξ����";
		break;
	case 652824:
		return"�½�ά��������������������ɹ���������Ǽ��";
		break;
	case 652825:
		return"�½�ά��������������������ɹ���������ĩ��";
		break;
	case 652826:
		return"�½�ά��������������������ɹ����������Ȼ���������";
		break;
	case 652827:
		return"�½�ά��������������������ɹ������ݺ;���";
		break;
	case 652828:
		return"�½�ά��������������������ɹ������ݺ�˶��";
		break;
	case 652829:
		return"�½�ά��������������������ɹ������ݲ�����";
		break;
	case 652900:
		return"�½�ά����������������յ���";
		break;
	case 652901:
		return"�½�ά����������������յ�����������";
		break;
	case 652922:
		return"�½�ά����������������յ���������";
		break;
	case 652923:
		return"�½�ά����������������յ����⳵��";
		break;
	case 652924:
		return"�½�ά����������������յ���ɳ����";
		break;
	case 652925:
		return"�½�ά����������������յ����º���";
		break;
	case 652926:
		return"�½�ά����������������յ����ݳ���";
		break;
	case 652927:
		return"�½�ά����������������յ�����ʲ��";
		break;
	case 652928:
		return"�½�ά����������������յ�����������";
		break;
	case 652929:
		return"�½�ά����������������յ�����ƺ��";
		break;
	case 653000:
		return"�½�ά������������������տ¶�����������";
		break;
	case 653001:
		return"�½�ά������������������տ¶����������ݰ�ͼʲ��";
		break;
	case 653022:
		return"�½�ά������������������տ¶����������ݰ�������";
		break;
	case 653023:
		return"�½�ά������������������տ¶����������ݰ�������";
		break;
	case 653024:
		return"�½�ά������������������տ¶�������������ǡ��";
		break;
	case 653100:
		return"�½�ά�������������ʲ����";
		break;
	case 653101:
		return"�½�ά�������������ʲ������ʲ��";
		break;
	case 653121:
		return"�½�ά�������������ʲ�����踽��";
		break;
	case 653122:
		return"�½�ά�������������ʲ����������";
		break;
	case 653123:
		return"�½�ά�������������ʲ����Ӣ��ɳ��";
		break;
	case 653124:
		return"�½�ά�������������ʲ����������";
		break;
	case 653125:
		return"�½�ά�������������ʲ����ɯ����";
		break;
	case 653126:
		return"�½�ά�������������ʲ����Ҷ����";
		break;
	case 653127:
		return"�½�ά�������������ʲ�����������";
		break;
	case 653128:
		return"�½�ά�������������ʲ�������պ���";
		break;
	case 653129:
		return"�½�ά�������������ʲ����٤ʦ��";
		break;
	case 653130:
		return"�½�ά�������������ʲ�����ͳ���";
		break;
	case 653131:
		return"�½�ά�������������ʲ������ʲ�����������������";
		break;
	case 653200:
		return"�½�ά������������������";
		break;
	case 653201:
		return"�½�ά������������������������";
		break;
	case 653221:
		return"�½�ά������������������������";
		break;
	case 653222:
		return"�½�ά������������������ī����";
		break;
	case 653223:
		return"�½�ά������������������Ƥɽ��";
		break;
	case 653224:
		return"�½�ά������������������������";
		break;
	case 653225:
		return"�½�ά������������������������";
		break;
	case 653226:
		return"�½�ά������������������������";
		break;
	case 653227:
		return"�½�ά�����������������������";
		break;
	case 654000:
		return"�½�ά��������������������������";
		break;
	case 654001:
		return"�½�ά�������������������������ݿ�����";
		break;
	case 654100:
		return"�½�ά���������������������������������";
		break;
	case 654101:
		return"�½�ά��������������������������������";
		break;
	case 654121:
		return"�½�ά��������������������������������";
		break;
	case 654122:
		return"�½���������������������ݲ첼�������������";
		break;
	case 654123:
		return"�½�ά�������������������������ݻ�����";
		break;
	case 654124:
		return"�½�ά�������������������������ݹ�����";
		break;
	case 654125:
		return"�½�ά����������������������������Դ��";
		break;
	case 654126:
		return"�½�ά��������������������������������";
		break;
	case 654127:
		return"�½�ά���������������������������ؿ�˹��";
		break;
	case 654128:
		return"�½�ά�����������������������������տ���";
		break;
	case 654200:
		return"�½�ά��������������ǵ���";
		break;
	case 654201:
		return"�½�ά��������������ǵ���������";
		break;
	case 654202:
		return"�½�ά��������������ǵ���������";
		break;
	case 654221:
		return"�½�ά��������������ǵ���������";
		break;
	case 654223:
		return"�½�ά��������������ǵ���ɳ����";
		break;
	case 654224:
		return"�½�ά��������������ǵ���������";
		break;
	case 654225:
		return"�½�ά��������������ǵ���ԣ����";
		break;
	case 654226:
		return"�½�ά��������������ǵ����Ͳ��������ɹ�������";
		break;
	case 654300:
		return"�½�ά���������������̩����";
		break;
	case 654301:
		return"�½�ά���������������̩��������̩��";
		break;
	case 654321:
		return"�½�ά���������������̩������������";
		break;
	case 654322:
		return"�½�ά���������������̩����������";
		break;
	case 654323:
		return"�½�ά���������������̩����������";
		break;
	case 654324:
		return"�½�ά���������������̩�������ͺ���";
		break;
	case 654325:
		return"�½�ά���������������̩���������";
		break;
	case 654326:
		return"�½�ά���������������̩������ľ����";
		break;
	case 659000:
		return"�½�ά�����������ֱϽ�ؼ�������λ";
		break;
	case 659001:
		return"�½�ά�����������ʯ������";
		break;
	default:
		return"����";
		break;
	}
}
