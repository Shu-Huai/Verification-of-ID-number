using namespace std;
string GetRegion(int diqutemp)
{
	switch (diqutemp)
	{
	case 110000:
		return"北京市";
		break;
	case 110100:
		return"北京市市辖区";
		break;
	case 110101:
		return"北京市东城区";
		break;
	case 110102:
		return"北京市西城区";
		break;
	case 110103:
		return"北京市崇文区";
		break;
	case 110104:
		return"北京市宣武区";
		break;
	case 110105:
		return"北京市朝阳区";
		break;
	case 110106:
		return"北京市丰台区";
		break;
	case 110107:
		return"北京市石景山区";
		break;
	case 110108:
		return"北京市海淀区";
		break;
	case 110109:
		return"北京市门头沟区";
		break;
	case 110111:
		return"北京市房山区";
		break;
	case 110112:
		return"北京市通州区";
		break;
	case 110113:
		return"北京市顺义区";
		break;
	case 110200:
		return"北京市县";
		break;
	case 110221:
		return"北京市昌平县";
		break;
	case 110224:
		return"北京市大兴县";
		break;
	case 110226:
		return"北京市平谷县";
		break;
	case 110227:
		return"北京市怀柔县";
		break;
	case 110228:
		return"北京市密云县";
		break;
	case 110229:
		return"北京市延庆县";
		break;
	case 120000:
		return"天津市";
		break;
	case 120100:
		return"天津市市辖区";
		break;
	case 120101:
		return"天津市和平区";
		break;
	case 120102:
		return"天津市河东区";
		break;
	case 120103:
		return"天津市河西区";
		break;
	case 120104:
		return"天津市南开区";
		break;
	case 120105:
		return"天津市河北区";
		break;
	case 120106:
		return"天津市红桥区";
		break;
	case 120107:
		return"天津市塘沽区";
		break;
	case 120108:
		return"天津市汉沽区";
		break;
	case 120109:
		return"天津市大港区";
		break;
	case 120110:
		return"天津市东丽区";
		break;
	case 120111:
		return"天津市西青区";
		break;
	case 120112:
		return"天津市津南区";
		break;
	case 120113:
		return"天津市北辰区";
		break;
	case 120200:
		return"天津市县";
		break;
	case 120221:
		return"天津市宁河县";
		break;
	case 120222:
		return"天津市武清县";
		break;
	case 120223:
		return"天津市静海县";
		break;
	case 120224:
		return"天津市宝坻县";
		break;
	case 120225:
		return"天津市蓟县";
		break;
	case 130000:
		return"河北省";
		break;
	case 130100:
		return"河北省石家庄市";
		break;
	case 130101:
		return"河北省石家庄市市辖区";
		break;
	case 130102:
		return"河北省石家庄市长安区";
		break;
	case 130103:
		return"河北省石家庄市桥东区";
		break;
	case 130104:
		return"河北省石家庄市桥西区";
		break;
	case 130105:
		return"河北省石家庄市新华区";
		break;
	case 130106:
		return"河北省石家庄市郊区";
		break;
	case 130107:
		return"河北省石家庄市井陉矿区";
		break;
	case 130121:
		return"河北省石家庄市井陉县";
		break;
	case 130123:
		return"河北省石家庄市正定县";
		break;
	case 130124:
		return"河北省石家庄市栾城县";
		break;
	case 130125:
		return"河北省石家庄市行唐县";
		break;
	case 130126:
		return"河北省石家庄市灵寿县";
		break;
	case 130127:
		return"河北省石家庄市高邑县";
		break;
	case 130128:
		return"河北省石家庄市深泽县";
		break;
	case 130129:
		return"河北省石家庄市赞皇县";
		break;
	case 130130:
		return"河北省石家庄市无极县";
		break;
	case 130131:
		return"河北省石家庄市平山县";
		break;
	case 130132:
		return"河北省石家庄市元氏县";
		break;
	case 130133:
		return"河北省石家庄市赵县";
		break;
	case 130181:
		return"河北省石家庄市辛集市";
		break;
	case 130182:
		return"河北省石家庄市藁城市";
		break;
	case 130183:
		return"河北省石家庄市晋州市";
		break;
	case 130184:
		return"河北省石家庄市新乐市";
		break;
	case 130185:
		return"河北省石家庄市鹿泉市";
		break;
	case 130200:
		return"河北省唐山市";
		break;
	case 130201:
		return"河北省唐山市市辖区";
		break;
	case 130202:
		return"河北省唐山市路南区";
		break;
	case 130203:
		return"河北省唐山市路北区";
		break;
	case 130204:
		return"河北省唐山市古冶区";
		break;
	case 130205:
		return"河北省唐山市开平区";
		break;
	case 130206:
		return"河北省唐山市新区";
		break;
	case 130221:
		return"河北省唐山市丰润县";
		break;
	case 130223:
		return"河北省唐山市滦县";
		break;
	case 130224:
		return"河北省唐山市滦南县";
		break;
	case 130225:
		return"河北省唐山市乐亭县";
		break;
	case 130227:
		return"河北省唐山市迁西县";
		break;
	case 130229:
		return"河北省唐山市玉田县";
		break;
	case 130230:
		return"河北省唐山市唐海县";
		break;
	case 130281:
		return"河北省唐山市遵化市";
		break;
	case 130282:
		return"河北省唐山市丰南市";
		break;
	case 130283:
		return"河北省唐山市迁安市";
		break;
	case 130300:
		return"河北省秦皇岛市秦皇岛市";
		break;
	case 130301:
		return"河北省秦皇岛市市辖区";
		break;
	case 130302:
		return"河北省秦皇岛市海港区";
		break;
	case 130303:
		return"河北省秦皇岛市山海关区";
		break;
	case 130304:
		return"河北省秦皇岛市北戴河区";
		break;
	case 130321:
		return"河北省秦皇岛市青龙满族自治县";
		break;
	case 130322:
		return"河北省秦皇岛市昌黎县";
		break;
	case 130323:
		return"河北省秦皇岛市抚宁县";
		break;
	case 130324:
		return"河北省秦皇岛市卢龙县";
		break;
	case 130400:
		return"河北省邯郸市邯郸市";
		break;
	case 130401:
		return"河北省邯郸市市辖区";
		break;
	case 130402:
		return"河北省邯郸市邯山区";
		break;
	case 130403:
		return"河北省邯郸市丛台区";
		break;
	case 130404:
		return"河北省邯郸市复兴区";
		break;
	case 130406:
		return"河北省邯郸市峰峰矿区";
		break;
	case 130421:
		return"河北省邯郸市邯郸县";
		break;
	case 130423:
		return"河北省邯郸市临漳县";
		break;
	case 130424:
		return"河北省邯郸市成安县";
		break;
	case 130425:
		return"河北省邯郸市大名县";
		break;
	case 130426:
		return"河北省邯郸市涉县";
		break;
	case 130427:
		return"河北省邯郸市磁县";
		break;
	case 130428:
		return"河北省邯郸市肥乡县";
		break;
	case 130429:
		return"河北省邯郸市永年县";
		break;
	case 130430:
		return"河北省邯郸市邱县";
		break;
	case 130431:
		return"河北省邯郸市鸡泽县";
		break;
	case 130432:
		return"河北省邯郸市广平县";
		break;
	case 130433:
		return"河北省邯郸市馆陶县";
		break;
	case 130434:
		return"河北省邯郸市魏县";
		break;
	case 130435:
		return"河北省邯郸市曲周县";
		break;
	case 130481:
		return"河北省邯郸市武安市";
		break;
	case 130500:
		return"河北省邢台市";
		break;
	case 130501:
		return"河北省邢台市市辖区";
		break;
	case 130502:
		return"河北省邢台市桥东区";
		break;
	case 130503:
		return"河北省邢台市桥西区";
		break;
	case 130521:
		return"河北省邢台市邢台县";
		break;
	case 130522:
		return"河北省邢台市临城县";
		break;
	case 130523:
		return"河北省邢台市内丘县";
		break;
	case 130524:
		return"河北省邢台市柏乡县";
		break;
	case 130525:
		return"河北省邢台市隆尧县";
		break;
	case 130526:
		return"河北省邢台市任县";
		break;
	case 130527:
		return"河北省邢台市南和县";
		break;
	case 130528:
		return"河北省邢台市宁晋县";
		break;
	case 130529:
		return"河北省邢台市巨鹿县";
		break;
	case 130530:
		return"河北省邢台市新河县";
		break;
	case 130531:
		return"河北省邢台市广宗县";
		break;
	case 130532:
		return"河北省邢台市平乡县";
		break;
	case 130533:
		return"河北省邢台市威县";
		break;
	case 130534:
		return"河北省邢台市清河县";
		break;
	case 130535:
		return"河北省邢台市临西县";
		break;
	case 130581:
		return"河北省邢台市南宫市";
		break;
	case 130582:
		return"河北省邢台市沙河市";
		break;
	case 130600:
		return"河北省保定市";
		break;
	case 130601:
		return"河北省保定市市辖区";
		break;
	case 130602:
		return"河北省保定市新市区";
		break;
	case 130603:
		return"河北省保定市北市区";
		break;
	case 130604:
		return"河北省保定市南市区";
		break;
	case 130621:
		return"河北省保定市满城县";
		break;
	case 130622:
		return"河北省保定市清苑县";
		break;
	case 130623:
		return"河北省保定市涞水县";
		break;
	case 130624:
		return"河北省保定市阜平县";
		break;
	case 130625:
		return"河北省保定市徐水县";
		break;
	case 130626:
		return"河北省保定市定兴县";
		break;
	case 130627:
		return"河北省保定市唐县";
		break;
	case 130628:
		return"河北省保定市高阳县";
		break;
	case 130629:
		return"河北省保定市容城县";
		break;
	case 130630:
		return"河北省保定市涞源县";
		break;
	case 130631:
		return"河北省保定市望都县";
		break;
	case 130632:
		return"河北省保定市安新县";
		break;
	case 130633:
		return"河北省保定市易县";
		break;
	case 130634:
		return"河北省保定市曲阳县";
		break;
	case 130635:
		return"河北省保定市蠡县";
		break;
	case 130636:
		return"河北省保定市顺平县";
		break;
	case 130637:
		return"河北省保定市博野县";
		break;
	case 130638:
		return"河北省保定市雄县";
		break;
	case 130681:
		return"河北省保定市涿州市";
		break;
	case 130682:
		return"河北省保定市定州市";
		break;
	case 130683:
		return"河北省保定市安国市";
		break;
	case 130684:
		return"河北省保定市高碑店市";
		break;
	case 130700:
		return"河北省张家口市";
		break;
	case 130701:
		return"河北省张家口市市辖区";
		break;
	case 130702:
		return"河北省张家口市桥东区";
		break;
	case 130703:
		return"河北省张家口市桥西区";
		break;
	case 130705:
		return"河北省张家口市宣化区";
		break;
	case 130706:
		return"河北省张家口市下花园区";
		break;
	case 130721:
		return"河北省张家口市宣化县";
		break;
	case 130722:
		return"河北省张家口市张北县";
		break;
	case 130723:
		return"河北省张家口市康保县";
		break;
	case 130724:
		return"河北省张家口市沽源县";
		break;
	case 130725:
		return"河北省张家口市尚义县";
		break;
	case 130726:
		return"河北省张家口市蔚县";
		break;
	case 130727:
		return"河北省张家口市阳原县";
		break;
	case 130728:
		return"河北省张家口市怀安县";
		break;
	case 130729:
		return"河北省张家口市万全县";
		break;
	case 130730:
		return"河北省张家口市怀来县";
		break;
	case 130731:
		return"河北省张家口市涿鹿县";
		break;
	case 130732:
		return"河北省张家口市赤城县";
		break;
	case 130733:
		return"河北省张家口市崇礼县";
		break;
	case 130800:
		return"河北省承德市";
		break;
	case 130801:
		return"河北省承德市市辖区";
		break;
	case 130802:
		return"河北省承德市双桥区";
		break;
	case 130803:
		return"河北省承德市双滦区";
		break;
	case 130804:
		return"河北省承德市鹰手营子矿区";
		break;
	case 130821:
		return"河北省承德市承德县";
		break;
	case 130822:
		return"河北省承德市兴隆县";
		break;
	case 130823:
		return"河北省承德市平泉县";
		break;
	case 130824:
		return"河北省承德市滦平县";
		break;
	case 130825:
		return"河北省承德市隆化县";
		break;
	case 130826:
		return"河北省承德市丰宁满族自治县";
		break;
	case 130827:
		return"河北省承德市宽城满族自治县";
		break;
	case 130828:
		return"河北省承德市围场满族蒙古族自治县";
		break;
	case 130900:
		return"河北省沧州市";
		break;
	case 130901:
		return"河北省沧州市市辖区";
		break;
	case 130902:
		return"河北省沧州市新华区";
		break;
	case 130903:
		return"河北省沧州市运河区";
		break;
	case 130921:
		return"河北省沧州市沧县";
		break;
	case 130922:
		return"河北省沧州市青县";
		break;
	case 130923:
		return"河北省沧州市东光县";
		break;
	case 130924:
		return"河北省沧州市海兴县";
		break;
	case 130925:
		return"河北省沧州市盐山县";
		break;
	case 130926:
		return"河北省沧州市肃宁县";
		break;
	case 130927:
		return"河北省沧州市南皮县";
		break;
	case 130928:
		return"河北省沧州市吴桥县";
		break;
	case 130929:
		return"河北省沧州市献县";
		break;
	case 130930:
		return"河北省沧州市孟村回族自治县";
		break;
	case 130981:
		return"河北省沧州市泊头市";
		break;
	case 130982:
		return"河北省沧州市任丘市";
		break;
	case 130983:
		return"河北省沧州市黄骅市";
		break;
	case 130984:
		return"河北省沧州市河间市";
		break;
	case 131000:
		return"河北省廊坊市";
		break;
	case 131001:
		return"河北省廊坊市市辖区";
		break;
	case 131002:
		return"河北省廊坊市安次区";
		break;
	case 131022:
		return"河北省廊坊市固安县";
		break;
	case 131023:
		return"河北省廊坊市永清县";
		break;
	case 131024:
		return"河北省廊坊市香河县";
		break;
	case 131025:
		return"河北省廊坊市大城县";
		break;
	case 131026:
		return"河北省廊坊市文安县";
		break;
	case 131028:
		return"河北省廊坊市大厂回族自治县";
		break;
	case 131081:
		return"河北省廊坊市霸州市";
		break;
	case 131082:
		return"河北省廊坊市三河市";
		break;
	case 131100:
		return"河北省衡水市";
		break;
	case 131101:
		return"河北省衡水市市辖区";
		break;
	case 131102:
		return"河北省衡水市桃城区";
		break;
	case 131121:
		return"河北省衡水市枣强县";
		break;
	case 131122:
		return"河北省衡水市武邑县";
		break;
	case 131123:
		return"河北省衡水市武强县";
		break;
	case 131124:
		return"河北省衡水市饶阳县";
		break;
	case 131125:
		return"河北省衡水市安平县";
		break;
	case 131126:
		return"河北省衡水市故城县";
		break;
	case 131127:
		return"河北省衡水市景县";
		break;
	case 131128:
		return"河北省衡水市阜城县";
		break;
	case 131181:
		return"河北省衡水市冀州市";
		break;
	case 131182:
		return"河北省衡水市深州市";
		break;
	case 140000:
		return"山西省";
		break;
	case 140100:
		return"山西省太原市";
		break;
	case 140101:
		return"山西省太原市市辖区";
		break;
	case 140105:
		return"山西省太原市小店区";
		break;
	case 140106:
		return"山西省太原市迎泽区";
		break;
	case 140107:
		return"山西省太原市杏花岭区";
		break;
	case 140108:
		return"山西省太原市尖草坪区";
		break;
	case 140109:
		return"山西省太原市万柏林区";
		break;
	case 140110:
		return"山西省太原市晋源区";
		break;
	case 140121:
		return"山西省太原市清徐县";
		break;
	case 140122:
		return"山西省太原市阳曲县";
		break;
	case 140123:
		return"山西省太原市娄烦县";
		break;
	case 140181:
		return"山西省太原市古交市";
		break;
	case 140200:
		return"山西省大同市";
		break;
	case 140201:
		return"山西省大同市市辖区";
		break;
	case 140202:
		return"山西省大同市城区";
		break;
	case 140203:
		return"山西省大同市矿区";
		break;
	case 140211:
		return"山西省大同市南郊区";
		break;
	case 140212:
		return"山西省大同市新荣区";
		break;
	case 140221:
		return"山西省大同市阳高县";
		break;
	case 140222:
		return"山西省大同市天镇县";
		break;
	case 140223:
		return"山西省大同市广灵县";
		break;
	case 140224:
		return"山西省大同市灵丘县";
		break;
	case 140225:
		return"山西省大同市浑源县";
		break;
	case 140226:
		return"山西省大同市左云县";
		break;
	case 140227:
		return"山西省大同市大同县";
		break;
	case 140300:
		return"山西省阳泉市";
		break;
	case 140301:
		return"山西省阳泉市市辖区";
		break;
	case 140302:
		return"山西省阳泉市城区";
		break;
	case 140303:
		return"山西省阳泉市矿区";
		break;
	case 140311:
		return"山西省阳泉市郊区";
		break;
	case 140321:
		return"山西省阳泉市平定县";
		break;
	case 140322:
		return"山西省阳泉市盂县";
		break;
	case 140400:
		return"山西省长治市";
		break;
	case 140401:
		return"山西省长治市市辖区";
		break;
	case 140402:
		return"山西省长治市城区";
		break;
	case 140411:
		return"山西省长治市郊区";
		break;
	case 140421:
		return"山西省长治市长治县";
		break;
	case 140423:
		return"山西省长治市襄垣县";
		break;
	case 140424:
		return"山西省长治市屯留县";
		break;
	case 140425:
		return"山西省长治市平顺县";
		break;
	case 140426:
		return"山西省长治市黎城县";
		break;
	case 140427:
		return"山西省长治市壶关县";
		break;
	case 140428:
		return"山西省长治市长子县";
		break;
	case 140429:
		return"山西省长治市武乡县";
		break;
	case 140430:
		return"山西省长治市沁县";
		break;
	case 140431:
		return"山西省长治市沁源县";
		break;
	case 140481:
		return"山西省长治市潞城市";
		break;
	case 140500:
		return"山西省晋城市";
		break;
	case 140501:
		return"山西省晋城市市辖区";
		break;
	case 140502:
		return"山西省晋城市城区";
		break;
	case 140521:
		return"山西省晋城市沁水县";
		break;
	case 140522:
		return"山西省晋城市阳城县";
		break;
	case 140524:
		return"山西省晋城市陵川县";
		break;
	case 140525:
		return"山西省晋城市泽州县";
		break;
	case 140581:
		return"山西省晋城市高平市";
		break;
	case 140600:
		return"山西省晋城市朔州市";
		break;
	case 140601:
		return"山西省晋城市市辖区";
		break;
	case 140602:
		return"山西省晋城市朔城区";
		break;
	case 140603:
		return"山西省晋城市平鲁区";
		break;
	case 140621:
		return"山西省晋城市山阴县";
		break;
	case 140622:
		return"山西省晋城市应县";
		break;
	case 140623:
		return"山西省晋城市右玉县";
		break;
	case 140624:
		return"山西省晋城市怀仁县";
		break;
	case 142200:
		return"山西省忻州地区";
		break;
	case 142201:
		return"山西省忻州地区忻州市";
		break;
	case 142202:
		return"山西省忻州地区原平市";
		break;
	case 142222:
		return"山西省忻州地区定襄县";
		break;
	case 142223:
		return"山西省忻州地区五台县";
		break;
	case 142225:
		return"山西省忻州地区代县";
		break;
	case 142226:
		return"山西省忻州地区繁峙县";
		break;
	case 142227:
		return"山西省忻州地区宁武县";
		break;
	case 142228:
		return"山西省忻州地区静乐县";
		break;
	case 142229:
		return"山西省忻州地区神池县";
		break;
	case 142230:
		return"山西省忻州地区五寨县";
		break;
	case 142231:
		return"山西省忻州地区岢岚县";
		break;
	case 142232:
		return"山西省忻州地区河曲县";
		break;
	case 142233:
		return"山西省忻州地区保德县";
		break;
	case 142234:
		return"山西省忻州地区偏关县";
		break;
	case 142300:
		return"山西省忻州地区吕梁地区";
		break;
	case 142301:
		return"山西省忻州地区孝义市";
		break;
	case 142302:
		return"山西省忻州地区离石市";
		break;
	case 142303:
		return"山西省忻州地区汾阳市";
		break;
	case 142322:
		return"山西省忻州地区文水县";
		break;
	case 142323:
		return"山西省忻州地区交城县";
		break;
	case 142325:
		return"山西省忻州地区兴县";
		break;
	case 142326:
		return"山西省忻州地区临县";
		break;
	case 142327:
		return"山西省忻州地区柳林县";
		break;
	case 142328:
		return"山西省忻州地区石楼县";
		break;
	case 142329:
		return"山西省忻州地区岚县";
		break;
	case 142330:
		return"山西省忻州地区方山县";
		break;
	case 142332:
		return"山西省忻州地区中阳县";
		break;
	case 142333:
		return"山西省忻州地区交口县";
		break;
	case 142400:
		return"山西省晋中地区";
		break;
	case 142401:
		return"山西省晋中地区榆次市";
		break;
	case 142402:
		return"山西省晋中地区介休市";
		break;
	case 142421:
		return"山西省晋中地区榆社县";
		break;
	case 142422:
		return"山西省晋中地区左权县";
		break;
	case 142423:
		return"山西省晋中地区和顺县";
		break;
	case 142424:
		return"山西省晋中地区昔阳县";
		break;
	case 142427:
		return"山西省晋中地区寿阳县";
		break;
	case 142429:
		return"山西省晋中地区太谷县";
		break;
	case 142430:
		return"山西省晋中地区祁县";
		break;
	case 142431:
		return"山西省晋中地区平遥县";
		break;
	case 142433:
		return"山西省晋中地区灵石县";
		break;
	case 142600:
		return"山西省临汾地区";
		break;
	case 142601:
		return"山西省临汾地区临汾市";
		break;
	case 142602:
		return"山西省临汾地区侯马市";
		break;
	case 142603:
		return"山西省临汾地区霍州市";
		break;
	case 142621:
		return"山西省临汾地区曲沃县";
		break;
	case 142622:
		return"山西省临汾地区翼城县";
		break;
	case 142623:
		return"山西省临汾地区襄汾县";
		break;
	case 142625:
		return"山西省临汾地区洪洞县";
		break;
	case 142627:
		return"山西省临汾地区古县";
		break;
	case 142628:
		return"山西省临汾地区安泽县";
		break;
	case 142629:
		return"山西省临汾地区浮山县";
		break;
	case 142630:
		return"山西省临汾地区吉县";
		break;
	case 142631:
		return"山西省临汾地区乡宁县";
		break;
	case 142632:
		return"山西省临汾地区蒲县";
		break;
	case 142633:
		return"山西省临汾地区大宁县";
		break;
	case 142634:
		return"山西省临汾地区永和县";
		break;
	case 142635:
		return"山西省临汾地区隰县";
		break;
	case 142636:
		return"山西省临汾地区汾西县";
		break;
	case 142700:
		return"山西省运城地区";
		break;
	case 142701:
		return"山西省运城地区运城市";
		break;
	case 142702:
		return"山西省运城地区永济市";
		break;
	case 142703:
		return"山西省运城地区河津市";
		break;
	case 142723:
		return"山西省运城地区芮城县";
		break;
	case 142724:
		return"山西省运城地区临猗县";
		break;
	case 142725:
		return"山西省运城地区万荣县";
		break;
	case 142726:
		return"山西省运城地区新绛县";
		break;
	case 142727:
		return"山西省运城地区稷山县";
		break;
	case 142729:
		return"山西省运城地区闻喜县";
		break;
	case 142730:
		return"山西省运城地区夏县";
		break;
	case 142731:
		return"山西省运城地区绛县";
		break;
	case 142732:
		return"山西省运城地区平陆县";
		break;
	case 142733:
		return"山西省运城地区垣曲县";
		break;
	case 150000:
		return"内蒙古自治区";
		break;
	case 150100:
		return"内蒙古自治区呼和浩特市";
		break;
	case 150101:
		return"内蒙古自治区呼和浩特市市辖区";
		break;
	case 150102:
		return"内蒙古自治区呼和浩特市新城区";
		break;
	case 150103:
		return"内蒙古自治区呼和浩特市回民区";
		break;
	case 150104:
		return"内蒙古自治区呼和浩特市玉泉区";
		break;
	case 150105:
		return"内蒙古自治区呼和浩特市郊区";
		break;
	case 150121:
		return"内蒙古自治区呼和浩特市土默特左旗";
		break;
	case 150122:
		return"内蒙古自治区呼和浩特市托克托县";
		break;
	case 150123:
		return"内蒙古自治区呼和浩特市和林格尔县";
		break;
	case 150124:
		return"内蒙古自治区呼和浩特市清水河县";
		break;
	case 150125:
		return"内蒙古自治区呼和浩特市武川县";
		break;
	case 150200:
		return"内蒙古自治区包头市";
		break;
	case 150201:
		return"内蒙古自治区包头市市辖区";
		break;
	case 150202:
		return"内蒙古自治区包头市东河区";
		break;
	case 150203:
		return"内蒙古自治区包头市昆都伦区";
		break;
	case 150204:
		return"内蒙古自治区包头市青山区";
		break;
	case 150205:
		return"内蒙古自治区包头市石拐矿区";
		break;
	case 150206:
		return"内蒙古自治区包头市白云矿区";
		break;
	case 150207:
		return"内蒙古自治区包头市郊区";
		break;
	case 150221:
		return"内蒙古自治区包头市土默特右旗";
		break;
	case 150222:
		return"内蒙古自治区包头市固阳县";
		break;
	case 150223:
		return"内蒙古自治区包头市达尔罕茂明安联合旗";
		break;
	case 150300:
		return"内蒙古自治区乌海市";
		break;
	case 150301:
		return"内蒙古自治区乌海市市辖区";
		break;
	case 150302:
		return"内蒙古自治区乌海市海勃湾区";
		break;
	case 150303:
		return"内蒙古自治区乌海市海南区";
		break;
	case 150304:
		return"内蒙古自治区乌海市乌达区";
		break;
	case 150400:
		return"内蒙古自治区赤峰市";
		break;
	case 150401:
		return"内蒙古自治区赤峰市市辖区";
		break;
	case 150402:
		return"内蒙古自治区赤峰市红山区";
		break;
	case 150403:
		return"内蒙古自治区赤峰市元宝山区";
		break;
	case 150404:
		return"内蒙古自治区赤峰市松山区";
		break;
	case 150421:
		return"内蒙古自治区赤峰市阿鲁科尔沁旗";
		break;
	case 150422:
		return"内蒙古自治区赤峰市巴林左旗";
		break;
	case 150423:
		return"内蒙古自治区赤峰市巴林右旗";
		break;
	case 150424:
		return"内蒙古自治区赤峰市林西县";
		break;
	case 150425:
		return"内蒙古自治区赤峰市克什克腾旗";
		break;
	case 150426:
		return"内蒙古自治区赤峰市翁牛特旗";
		break;
	case 150428:
		return"内蒙古自治区赤峰市喀喇沁旗";
		break;
	case 150429:
		return"内蒙古自治区赤峰市宁城县";
		break;
	case 150430:
		return"内蒙古自治区赤峰市敖汉旗";
		break;
	case 152100:
		return"内蒙古自治区呼伦贝尔盟";
		break;
	case 152101:
		return"内蒙古自治区呼伦贝尔盟海拉尔市";
		break;
	case 152102:
		return"内蒙古自治区呼伦贝尔盟满洲里市";
		break;
	case 152103:
		return"内蒙古自治区呼伦贝尔盟扎兰屯市";
		break;
	case 152104:
		return"内蒙古自治区呼伦贝尔盟牙克石市";
		break;
	case 152105:
		return"内蒙古自治区呼伦贝尔盟根河市";
		break;
	case 152106:
		return"内蒙古自治区呼伦贝尔盟额尔古纳市";
		break;
	case 152122:
		return"内蒙古自治区呼伦贝尔盟阿荣旗";
		break;
	case 152123:
		return"内蒙古自治区呼伦贝尔盟莫力达瓦达斡尔族自治旗";
		break;
	case 152127:
		return"内蒙古自治区呼伦贝尔盟鄂伦春自治旗";
		break;
	case 152128:
		return"内蒙古自治区呼伦贝尔盟鄂温克族自治旗";
		break;
	case 152129:
		return"内蒙古自治区呼伦贝尔盟新巴尔虎右旗";
		break;
	case 152130:
		return"内蒙古自治区呼伦贝尔盟新巴尔虎左旗";
		break;
	case 152131:
		return"内蒙古自治区呼伦贝尔盟陈巴尔虎旗";
		break;
	case 152200:
		return"内蒙古自治区兴安盟";
		break;
	case 152201:
		return"内蒙古自治区兴安盟乌兰浩特市";
		break;
	case 152202:
		return"内蒙古自治区兴安盟阿尔山市";
		break;
	case 152221:
		return"内蒙古自治区兴安盟科尔沁右翼前旗";
		break;
	case 152222:
		return"内蒙古自治区兴安盟科尔沁右翼中旗";
		break;
	case 152223:
		return"内蒙古自治区兴安盟扎赉特旗";
		break;
	case 152224:
		return"内蒙古自治区兴安盟突泉县";
		break;
	case 152300:
		return"内蒙古自治区哲里木盟";
		break;
	case 152301:
		return"内蒙古自治区哲里木盟通辽市";
		break;
	case 152302:
		return"内蒙古自治区哲里木盟霍林郭勒市";
		break;
	case 152322:
		return"内蒙古自治区哲里木盟科尔沁左翼中旗";
		break;
	case 152323:
		return"内蒙古自治区哲里木盟科尔沁左翼后旗";
		break;
	case 152324:
		return"内蒙古自治区哲里木盟开鲁县";
		break;
	case 152325:
		return"内蒙古自治区哲里木盟库伦旗";
		break;
	case 152326:
		return"内蒙古自治区哲里木盟奈曼旗";
		break;
	case 152327:
		return"内蒙古自治区哲里木盟扎鲁特旗";
		break;
	case 152500:
		return"内蒙古自治区锡林郭勒盟";
		break;
	case 152501:
		return"内蒙古自治区锡林郭勒盟二连浩特市";
		break;
	case 152502:
		return"内蒙古自治区锡林郭勒盟锡林浩特市";
		break;
	case 152522:
		return"内蒙古自治区锡林郭勒盟阿巴嘎旗";
		break;
	case 152523:
		return"内蒙古自治区锡林郭勒盟苏尼特左旗";
		break;
	case 152524:
		return"内蒙古自治区锡林郭勒盟苏尼特右旗";
		break;
	case 152525:
		return"内蒙古自治区锡林郭勒盟东乌珠穆沁旗";
		break;
	case 152526:
		return"内蒙古自治区锡林郭勒盟西乌珠穆沁旗";
		break;
	case 152527:
		return"内蒙古自治区锡林郭勒盟太仆寺旗";
		break;
	case 152528:
		return"内蒙古自治区锡林郭勒盟镶黄旗";
		break;
	case 152529:
		return"内蒙古自治区锡林郭勒盟正镶白旗";
		break;
	case 152530:
		return"内蒙古自治区锡林郭勒盟正蓝旗";
		break;
	case 152531:
		return"内蒙古自治区锡林郭勒盟多伦县";
		break;
	case 152600:
		return"内蒙古自治区乌兰察布盟";
		break;
	case 152601:
		return"内蒙古自治区乌兰察布盟集宁市";
		break;
	case 152602:
		return"内蒙古自治区乌兰察布盟丰镇市";
		break;
	case 152624:
		return"内蒙古自治区乌兰察布盟卓资县";
		break;
	case 152625:
		return"内蒙古自治区乌兰察布盟化德县";
		break;
	case 152626:
		return"内蒙古自治区乌兰察布盟商都县";
		break;
	case 152627:
		return"内蒙古自治区乌兰察布盟兴和县";
		break;
	case 152629:
		return"内蒙古自治区乌兰察布盟凉城县";
		break;
	case 152630:
		return"内蒙古自治区乌兰察布盟察哈尔右翼前旗";
		break;
	case 152631:
		return"内蒙古自治区乌兰察布盟察哈尔右翼中旗";
		break;
	case 152632:
		return"内蒙古自治区乌兰察布盟察哈尔右翼后旗";
		break;
	case 152634:
		return"内蒙古自治区乌兰察布盟四子王旗";
		break;
	case 152700:
		return"内蒙古自治区伊克昭盟";
		break;
	case 152701:
		return"内蒙古自治区伊克昭盟东胜市";
		break;
	case 152722:
		return"内蒙古自治区伊克昭盟达拉特旗";
		break;
	case 152723:
		return"内蒙古自治区伊克昭盟准格尔旗";
		break;
	case 152724:
		return"内蒙古自治区伊克昭盟鄂托克前旗";
		break;
	case 152725:
		return"内蒙古自治区伊克昭盟鄂托克旗";
		break;
	case 152726:
		return"内蒙古自治区伊克昭盟杭锦旗";
		break;
	case 152727:
		return"内蒙古自治区伊克昭盟乌审旗";
		break;
	case 152728:
		return"内蒙古自治区伊克昭盟伊金霍洛旗";
		break;
	case 152800:
		return"内蒙古自治区巴彦淖尔盟";
		break;
	case 152801:
		return"内蒙古自治区巴彦淖尔盟临河市";
		break;
	case 152822:
		return"内蒙古自治区巴彦淖尔盟五原县";
		break;
	case 152823:
		return"内蒙古自治区巴彦淖尔盟磴口县";
		break;
	case 152824:
		return"内蒙古自治区巴彦淖尔盟乌拉特前旗";
		break;
	case 152825:
		return"内蒙古自治区巴彦淖尔盟乌拉特中旗";
		break;
	case 152826:
		return"内蒙古自治区巴彦淖尔盟乌拉特后旗";
		break;
	case 152827:
		return"内蒙古自治区巴彦淖尔盟杭锦后旗";
		break;
	case 152900:
		return"内蒙古自治区阿拉善盟";
		break;
	case 152921:
		return"内蒙古自治区阿拉善盟阿拉善左旗";
		break;
	case 152922:
		return"内蒙古自治区阿拉善盟阿拉善右旗";
		break;
	case 152923:
		return"内蒙古自治区阿拉善盟额济纳旗";
		break;
	case 210000:
		return"辽宁省";
		break;
	case 210100:
		return"辽宁省沈阳市";
		break;
	case 210101:
		return"辽宁省沈阳市市辖区";
		break;
	case 210102:
		return"辽宁省沈阳市和平区";
		break;
	case 210103:
		return"辽宁省沈阳市沈河区";
		break;
	case 210104:
		return"辽宁省沈阳市大东区";
		break;
	case 210105:
		return"辽宁省沈阳市皇姑区";
		break;
	case 210106:
		return"辽宁省沈阳市铁西区";
		break;
	case 210111:
		return"辽宁省沈阳市苏家屯区";
		break;
	case 210112:
		return"辽宁省沈阳市东陵区";
		break;
	case 210113:
		return"辽宁省沈阳市新城子区";
		break;
	case 210114:
		return"辽宁省沈阳市于洪区";
		break;
	case 210122:
		return"辽宁省沈阳市辽中县";
		break;
	case 210123:
		return"辽宁省沈阳市康平县";
		break;
	case 210124:
		return"辽宁省沈阳市法库县";
		break;
	case 210181:
		return"辽宁省沈阳市新民市";
		break;
	case 210200:
		return"辽宁省大连市";
		break;
	case 210201:
		return"辽宁省大连市市辖区";
		break;
	case 210202:
		return"辽宁省大连市中山区";
		break;
	case 210203:
		return"辽宁省大连市西岗区";
		break;
	case 210204:
		return"辽宁省大连市沙河口区";
		break;
	case 210211:
		return"辽宁省大连市甘井子区";
		break;
	case 210212:
		return"辽宁省大连市旅顺口区";
		break;
	case 210213:
		return"辽宁省大连市金州区";
		break;
	case 210224:
		return"辽宁省大连市长海县";
		break;
	case 210281:
		return"辽宁省大连市瓦房店市";
		break;
	case 210282:
		return"辽宁省大连市普兰店市";
		break;
	case 210283:
		return"辽宁省大连市庄河市";
		break;
	case 210300:
		return"辽宁省鞍山市";
		break;
	case 210301:
		return"辽宁省鞍山市市辖区";
		break;
	case 210302:
		return"辽宁省鞍山市铁东区";
		break;
	case 210303:
		return"辽宁省鞍山市铁西区";
		break;
	case 210304:
		return"辽宁省鞍山市立山区";
		break;
	case 210311:
		return"辽宁省鞍山市千山区";
		break;
	case 210321:
		return"辽宁省鞍山市台安县";
		break;
	case 210323:
		return"辽宁省鞍山市岫岩满族自治县";
		break;
	case 210381:
		return"辽宁省鞍山市海城市";
		break;
	case 210400:
		return"辽宁省抚顺市";
		break;
	case 210401:
		return"辽宁省抚顺市市辖区";
		break;
	case 210402:
		return"辽宁省抚顺市新抚区";
		break;
	case 210403:
		return"辽宁省抚顺市露天区";
		break;
	case 210404:
		return"辽宁省抚顺市望花区";
		break;
	case 210411:
		return"辽宁省抚顺市顺城区";
		break;
	case 210421:
		return"辽宁省抚顺市抚顺县";
		break;
	case 210422:
		return"辽宁省抚顺市新宾满族自治县";
		break;
	case 210423:
		return"辽宁省抚顺市清原满族自治县";
		break;
	case 210500:
		return"辽宁省本溪市";
		break;
	case 210501:
		return"辽宁省本溪市市辖区";
		break;
	case 210502:
		return"辽宁省本溪市平山区";
		break;
	case 210503:
		return"辽宁省本溪市溪湖区";
		break;
	case 210504:
		return"辽宁省本溪市明山区";
		break;
	case 210505:
		return"辽宁省本溪市南芬区";
		break;
	case 210521:
		return"辽宁省本溪市本溪满族自治县";
		break;
	case 210522:
		return"辽宁省本溪市桓仁满族自治县";
		break;
	case 210600:
		return"辽宁省丹东市";
		break;
	case 210601:
		return"辽宁省丹东市市辖区";
		break;
	case 210602:
		return"辽宁省丹东市元宝区";
		break;
	case 210603:
		return"辽宁省丹东市振兴区";
		break;
	case 210604:
		return"辽宁省丹东市振安区";
		break;
	case 210624:
		return"辽宁省丹东市宽甸满族自治县";
		break;
	case 210681:
		return"辽宁省丹东市东港市";
		break;
	case 210682:
		return"辽宁省丹东市凤城市";
		break;
	case 210700:
		return"辽宁省锦州市";
		break;
	case 210701:
		return"辽宁省锦州市市辖区";
		break;
	case 210702:
		return"辽宁省锦州市古塔区";
		break;
	case 210703:
		return"辽宁省锦州市凌河区";
		break;
	case 210711:
		return"辽宁省锦州市太和区";
		break;
	case 210726:
		return"辽宁省锦州市黑山县";
		break;
	case 210727:
		return"辽宁省锦州市义县";
		break;
	case 210781:
		return"辽宁省锦州市凌海市";
		break;
	case 210782:
		return"辽宁省锦州市北宁市";
		break;
	case 210800:
		return"辽宁省营口市";
		break;
	case 210801:
		return"辽宁省营口市市辖区";
		break;
	case 210802:
		return"辽宁省营口市站前区";
		break;
	case 210803:
		return"辽宁省营口市西市区";
		break;
	case 210804:
		return"辽宁省营口市鲅鱼圈区";
		break;
	case 210811:
		return"辽宁省营口市老边区";
		break;
	case 210881:
		return"辽宁省营口市盖州市";
		break;
	case 210882:
		return"辽宁省营口市大石桥市";
		break;
	case 210900:
		return"辽宁省阜新市";
		break;
	case 210901:
		return"辽宁省阜新市市辖区";
		break;
	case 210902:
		return"辽宁省阜新市海州区";
		break;
	case 210903:
		return"辽宁省阜新市新邱区";
		break;
	case 210904:
		return"辽宁省阜新市太平区";
		break;
	case 210905:
		return"辽宁省阜新市清河门区";
		break;
	case 210911:
		return"辽宁省阜新市细河区";
		break;
	case 210921:
		return"辽宁省阜新市阜新蒙古族自治县";
		break;
	case 210922:
		return"辽宁省阜新市彰武县";
		break;
	case 211000:
		return"辽宁省辽阳市";
		break;
	case 211001:
		return"辽宁省辽阳市市辖区";
		break;
	case 211002:
		return"辽宁省辽阳市白塔区";
		break;
	case 211003:
		return"辽宁省辽阳市文圣区";
		break;
	case 211004:
		return"辽宁省辽阳市宏伟区";
		break;
	case 211005:
		return"辽宁省辽阳市弓长岭区";
		break;
	case 211011:
		return"辽宁省辽阳市太子河区";
		break;
	case 211021:
		return"辽宁省辽阳市辽阳县";
		break;
	case 211081:
		return"辽宁省辽阳市灯塔市";
		break;
	case 211100:
		return"辽宁省盘锦市";
		break;
	case 211101:
		return"辽宁省盘锦市市辖区";
		break;
	case 211102:
		return"辽宁省盘锦市双台子区";
		break;
	case 211103:
		return"辽宁省盘锦市兴隆台区";
		break;
	case 211121:
		return"辽宁省盘锦市大洼县";
		break;
	case 211122:
		return"辽宁省盘锦市盘山县";
		break;
	case 211200:
		return"辽宁省铁岭市";
		break;
	case 211201:
		return"辽宁省铁岭市市辖区";
		break;
	case 211202:
		return"辽宁省铁岭市银州区";
		break;
	case 211204:
		return"辽宁省铁岭市清河区";
		break;
	case 211221:
		return"辽宁省铁岭市铁岭县";
		break;
	case 211223:
		return"辽宁省铁岭市西丰县";
		break;
	case 211224:
		return"辽宁省铁岭市昌图县";
		break;
	case 211281:
		return"辽宁省铁岭市铁法市";
		break;
	case 211282:
		return"辽宁省铁岭市开原市";
		break;
	case 211300:
		return"辽宁省朝阳市";
		break;
	case 211301:
		return"辽宁省朝阳市市辖区";
		break;
	case 211302:
		return"辽宁省朝阳市双塔区";
		break;
	case 211303:
		return"辽宁省朝阳市龙城区";
		break;
	case 211321:
		return"辽宁省朝阳市朝阳县";
		break;
	case 211322:
		return"辽宁省朝阳市建平县";
		break;
	case 211324:
		return"辽宁省朝阳市喀喇沁左翼蒙古族自治县";
		break;
	case 211381:
		return"辽宁省朝阳市北票市";
		break;
	case 211382:
		return"辽宁省朝阳市凌源市";
		break;
	case 211400:
		return"辽宁省葫芦岛市";
		break;
	case 211401:
		return"辽宁省葫芦岛市市辖区";
		break;
	case 211402:
		return"辽宁省葫芦岛市连山区";
		break;
	case 211403:
		return"辽宁省葫芦岛市龙港区";
		break;
	case 211404:
		return"辽宁省葫芦岛市南票区";
		break;
	case 211421:
		return"辽宁省葫芦岛市绥中县";
		break;
	case 211422:
		return"辽宁省葫芦岛市建昌县";
		break;
	case 211481:
		return"辽宁省葫芦岛市兴城市";
		break;
	case 220000:
		return"吉林省";
		break;
	case 220100:
		return"吉林省长春市";
		break;
	case 220101:
		return"吉林省长春市市辖区";
		break;
	case 220102:
		return"吉林省长春市南关区";
		break;
	case 220103:
		return"吉林省长春市宽城区";
		break;
	case 220104:
		return"吉林省长春市朝阳区";
		break;
	case 220105:
		return"吉林省长春市二道区";
		break;
	case 220106:
		return"吉林省长春市绿园区";
		break;
	case 220112:
		return"吉林省长春市双阳区";
		break;
	case 220122:
		return"吉林省长春市农安县";
		break;
	case 220181:
		return"吉林省长春市九台市";
		break;
	case 220182:
		return"吉林省长春市榆树市";
		break;
	case 220183:
		return"吉林省长春市德惠市";
		break;
	case 220200:
		return"吉林省吉林市";
		break;
	case 220201:
		return"吉林省吉林市市辖区";
		break;
	case 220202:
		return"吉林省吉林市昌邑区";
		break;
	case 220203:
		return"吉林省吉林市龙潭区";
		break;
	case 220204:
		return"吉林省吉林市船营区";
		break;
	case 220211:
		return"吉林省吉林市丰满区";
		break;
	case 220221:
		return"吉林省吉林市永吉县";
		break;
	case 220281:
		return"吉林省吉林市蛟河市";
		break;
	case 220282:
		return"吉林省吉林市桦甸市";
		break;
	case 220283:
		return"吉林省吉林市舒兰市";
		break;
	case 220284:
		return"吉林省吉林市磐石市";
		break;
	case 220300:
		return"吉林省四平市";
		break;
	case 220301:
		return"吉林省四平市市辖区";
		break;
	case 220302:
		return"吉林省四平市铁西区";
		break;
	case 220303:
		return"吉林省四平市铁东区";
		break;
	case 220322:
		return"吉林省四平市梨树县";
		break;
	case 220323:
		return"吉林省四平市伊通满族自治县";
		break;
	case 220381:
		return"吉林省四平市公主岭市";
		break;
	case 220382:
		return"吉林省四平市双辽市";
		break;
	case 220400:
		return"吉林省辽源市";
		break;
	case 220401:
		return"吉林省辽源市市辖区";
		break;
	case 220402:
		return"吉林省辽源市龙山区";
		break;
	case 220403:
		return"吉林省辽源市西安区";
		break;
	case 220421:
		return"吉林省辽源市东丰县";
		break;
	case 220422:
		return"吉林省辽源市东辽县";
		break;
	case 220500:
		return"吉林省通化市";
		break;
	case 220501:
		return"吉林省通化市市辖区";
		break;
	case 220502:
		return"吉林省通化市东昌区";
		break;
	case 220503:
		return"吉林省通化市二道江区";
		break;
	case 220521:
		return"吉林省通化市通化县";
		break;
	case 220523:
		return"吉林省通化市辉南县";
		break;
	case 220524:
		return"吉林省通化市柳河县";
		break;
	case 220581:
		return"吉林省通化市梅河口市";
		break;
	case 220582:
		return"吉林省通化市集安市";
		break;
	case 220600:
		return"吉林省白山市";
		break;
	case 220601:
		return"吉林省白山市市辖区";
		break;
	case 220602:
		return"吉林省白山市八道江区";
		break;
	case 220621:
		return"吉林省白山市抚松县";
		break;
	case 220622:
		return"吉林省白山市靖宇县";
		break;
	case 220623:
		return"吉林省白山市长白朝鲜族自治县";
		break;
	case 220625:
		return"吉林省白山市江源县";
		break;
	case 220681:
		return"吉林省白山市临江市";
		break;
	case 220700:
		return"吉林省松原市";
		break;
	case 220701:
		return"吉林省松原市市辖区";
		break;
	case 220702:
		return"吉林省松原市宁江区";
		break;
	case 220721:
		return"吉林省松原市前郭尔罗斯蒙古族自治县";
		break;
	case 220722:
		return"吉林省松原市长岭县";
		break;
	case 220723:
		return"吉林省松原市乾安县";
		break;
	case 220724:
		return"吉林省松原市扶余县";
		break;
	case 220800:
		return"吉林省白城市";
		break;
	case 220801:
		return"吉林省白城市市辖区";
		break;
	case 220802:
		return"吉林省白城市洮北区";
		break;
	case 220821:
		return"吉林省白城市镇赉县";
		break;
	case 220822:
		return"吉林省白城市通榆县";
		break;
	case 220881:
		return"吉林省白城市洮南市";
		break;
	case 220882:
		return"吉林省白城市大安市";
		break;
	case 222400:
		return"吉林省延边朝鲜族自治州";
		break;
	case 222401:
		return"吉林省延边朝鲜族自治州延吉市";
		break;
	case 222402:
		return"吉林省延边朝鲜族自治州图们市";
		break;
	case 222403:
		return"吉林省延边朝鲜族自治州敦化市";
		break;
	case 222404:
		return"吉林省延边朝鲜族自治州珲春市";
		break;
	case 222405:
		return"吉林省延边朝鲜族自治州龙井市";
		break;
	case 222406:
		return"吉林省延边朝鲜族自治州和龙市";
		break;
	case 222424:
		return"吉林省延边朝鲜族自治州汪清县";
		break;
	case 222426:
		return"吉林省延边朝鲜族自治州安图县";
		break;
	case 230000:
		return"黑龙江省";
		break;
	case 230100:
		return"黑龙江省哈尔滨市";
		break;
	case 230101:
		return"黑龙江省哈尔滨市市辖区";
		break;
	case 230102:
		return"黑龙江省哈尔滨市道里区";
		break;
	case 230103:
		return"黑龙江省哈尔滨市南岗区";
		break;
	case 230104:
		return"黑龙江省哈尔滨市道外区";
		break;
	case 230105:
		return"黑龙江省哈尔滨市太平区";
		break;
	case 230106:
		return"黑龙江省哈尔滨市香坊区";
		break;
	case 230107:
		return"黑龙江省哈尔滨市动力区";
		break;
	case 230108:
		return"黑龙江省哈尔滨市平房区";
		break;
	case 230121:
		return"黑龙江省哈尔滨市呼兰县";
		break;
	case 230123:
		return"黑龙江省哈尔滨市依兰县";
		break;
	case 230124:
		return"黑龙江省哈尔滨市方正县";
		break;
	case 230125:
		return"黑龙江省哈尔滨市宾县";
		break;
	case 230126:
		return"黑龙江省哈尔滨市巴彦县";
		break;
	case 230127:
		return"黑龙江省哈尔滨市木兰县";
		break;
	case 230128:
		return"黑龙江省哈尔滨市通河县";
		break;
	case 230129:
		return"黑龙江省哈尔滨市延寿县";
		break;
	case 230181:
		return"黑龙江省哈尔滨市阿城市";
		break;
	case 230182:
		return"黑龙江省哈尔滨市双城市";
		break;
	case 230183:
		return"黑龙江省哈尔滨市尚志市";
		break;
	case 230184:
		return"黑龙江省哈尔滨市五常市";
		break;
	case 230200:
		return"黑龙江省齐齐哈尔市";
		break;
	case 230201:
		return"黑龙江省齐齐哈尔市市辖区";
		break;
	case 230202:
		return"黑龙江省齐齐哈尔市龙沙区";
		break;
	case 230203:
		return"黑龙江省齐齐哈尔市建华区";
		break;
	case 230204:
		return"黑龙江省齐齐哈尔市铁锋区";
		break;
	case 230205:
		return"黑龙江省齐齐哈尔市昂昂溪区";
		break;
	case 230206:
		return"黑龙江省齐齐哈尔市富拉尔基区";
		break;
	case 230207:
		return"黑龙江省齐齐哈尔市碾子山区";
		break;
	case 230208:
		return"黑龙江省齐齐哈尔市梅里斯达斡尔族区";
		break;
	case 230221:
		return"黑龙江省齐齐哈尔市龙江县";
		break;
	case 230223:
		return"黑龙江省齐齐哈尔市依安县";
		break;
	case 230224:
		return"黑龙江省齐齐哈尔市泰来县";
		break;
	case 230225:
		return"黑龙江省齐齐哈尔市甘南县";
		break;
	case 230227:
		return"黑龙江省齐齐哈尔市富裕县";
		break;
	case 230229:
		return"黑龙江省齐齐哈尔市克山县";
		break;
	case 230230:
		return"黑龙江省齐齐哈尔市克东县";
		break;
	case 230231:
		return"黑龙江省齐齐哈尔市拜泉县";
		break;
	case 230281:
		return"黑龙江省齐齐哈尔市讷河市";
		break;
	case 230300:
		return"黑龙江省鸡西市";
		break;
	case 230301:
		return"黑龙江省鸡西市市辖区";
		break;
	case 230302:
		return"黑龙江省鸡西市鸡冠区";
		break;
	case 230303:
		return"黑龙江省鸡西市恒山区";
		break;
	case 230304:
		return"黑龙江省鸡西市滴道区";
		break;
	case 230305:
		return"黑龙江省鸡西市梨树区";
		break;
	case 230306:
		return"黑龙江省鸡西市城子河区";
		break;
	case 230307:
		return"黑龙江省鸡西市麻山区";
		break;
	case 230321:
		return"黑龙江省鸡西市鸡东县";
		break;
	case 230381:
		return"黑龙江省鸡西市虎林市";
		break;
	case 230382:
		return"黑龙江省鸡西市密山市";
		break;
	case 230400:
		return"黑龙江省鹤岗市";
		break;
	case 230401:
		return"黑龙江省鹤岗市市辖区";
		break;
	case 230402:
		return"黑龙江省鹤岗市向阳区";
		break;
	case 230403:
		return"黑龙江省鹤岗市工农区";
		break;
	case 230404:
		return"黑龙江省鹤岗市南山区";
		break;
	case 230405:
		return"黑龙江省鹤岗市兴安区";
		break;
	case 230406:
		return"黑龙江省鹤岗市东山区";
		break;
	case 230407:
		return"黑龙江省鹤岗市兴山区";
		break;
	case 230421:
		return"黑龙江省鹤岗市萝北县";
		break;
	case 230422:
		return"黑龙江省鹤岗市绥滨县";
		break;
	case 230500:
		return"黑龙江省双鸭山市";
		break;
	case 230501:
		return"黑龙江省双鸭山市市辖区";
		break;
	case 230502:
		return"黑龙江省双鸭山市尖山区";
		break;
	case 230503:
		return"黑龙江省双鸭山市岭东区";
		break;
	case 230505:
		return"黑龙江省双鸭山市四方台区";
		break;
	case 230506:
		return"黑龙江省双鸭山市宝山区";
		break;
	case 230521:
		return"黑龙江省双鸭山市集贤县";
		break;
	case 230522:
		return"黑龙江省双鸭山市友谊县";
		break;
	case 230523:
		return"黑龙江省双鸭山市宝清县";
		break;
	case 230524:
		return"黑龙江省双鸭山市饶河县";
		break;
	case 230600:
		return"黑龙江省大庆市";
		break;
	case 230601:
		return"黑龙江省大庆市市辖区";
		break;
	case 230602:
		return"黑龙江省大庆市萨尔图区";
		break;
	case 230603:
		return"黑龙江省大庆市龙凤区";
		break;
	case 230604:
		return"黑龙江省大庆市让胡路区";
		break;
	case 230605:
		return"黑龙江省大庆市红岗区";
		break;
	case 230606:
		return"黑龙江省大庆市大同区";
		break;
	case 230621:
		return"黑龙江省大庆市肇州县";
		break;
	case 230622:
		return"黑龙江省大庆市肇源县";
		break;
	case 230623:
		return"黑龙江省大庆市林甸县";
		break;
	case 230624:
		return"黑龙江省大庆市杜尔伯特蒙古族自治县";
		break;
	case 230700:
		return"黑龙江省伊春市";
		break;
	case 230701:
		return"黑龙江省伊春市市辖区";
		break;
	case 230702:
		return"黑龙江省伊春市伊春区";
		break;
	case 230703:
		return"黑龙江省伊春市南岔区";
		break;
	case 230704:
		return"黑龙江省伊春市友好区";
		break;
	case 230705:
		return"黑龙江省伊春市西林区";
		break;
	case 230706:
		return"黑龙江省伊春市翠峦区";
		break;
	case 230707:
		return"黑龙江省伊春市新青区";
		break;
	case 230708:
		return"黑龙江省伊春市美溪区";
		break;
	case 230709:
		return"黑龙江省伊春市金山屯区";
		break;
	case 230710:
		return"黑龙江省伊春市五营区";
		break;
	case 230711:
		return"黑龙江省伊春市乌马河区";
		break;
	case 230712:
		return"黑龙江省伊春市汤旺河区";
		break;
	case 230713:
		return"黑龙江省伊春市带岭区";
		break;
	case 230714:
		return"黑龙江省伊春市乌伊岭区";
		break;
	case 230715:
		return"黑龙江省伊春市红星区";
		break;
	case 230716:
		return"黑龙江省伊春市上甘岭区";
		break;
	case 230722:
		return"黑龙江省伊春市嘉荫县";
		break;
	case 230781:
		return"黑龙江省伊春市铁力市";
		break;
	case 230800:
		return"黑龙江省佳木斯市";
		break;
	case 230801:
		return"黑龙江省佳木斯市市辖区";
		break;
	case 230802:
		return"黑龙江省佳木斯市永红区";
		break;
	case 230803:
		return"黑龙江省佳木斯市向阳区";
		break;
	case 230804:
		return"黑龙江省佳木斯市前进区";
		break;
	case 230805:
		return"黑龙江省佳木斯市东风区";
		break;
	case 230811:
		return"黑龙江省佳木斯市郊区";
		break;
	case 230822:
		return"黑龙江省佳木斯市桦南县";
		break;
	case 230826:
		return"黑龙江省佳木斯市桦川县";
		break;
	case 230828:
		return"黑龙江省佳木斯市汤原县";
		break;
	case 230833:
		return"黑龙江省佳木斯市抚远县";
		break;
	case 230881:
		return"黑龙江省佳木斯市同江市";
		break;
	case 230882:
		return"黑龙江省佳木斯市富锦市";
		break;
	case 230900:
		return"黑龙江省七台河市";
		break;
	case 230901:
		return"黑龙江省七台河市市辖区";
		break;
	case 230902:
		return"黑龙江省七台河市新兴区";
		break;
	case 230903:
		return"黑龙江省七台河市桃山区";
		break;
	case 230904:
		return"黑龙江省七台河市茄子河区";
		break;
	case 230921:
		return"黑龙江省七台河市勃利县";
		break;
	case 231000:
		return"黑龙江省牡丹江市";
		break;
	case 231001:
		return"黑龙江省牡丹江市市辖区";
		break;
	case 231002:
		return"黑龙江省牡丹江市东安区";
		break;
	case 231003:
		return"黑龙江省牡丹江市阳明区";
		break;
	case 231004:
		return"黑龙江省牡丹江市爱民区";
		break;
	case 231005:
		return"黑龙江省牡丹江市西安区";
		break;
	case 231024:
		return"黑龙江省牡丹江市东宁县";
		break;
	case 231025:
		return"黑龙江省牡丹江市林口县";
		break;
	case 231081:
		return"黑龙江省牡丹江市绥芬河市";
		break;
	case 231083:
		return"黑龙江省牡丹江市海林市";
		break;
	case 231084:
		return"黑龙江省牡丹江市宁安市";
		break;
	case 231085:
		return"黑龙江省牡丹江市穆棱市";
		break;
	case 231100:
		return"黑龙江省黑河市";
		break;
	case 231101:
		return"黑龙江省黑河市市辖区";
		break;
	case 231102:
		return"黑龙江省黑河市爱辉区";
		break;
	case 231121:
		return"黑龙江省黑河市嫩江县";
		break;
	case 231123:
		return"黑龙江省黑河市逊克县";
		break;
	case 231124:
		return"黑龙江省黑河市孙吴县";
		break;
	case 231181:
		return"黑龙江省黑河市北安市";
		break;
	case 231182:
		return"黑龙江省黑河市五大连池市";
		break;
	case 232300:
		return"黑龙江省绥化地区";
		break;
	case 232301:
		return"黑龙江省绥化地区绥化市";
		break;
	case 232302:
		return"黑龙江省绥化地区安达市";
		break;
	case 232303:
		return"黑龙江省绥化地区肇东市";
		break;
	case 232304:
		return"黑龙江省绥化地区海伦市";
		break;
	case 232324:
		return"黑龙江省绥化地区望奎县";
		break;
	case 232325:
		return"黑龙江省绥化地区兰西县";
		break;
	case 232326:
		return"黑龙江省绥化地区青冈县";
		break;
	case 232330:
		return"黑龙江省绥化地区庆安县";
		break;
	case 232331:
		return"黑龙江省绥化地区明水县";
		break;
	case 232332:
		return"黑龙江省绥化地区绥棱县";
		break;
	case 232700:
		return"黑龙江省大兴安岭地区";
		break;
	case 232721:
		return"黑龙江省大兴安岭地区呼玛县";
		break;
	case 232722:
		return"黑龙江省大兴安岭地区塔河县";
		break;
	case 232723:
		return"黑龙江省大兴安岭地区漠河县";
		break;
	case 310000:
		return"上海市";
		break;
	case 310100:
		return"上海市市辖区";
		break;
	case 310101:
		return"上海市黄浦区";
		break;
	case 310102:
		return"上海市南市区";
		break;
	case 310103:
		return"上海市卢湾区";
		break;
	case 310104:
		return"上海市徐汇区";
		break;
	case 310105:
		return"上海市长宁区";
		break;
	case 310106:
		return"上海市静安区";
		break;
	case 310107:
		return"上海市普陀区";
		break;
	case 310108:
		return"上海市闸北区";
		break;
	case 310109:
		return"上海市虹口区";
		break;
	case 310110:
		return"上海市杨浦区";
		break;
	case 310112:
		return"上海市闵行区";
		break;
	case 310113:
		return"上海市宝山区";
		break;
	case 310114:
		return"上海市嘉定区";
		break;
	case 310115:
		return"上海市浦东新区";
		break;
	case 310116:
		return"上海市金山区";
		break;
	case 310117:
		return"上海市松江区";
		break;
	case 310200:
		return"上海市县";
		break;
	case 310225:
		return"上海市南汇县";
		break;
	case 310226:
		return"上海市奉贤县";
		break;
	case 310229:
		return"上海市青浦县";
		break;
	case 310230:
		return"上海市崇明县";
		break;
	case 320000:
		return"江苏省";
		break;
	case 320100:
		return"江苏省南京市";
		break;
	case 320101:
		return"江苏省南京市市辖区";
		break;
	case 320102:
		return"江苏省南京市玄武区";
		break;
	case 320103:
		return"江苏省南京市白下区";
		break;
	case 320104:
		return"江苏省南京市秦淮区";
		break;
	case 320105:
		return"江苏省南京市建邺区";
		break;
	case 320106:
		return"江苏省南京市鼓楼区";
		break;
	case 320107:
		return"江苏省南京市下关区";
		break;
	case 320111:
		return"江苏省南京市浦口区";
		break;
	case 320112:
		return"江苏省南京市大厂区";
		break;
	case 320113:
		return"江苏省南京市栖霞区";
		break;
	case 320114:
		return"江苏省南京市雨花台区";
		break;
	case 320121:
		return"江苏省南京市江宁县";
		break;
	case 320122:
		return"江苏省南京市江浦县";
		break;
	case 320123:
		return"江苏省南京市六合县";
		break;
	case 320124:
		return"江苏省南京市溧水县";
		break;
	case 320125:
		return"江苏省南京市高淳县";
		break;
	case 320200:
		return"江苏省无锡市";
		break;
	case 320201:
		return"江苏省无锡市市辖区";
		break;
	case 320202:
		return"江苏省无锡市崇安区";
		break;
	case 320203:
		return"江苏省无锡市南长区";
		break;
	case 320204:
		return"江苏省无锡市北塘区";
		break;
	case 320211:
		return"江苏省无锡市郊区";
		break;
	case 320281:
		return"江苏省无锡市江阴市";
		break;
	case 320282:
		return"江苏省无锡市宜兴市";
		break;
	case 320283:
		return"江苏省无锡市锡山市";
		break;
	case 320300:
		return"江苏省徐州市";
		break;
	case 320301:
		return"江苏省徐州市市辖区";
		break;
	case 320302:
		return"江苏省徐州市鼓楼区";
		break;
	case 320303:
		return"江苏省徐州市云龙区";
		break;
	case 320304:
		return"江苏省徐州市九里区";
		break;
	case 320305:
		return"江苏省徐州市贾汪区";
		break;
	case 320311:
		return"江苏省徐州市泉山区";
		break;
	case 320321:
		return"江苏省徐州市丰县";
		break;
	case 320322:
		return"江苏省徐州市沛县";
		break;
	case 320323:
		return"江苏省徐州市铜山县";
		break;
	case 320324:
		return"江苏省徐州市睢宁县";
		break;
	case 320381:
		return"江苏省徐州市新沂市";
		break;
	case 320382:
		return"江苏省徐州市邳州市";
		break;
	case 320400:
		return"江苏省常州市";
		break;
	case 320401:
		return"江苏省常州市市辖区";
		break;
	case 320402:
		return"江苏省常州市天宁区";
		break;
	case 320404:
		return"江苏省常州市钟楼区";
		break;
	case 320405:
		return"江苏省常州市戚墅堰区";
		break;
	case 320411:
		return"江苏省常州市郊区";
		break;
	case 320481:
		return"江苏省常州市溧阳市";
		break;
	case 320482:
		return"江苏省常州市金坛市";
		break;
	case 320483:
		return"江苏省常州市武进市";
		break;
	case 320500:
		return"江苏省苏州市";
		break;
	case 320501:
		return"江苏省苏州市市辖区";
		break;
	case 320502:
		return"江苏省苏州市沧浪区";
		break;
	case 320503:
		return"江苏省苏州市平江区";
		break;
	case 320504:
		return"江苏省苏州市金阊区";
		break;
	case 320511:
		return"江苏省苏州市郊区";
		break;
	case 320581:
		return"江苏省苏州市常熟市";
		break;
	case 320582:
		return"江苏省苏州市张家港市";
		break;
	case 320583:
		return"江苏省苏州市昆山市";
		break;
	case 320584:
		return"江苏省苏州市吴江市";
		break;
	case 320585:
		return"江苏省苏州市太仓市";
		break;
	case 320586:
		return"江苏省苏州市吴县市";
		break;
	case 320600:
		return"江苏省南通市";
		break;
	case 320601:
		return"江苏省南通市市辖区";
		break;
	case 320602:
		return"江苏省南通市崇川区";
		break;
	case 320611:
		return"江苏省南通市港闸区";
		break;
	case 320621:
		return"江苏省南通市海安县";
		break;
	case 320623:
		return"江苏省南通市如东县";
		break;
	case 320681:
		return"江苏省南通市启东市";
		break;
	case 320682:
		return"江苏省南通市如皋市";
		break;
	case 320683:
		return"江苏省南通市通州市";
		break;
	case 320684:
		return"江苏省南通市海门市";
		break;
	case 320700:
		return"江苏省连云港市";
		break;
	case 320701:
		return"江苏省连云港市市辖区";
		break;
	case 320703:
		return"江苏省连云港市连云区";
		break;
	case 320704:
		return"江苏省连云港市云台区";
		break;
	case 320705:
		return"江苏省连云港市新浦区";
		break;
	case 320706:
		return"江苏省连云港市海州区";
		break;
	case 320721:
		return"江苏省连云港市赣榆县";
		break;
	case 320722:
		return"江苏省连云港市东海县";
		break;
	case 320723:
		return"江苏省连云港市灌云县";
		break;
	case 320724:
		return"江苏省连云港市灌南县";
		break;
	case 320800:
		return"江苏省淮阴市";
		break;
	case 320801:
		return"江苏省淮阴市市辖区";
		break;
	case 320802:
		return"江苏省淮阴市清河区";
		break;
	case 320811:
		return"江苏省淮阴市清浦区";
		break;
	case 320821:
		return"江苏省淮阴市淮阴县";
		break;
	case 320826:
		return"江苏省淮阴市涟水县";
		break;
	case 320829:
		return"江苏省淮阴市洪泽县";
		break;
	case 320830:
		return"江苏省淮阴市盱眙县";
		break;
	case 320831:
		return"江苏省淮阴市金湖县";
		break;
	case 320882:
		return"江苏省淮阴市淮安市";
		break;
	case 320900:
		return"江苏省盐城市";
		break;
	case 320901:
		return"江苏省盐城市市辖区";
		break;
	case 320902:
		return"江苏省盐城市城区";
		break;
	case 320921:
		return"江苏省盐城市响水县";
		break;
	case 320922:
		return"江苏省盐城市滨海县";
		break;
	case 320923:
		return"江苏省盐城市阜宁县";
		break;
	case 320924:
		return"江苏省盐城市射阳县";
		break;
	case 320925:
		return"江苏省盐城市建湖县";
		break;
	case 320928:
		return"江苏省盐城市盐都县";
		break;
	case 320981:
		return"江苏省盐城市东台市";
		break;
	case 320982:
		return"江苏省盐城市大丰市";
		break;
	case 321000:
		return"江苏省扬州市";
		break;
	case 321001:
		return"江苏省扬州市市辖区";
		break;
	case 321002:
		return"江苏省扬州市广陵区";
		break;
	case 321011:
		return"江苏省扬州市郊区";
		break;
	case 321023:
		return"江苏省扬州市宝应县";
		break;
	case 321027:
		return"江苏省扬州市邗江县";
		break;
	case 321081:
		return"江苏省扬州市仪征市";
		break;
	case 321084:
		return"江苏省扬州市高邮市";
		break;
	case 321088:
		return"江苏省扬州市江都市";
		break;
	case 321100:
		return"江苏省镇江市";
		break;
	case 321101:
		return"江苏省镇江市市辖区";
		break;
	case 321102:
		return"江苏省镇江市京口区";
		break;
	case 321111:
		return"江苏省镇江市润州区";
		break;
	case 321121:
		return"江苏省镇江市丹徒县";
		break;
	case 321181:
		return"江苏省镇江市丹阳市";
		break;
	case 321182:
		return"江苏省镇江市扬中市";
		break;
	case 321183:
		return"江苏省镇江市句容市";
		break;
	case 321200:
		return"江苏省泰州市";
		break;
	case 321201:
		return"江苏省泰州市市辖区";
		break;
	case 321202:
		return"江苏省泰州市海陵区";
		break;
	case 321203:
		return"江苏省泰州市高港区";
		break;
	case 321281:
		return"江苏省泰州市兴化市";
		break;
	case 321282:
		return"江苏省泰州市靖江市";
		break;
	case 321283:
		return"江苏省泰州市泰兴市";
		break;
	case 321284:
		return"江苏省泰州市姜堰市";
		break;
	case 321300:
		return"江苏省宿迁市";
		break;
	case 321301:
		return"江苏省宿迁市市辖区";
		break;
	case 321302:
		return"江苏省宿迁市宿城区";
		break;
	case 321321:
		return"江苏省宿迁市宿豫县";
		break;
	case 321322:
		return"江苏省宿迁市沭阳县";
		break;
	case 321323:
		return"江苏省宿迁市泗阳县";
		break;
	case 321324:
		return"江苏省宿迁市泗洪县";
		break;
	case 330000:
		return"浙江省";
		break;
	case 330100:
		return"浙江省杭州市";
		break;
	case 330101:
		return"浙江省杭州市市辖区";
		break;
	case 330102:
		return"浙江省杭州市上城区";
		break;
	case 330103:
		return"浙江省杭州市下城区";
		break;
	case 330104:
		return"浙江省杭州市江干区";
		break;
	case 330105:
		return"浙江省杭州市拱墅区";
		break;
	case 330106:
		return"浙江省杭州市西湖区";
		break;
	case 330108:
		return"浙江省杭州市滨江区";
		break;
	case 330122:
		return"浙江省杭州市桐庐县";
		break;
	case 330127:
		return"浙江省杭州市淳安县";
		break;
	case 330181:
		return"浙江省杭州市萧山市";
		break;
	case 330182:
		return"浙江省杭州市建德市";
		break;
	case 330183:
		return"浙江省杭州市富阳市";
		break;
	case 330184:
		return"浙江省杭州市余杭市";
		break;
	case 330185:
		return"浙江省杭州市临安市";
		break;
	case 330200:
		return"浙江省宁波市";
		break;
	case 330201:
		return"浙江省宁波市市辖区";
		break;
	case 330203:
		return"浙江省宁波市海曙区";
		break;
	case 330204:
		return"浙江省宁波市江东区";
		break;
	case 330205:
		return"浙江省宁波市江北区";
		break;
	case 330206:
		return"浙江省宁波市北仑区";
		break;
	case 330211:
		return"浙江省宁波市镇海区";
		break;
	case 330225:
		return"浙江省宁波市象山县";
		break;
	case 330226:
		return"浙江省宁波市宁海县";
		break;
	case 330227:
		return"浙江省宁波市鄞县";
		break;
	case 330281:
		return"浙江省宁波市余姚市";
		break;
	case 330282:
		return"浙江省宁波市慈溪市";
		break;
	case 330283:
		return"浙江省宁波市奉化市";
		break;
	case 330300:
		return"浙江省温州市";
		break;
	case 330301:
		return"浙江省温州市市辖区";
		break;
	case 330302:
		return"浙江省温州市鹿城区";
		break;
	case 330303:
		return"浙江省温州市龙湾区";
		break;
	case 330304:
		return"浙江省温州市瓯海区";
		break;
	case 330322:
		return"浙江省温州市洞头县";
		break;
	case 330324:
		return"浙江省温州市永嘉县";
		break;
	case 330326:
		return"浙江省温州市平阳县";
		break;
	case 330327:
		return"浙江省温州市苍南县";
		break;
	case 330328:
		return"浙江省温州市文成县";
		break;
	case 330329:
		return"浙江省温州市泰顺县";
		break;
	case 330381:
		return"浙江省温州市瑞安市";
		break;
	case 330382:
		return"浙江省温州市乐清市";
		break;
	case 330400:
		return"浙江省嘉兴市";
		break;
	case 330401:
		return"浙江省嘉兴市市辖区";
		break;
	case 330402:
		return"浙江省嘉兴市秀城区";
		break;
	case 330411:
		return"浙江省嘉兴市郊区";
		break;
	case 330421:
		return"浙江省嘉兴市嘉善县";
		break;
	case 330424:
		return"浙江省嘉兴市海盐县";
		break;
	case 330481:
		return"浙江省嘉兴市海宁市";
		break;
	case 330482:
		return"浙江省嘉兴市平湖市";
		break;
	case 330483:
		return"浙江省嘉兴市桐乡市";
		break;
	case 330500:
		return"浙江省湖州市";
		break;
	case 330501:
		return"浙江省湖州市市辖区";
		break;
	case 330521:
		return"浙江省湖州市德清县";
		break;
	case 330522:
		return"浙江省湖州市长兴县";
		break;
	case 330523:
		return"浙江省湖州市安吉县";
		break;
	case 330600:
		return"浙江省绍兴市";
		break;
	case 330601:
		return"浙江省绍兴市市辖区";
		break;
	case 330602:
		return"浙江省绍兴市越城区";
		break;
	case 330621:
		return"浙江省绍兴市绍兴县";
		break;
	case 330624:
		return"浙江省绍兴市新昌县";
		break;
	case 330681:
		return"浙江省绍兴市诸暨市";
		break;
	case 330682:
		return"浙江省绍兴市上虞市";
		break;
	case 330683:
		return"浙江省绍兴市嵊州市";
		break;
	case 330700:
		return"浙江省金华市";
		break;
	case 330701:
		return"浙江省金华市市辖区";
		break;
	case 330702:
		return"浙江省金华市婺城区";
		break;
	case 330721:
		return"浙江省金华市金华县";
		break;
	case 330723:
		return"浙江省金华市武义县";
		break;
	case 330726:
		return"浙江省金华市浦江县";
		break;
	case 330727:
		return"浙江省金华市磐安县";
		break;
	case 330781:
		return"浙江省金华市兰溪市";
		break;
	case 330782:
		return"浙江省金华市义乌市";
		break;
	case 330783:
		return"浙江省金华市东阳市";
		break;
	case 330784:
		return"浙江省金华市永康市";
		break;
	case 330800:
		return"浙江省衢州市";
		break;
	case 330801:
		return"浙江省衢州市市辖区";
		break;
	case 330802:
		return"浙江省衢州市柯城区";
		break;
	case 330821:
		return"浙江省衢州市衢县";
		break;
	case 330822:
		return"浙江省衢州市常山县";
		break;
	case 330824:
		return"浙江省衢州市开化县";
		break;
	case 330825:
		return"浙江省衢州市龙游县";
		break;
	case 330881:
		return"浙江省衢州市江山市";
		break;
	case 330900:
		return"浙江省舟山市";
		break;
	case 330901:
		return"浙江省舟山市市辖区";
		break;
	case 330902:
		return"浙江省舟山市定海区";
		break;
	case 330903:
		return"浙江省舟山市普陀区";
		break;
	case 330921:
		return"浙江省舟山市岱山县";
		break;
	case 330922:
		return"浙江省舟山市嵊泗县";
		break;
	case 331000:
		return"浙江省台州市";
		break;
	case 331001:
		return"浙江省台州市市辖区";
		break;
	case 331002:
		return"浙江省台州市椒江区";
		break;
	case 331003:
		return"浙江省台州市黄岩区";
		break;
	case 331004:
		return"浙江省台州市路桥区";
		break;
	case 331021:
		return"浙江省台州市玉环县";
		break;
	case 331022:
		return"浙江省台州市三门县";
		break;
	case 331023:
		return"浙江省台州市天台县";
		break;
	case 331024:
		return"浙江省台州市仙居县";
		break;
	case 331081:
		return"浙江省台州市温岭市";
		break;
	case 331082:
		return"浙江省台州市临海市";
		break;
	case 332500:
		return"浙江省丽水地区";
		break;
	case 332501:
		return"浙江省丽水地区丽水市";
		break;
	case 332502:
		return"浙江省丽水地区龙泉市";
		break;
	case 332522:
		return"浙江省丽水地区青田县";
		break;
	case 332523:
		return"浙江省丽水地区云和县";
		break;
	case 332525:
		return"浙江省丽水地区庆元县";
		break;
	case 332526:
		return"浙江省丽水地区缙云县";
		break;
	case 332527:
		return"浙江省丽水地区遂昌县";
		break;
	case 332528:
		return"浙江省丽水地区松阳县";
		break;
	case 332529:
		return"浙江省丽水地区景宁畲族自治县";
		break;
	case 340000:
		return"安徽省";
		break;
	case 340100:
		return"安徽省合肥市";
		break;
	case 340101:
		return"安徽省合肥市市辖区";
		break;
	case 340102:
		return"安徽省合肥市东市区";
		break;
	case 340103:
		return"安徽省合肥市中市区";
		break;
	case 340104:
		return"安徽省合肥市西市区";
		break;
	case 340111:
		return"安徽省合肥市郊区";
		break;
	case 340121:
		return"安徽省合肥市长丰县";
		break;
	case 340122:
		return"安徽省合肥市肥东县";
		break;
	case 340123:
		return"安徽省合肥市肥西县";
		break;
	case 340200:
		return"安徽省芜湖市";
		break;
	case 340201:
		return"安徽省芜湖市市辖区";
		break;
	case 340202:
		return"安徽省芜湖市镜湖区";
		break;
	case 340203:
		return"安徽省芜湖市马塘区";
		break;
	case 340204:
		return"安徽省芜湖市新芜区";
		break;
	case 340207:
		return"安徽省芜湖市鸠江区";
		break;
	case 340221:
		return"安徽省芜湖市芜湖县";
		break;
	case 340222:
		return"安徽省芜湖市繁昌县";
		break;
	case 340223:
		return"安徽省芜湖市南陵县";
		break;
	case 340300:
		return"安徽省蚌埠市";
		break;
	case 340301:
		return"安徽省蚌埠市市辖区";
		break;
	case 340302:
		return"安徽省蚌埠市东市区";
		break;
	case 340303:
		return"安徽省蚌埠市中市区";
		break;
	case 340304:
		return"安徽省蚌埠市西市区";
		break;
	case 340311:
		return"安徽省蚌埠市郊区";
		break;
	case 340321:
		return"安徽省蚌埠市怀远县";
		break;
	case 340322:
		return"安徽省蚌埠市五河县";
		break;
	case 340323:
		return"安徽省蚌埠市固镇县";
		break;
	case 340400:
		return"安徽省淮南市";
		break;
	case 340401:
		return"安徽省淮南市市辖区";
		break;
	case 340402:
		return"安徽省淮南市大通区";
		break;
	case 340403:
		return"安徽省淮南市田家庵区";
		break;
	case 340404:
		return"安徽省淮南市谢家集区";
		break;
	case 340405:
		return"安徽省淮南市八公山区";
		break;
	case 340406:
		return"安徽省淮南市潘集区";
		break;
	case 340421:
		return"安徽省淮南市凤台县";
		break;
	case 340500:
		return"安徽省马鞍山市";
		break;
	case 340501:
		return"安徽省马鞍山市市辖区";
		break;
	case 340502:
		return"安徽省马鞍山市金家庄区";
		break;
	case 340503:
		return"安徽省马鞍山市花山区";
		break;
	case 340504:
		return"安徽省马鞍山市雨山区";
		break;
	case 340505:
		return"安徽省马鞍山市向山区";
		break;
	case 340521:
		return"安徽省马鞍山市当涂县";
		break;
	case 340600:
		return"安徽省淮北市";
		break;
	case 340601:
		return"安徽省淮北市市辖区";
		break;
	case 340602:
		return"安徽省淮北市杜集区";
		break;
	case 340603:
		return"安徽省淮北市相山区";
		break;
	case 340604:
		return"安徽省淮北市烈山区";
		break;
	case 340621:
		return"安徽省淮北市濉溪县";
		break;
	case 340700:
		return"安徽省铜陵市";
		break;
	case 340701:
		return"安徽省铜陵市市辖区";
		break;
	case 340702:
		return"安徽省铜陵市铜官山区";
		break;
	case 340703:
		return"安徽省铜陵市狮子山区";
		break;
	case 340711:
		return"安徽省铜陵市郊区";
		break;
	case 340721:
		return"安徽省铜陵市铜陵县";
		break;
	case 340800:
		return"安徽省安庆市";
		break;
	case 340801:
		return"安徽省安庆市市辖区";
		break;
	case 340802:
		return"安徽省安庆市迎江区";
		break;
	case 340803:
		return"安徽省安庆市大观区";
		break;
	case 340811:
		return"安徽省安庆市郊区";
		break;
	case 340822:
		return"安徽省安庆市怀宁县";
		break;
	case 340823:
		return"安徽省安庆市枞阳县";
		break;
	case 340824:
		return"安徽省安庆市潜山县";
		break;
	case 340825:
		return"安徽省安庆市太湖县";
		break;
	case 340826:
		return"安徽省安庆市宿松县";
		break;
	case 340827:
		return"安徽省安庆市望江县";
		break;
	case 340828:
		return"安徽省安庆市岳西县";
		break;
	case 340881:
		return"安徽省安庆市桐城市";
		break;
	case 341000:
		return"安徽省黄山市";
		break;
	case 341001:
		return"安徽省黄山市市辖区";
		break;
	case 341002:
		return"安徽省黄山市屯溪区";
		break;
	case 341003:
		return"安徽省黄山市黄山区";
		break;
	case 341004:
		return"安徽省黄山市徽州区";
		break;
	case 341021:
		return"安徽省黄山市歙县";
		break;
	case 341022:
		return"安徽省黄山市休宁县";
		break;
	case 341023:
		return"安徽省黄山市黟县";
		break;
	case 341024:
		return"安徽省黄山市祁门县";
		break;
	case 341100:
		return"安徽省滁州市";
		break;
	case 341101:
		return"安徽省滁州市市辖区";
		break;
	case 341102:
		return"安徽省滁州市琅琊区";
		break;
	case 341103:
		return"安徽省滁州市南谯区";
		break;
	case 341122:
		return"安徽省滁州市来安县";
		break;
	case 341124:
		return"安徽省滁州市全椒县";
		break;
	case 341125:
		return"安徽省滁州市定远县";
		break;
	case 341126:
		return"安徽省滁州市凤阳县";
		break;
	case 341181:
		return"安徽省滁州市天长市";
		break;
	case 341182:
		return"安徽省滁州市明光市";
		break;
	case 341200:
		return"安徽省阜阳市";
		break;
	case 341201:
		return"安徽省阜阳市市辖区";
		break;
	case 341202:
		return"安徽省阜阳市颍州区";
		break;
	case 341203:
		return"安徽省阜阳市颍东区";
		break;
	case 341204:
		return"安徽省阜阳市颍泉区";
		break;
	case 341221:
		return"安徽省阜阳市临泉县";
		break;
	case 341222:
		return"安徽省阜阳市太和县";
		break;
	case 341223:
		return"安徽省阜阳市涡阳县";
		break;
	case 341224:
		return"安徽省阜阳市蒙城县";
		break;
	case 341225:
		return"安徽省阜阳市阜南县";
		break;
	case 341226:
		return"安徽省阜阳市颍上县";
		break;
	case 341227:
		return"安徽省阜阳市利辛县";
		break;
	case 341281:
		return"安徽省阜阳市亳州市";
		break;
	case 341282:
		return"安徽省阜阳市界首市";
		break;
	case 341300:
		return"安徽省宿州市";
		break;
	case 341301:
		return"安徽省宿州市市辖区";
		break;
	case 341302:
		return"安徽省宿州市甬桥区";
		break;
	case 341321:
		return"安徽省宿州市砀山县";
		break;
	case 341322:
		return"安徽省宿州市萧县";
		break;
	case 341323:
		return"安徽省宿州市灵璧县";
		break;
	case 341324:
		return"安徽省宿州市泗县";
		break;
	case 342400:
		return"安徽省六安地区";
		break;
	case 342401:
		return"安徽省六安地区六安市";
		break;
	case 342422:
		return"安徽省六安地区寿县";
		break;
	case 342423:
		return"安徽省六安地区霍邱县";
		break;
	case 342425:
		return"安徽省六安地区舒城县";
		break;
	case 342426:
		return"安徽省六安地区金寨县";
		break;
	case 342427:
		return"安徽省六安地区霍山县";
		break;
	case 342500:
		return"安徽省宣城地区";
		break;
	case 342501:
		return"安徽省宣城地区宣州市";
		break;
	case 342502:
		return"安徽省宣城地区宁国市";
		break;
	case 342522:
		return"安徽省宣城地区郎溪县";
		break;
	case 342523:
		return"安徽省宣城地区广德县";
		break;
	case 342529:
		return"安徽省宣城地区泾县";
		break;
	case 342530:
		return"安徽省宣城地区旌德县";
		break;
	case 342531:
		return"安徽省宣城地区绩溪县";
		break;
	case 342600:
		return"安徽省巢湖地区";
		break;
	case 342601:
		return"安徽省巢湖地区巢湖市";
		break;
	case 342622:
		return"安徽省巢湖地区庐江县";
		break;
	case 342623:
		return"安徽省巢湖地区无为县";
		break;
	case 342625:
		return"安徽省巢湖地区含山县";
		break;
	case 342626:
		return"安徽省巢湖地区和县";
		break;
	case 342900:
		return"安徽省池州地区";
		break;
	case 342901:
		return"安徽省池州地区贵池市";
		break;
	case 342921:
		return"安徽省池州地区东至县";
		break;
	case 342922:
		return"安徽省池州地区石台县";
		break;
	case 342923:
		return"安徽省池州地区青阳县";
		break;
	case 350000:
		return"福建省";
		break;
	case 350100:
		return"福建省福州市";
		break;
	case 350101:
		return"福建省福州市市辖区";
		break;
	case 350102:
		return"福建省福州市鼓楼区";
		break;
	case 350103:
		return"福建省福州市台江区";
		break;
	case 350104:
		return"福建省福州市仓山区";
		break;
	case 350105:
		return"福建省福州市马尾区";
		break;
	case 350111:
		return"福建省福州市晋安区";
		break;
	case 350121:
		return"福建省福州市闽侯县";
		break;
	case 350122:
		return"福建省福州市连江县";
		break;
	case 350123:
		return"福建省福州市罗源县";
		break;
	case 350124:
		return"福建省福州市闽清县";
		break;
	case 350125:
		return"福建省福州市永泰县";
		break;
	case 350128:
		return"福建省福州市平潭县";
		break;
	case 350181:
		return"福建省福州市福清市";
		break;
	case 350182:
		return"福建省福州市长乐市";
		break;
	case 350200:
		return"福建省厦门市";
		break;
	case 350201:
		return"福建省厦门市市辖区";
		break;
	case 350202:
		return"福建省厦门市鼓浪屿区";
		break;
	case 350203:
		return"福建省厦门市思明区";
		break;
	case 350204:
		return"福建省厦门市开元区";
		break;
	case 350205:
		return"福建省厦门市杏林区";
		break;
	case 350206:
		return"福建省厦门市湖里区";
		break;
	case 350211:
		return"福建省厦门市集美区";
		break;
	case 350212:
		return"福建省厦门市同安区";
		break;
	case 350300:
		return"福建省莆田市";
		break;
	case 350301:
		return"福建省莆田市市辖区";
		break;
	case 350302:
		return"福建省莆田市城厢区";
		break;
	case 350303:
		return"福建省莆田市涵江区";
		break;
	case 350321:
		return"福建省莆田市莆田县";
		break;
	case 350322:
		return"福建省莆田市仙游县";
		break;
	case 350400:
		return"福建省三明市";
		break;
	case 350401:
		return"福建省三明市市辖区";
		break;
	case 350402:
		return"福建省三明市梅列区";
		break;
	case 350403:
		return"福建省三明市三元区";
		break;
	case 350421:
		return"福建省三明市明溪县";
		break;
	case 350423:
		return"福建省三明市清流县";
		break;
	case 350424:
		return"福建省三明市宁化县";
		break;
	case 350425:
		return"福建省三明市大田县";
		break;
	case 350426:
		return"福建省三明市尤溪县";
		break;
	case 350427:
		return"福建省三明市沙县";
		break;
	case 350428:
		return"福建省三明市将乐县";
		break;
	case 350429:
		return"福建省三明市泰宁县";
		break;
	case 350430:
		return"福建省三明市建宁县";
		break;
	case 350481:
		return"福建省三明市永安市";
		break;
	case 350500:
		return"福建省泉州市";
		break;
	case 350501:
		return"福建省泉州市市辖区";
		break;
	case 350502:
		return"福建省泉州市鲤城区";
		break;
	case 350503:
		return"福建省泉州市丰泽区";
		break;
	case 350504:
		return"福建省泉州市洛江区";
		break;
	case 350521:
		return"福建省泉州市惠安县";
		break;
	case 350524:
		return"福建省泉州市安溪县";
		break;
	case 350525:
		return"福建省泉州市永春县";
		break;
	case 350526:
		return"福建省泉州市德化县";
		break;
	case 350527:
		return"福建省泉州市金门县";
		break;
	case 350581:
		return"福建省泉州市石狮市";
		break;
	case 350582:
		return"福建省泉州市晋江市";
		break;
	case 350583:
		return"福建省泉州市南安市";
		break;
	case 350600:
		return"福建省漳州市";
		break;
	case 350601:
		return"福建省漳州市市辖区";
		break;
	case 350602:
		return"福建省漳州市芗城区";
		break;
	case 350603:
		return"福建省漳州市龙文区";
		break;
	case 350622:
		return"福建省漳州市云霄县";
		break;
	case 350623:
		return"福建省漳州市漳浦县";
		break;
	case 350624:
		return"福建省漳州市诏安县";
		break;
	case 350625:
		return"福建省漳州市长泰县";
		break;
	case 350626:
		return"福建省漳州市东山县";
		break;
	case 350627:
		return"福建省漳州市南靖县";
		break;
	case 350628:
		return"福建省漳州市平和县";
		break;
	case 350629:
		return"福建省漳州市华安县";
		break;
	case 350681:
		return"福建省漳州市龙海市";
		break;
	case 350700:
		return"福建省南平市";
		break;
	case 350701:
		return"福建省南平市市辖区";
		break;
	case 350702:
		return"福建省南平市延平区";
		break;
	case 350721:
		return"福建省南平市顺昌县";
		break;
	case 350722:
		return"福建省南平市浦城县";
		break;
	case 350723:
		return"福建省南平市光泽县";
		break;
	case 350724:
		return"福建省南平市松溪县";
		break;
	case 350725:
		return"福建省南平市政和县";
		break;
	case 350781:
		return"福建省南平市邵武市";
		break;
	case 350782:
		return"福建省南平市武夷山市";
		break;
	case 350783:
		return"福建省南平市建瓯市";
		break;
	case 350784:
		return"福建省南平市建阳市";
		break;
	case 350800:
		return"福建省龙岩市";
		break;
	case 350801:
		return"福建省龙岩市市辖区";
		break;
	case 350802:
		return"福建省龙岩市新罗区";
		break;
	case 350821:
		return"福建省龙岩市长汀县";
		break;
	case 350822:
		return"福建省龙岩市永定县";
		break;
	case 350823:
		return"福建省龙岩市上杭县";
		break;
	case 350824:
		return"福建省龙岩市武平县";
		break;
	case 350825:
		return"福建省龙岩市连城县";
		break;
	case 350881:
		return"福建省龙岩市漳平市";
		break;
	case 352200:
		return"福建省宁德地区";
		break;
	case 352201:
		return"福建省宁德地区宁德市";
		break;
	case 352202:
		return"福建省宁德地区福安市";
		break;
	case 352203:
		return"福建省宁德地区福鼎市";
		break;
	case 352225:
		return"福建省宁德地区霞浦县";
		break;
	case 352227:
		return"福建省宁德地区古田县";
		break;
	case 352228:
		return"福建省宁德地区屏南县";
		break;
	case 352229:
		return"福建省宁德地区寿宁县";
		break;
	case 352230:
		return"福建省宁德地区周宁县";
		break;
	case 352231:
		return"福建省宁德地区柘荣县";
		break;
	case 360000:
		return"江西省";
		break;
	case 360100:
		return"江西省南昌市";
		break;
	case 360101:
		return"江西省南昌市市辖区";
		break;
	case 360102:
		return"江西省南昌市东湖区";
		break;
	case 360103:
		return"江西省南昌市西湖区";
		break;
	case 360104:
		return"江西省南昌市青云谱区";
		break;
	case 360105:
		return"江西省南昌市湾里区";
		break;
	case 360111:
		return"江西省南昌市郊区";
		break;
	case 360121:
		return"江西省南昌市南昌县";
		break;
	case 360122:
		return"江西省南昌市新建县";
		break;
	case 360123:
		return"江西省南昌市安义县";
		break;
	case 360124:
		return"江西省南昌市进贤县";
		break;
	case 360200:
		return"江西省景德镇市";
		break;
	case 360201:
		return"江西省景德镇市市辖区";
		break;
	case 360202:
		return"江西省景德镇市昌江区";
		break;
	case 360203:
		return"江西省景德镇市珠山区";
		break;
	case 360222:
		return"江西省景德镇市浮梁县";
		break;
	case 360281:
		return"江西省景德镇市乐平市";
		break;
	case 360300:
		return"江西省萍乡市";
		break;
	case 360301:
		return"江西省萍乡市市辖区";
		break;
	case 360302:
		return"江西省萍乡市安源区";
		break;
	case 360313:
		return"江西省萍乡市湘东区";
		break;
	case 360321:
		return"江西省萍乡市莲花县";
		break;
	case 360322:
		return"江西省萍乡市上栗县";
		break;
	case 360323:
		return"江西省萍乡市芦溪县";
		break;
	case 360400:
		return"江西省九江市";
		break;
	case 360401:
		return"江西省九江市市辖区";
		break;
	case 360402:
		return"江西省九江市庐山区";
		break;
	case 360403:
		return"江西省九江市浔阳区";
		break;
	case 360421:
		return"江西省九江市九江县";
		break;
	case 360423:
		return"江西省九江市武宁县";
		break;
	case 360424:
		return"江西省九江市修水县";
		break;
	case 360425:
		return"江西省九江市永修县";
		break;
	case 360426:
		return"江西省九江市德安县";
		break;
	case 360427:
		return"江西省九江市星子县";
		break;
	case 360428:
		return"江西省九江市都昌县";
		break;
	case 360429:
		return"江西省九江市湖口县";
		break;
	case 360430:
		return"江西省九江市彭泽县";
		break;
	case 360481:
		return"江西省九江市瑞昌市";
		break;
	case 360500:
		return"江西省新余市";
		break;
	case 360501:
		return"江西省新余市市辖区";
		break;
	case 360502:
		return"江西省新余市渝水区";
		break;
	case 360521:
		return"江西省新余市分宜县";
		break;
	case 360600:
		return"江西省鹰潭市";
		break;
	case 360601:
		return"江西省鹰潭市市辖区";
		break;
	case 360602:
		return"江西省鹰潭市月湖区";
		break;
	case 360622:
		return"江西省鹰潭市余江县";
		break;
	case 360681:
		return"江西省鹰潭市贵溪市";
		break;
	case 360700:
		return"江西省赣州市";
		break;
	case 360701:
		return"江西省赣州市市辖区";
		break;
	case 360702:
		return"江西省赣州市章贡区";
		break;
	case 360721:
		return"江西省赣州市赣县";
		break;
	case 360722:
		return"江西省赣州市信丰县";
		break;
	case 360723:
		return"江西省赣州市大余县";
		break;
	case 360724:
		return"江西省赣州市上犹县";
		break;
	case 360725:
		return"江西省赣州市崇义县";
		break;
	case 360726:
		return"江西省赣州市安远县";
		break;
	case 360727:
		return"江西省赣州市龙南县";
		break;
	case 360728:
		return"江西省赣州市定南县";
		break;
	case 360729:
		return"江西省赣州市全南县";
		break;
	case 360730:
		return"江西省赣州市宁都县";
		break;
	case 360731:
		return"江西省赣州市于都县";
		break;
	case 360732:
		return"江西省赣州市兴国县";
		break;
	case 360733:
		return"江西省赣州市会昌县";
		break;
	case 360734:
		return"江西省赣州市寻乌县";
		break;
	case 360735:
		return"江西省赣州市石城县";
		break;
	case 360781:
		return"江西省赣州市瑞金市";
		break;
	case 360782:
		return"江西省赣州市南康市";
		break;
	case 362200:
		return"江西省宜春地区";
		break;
	case 362201:
		return"江西省宜春地区宜春市";
		break;
	case 362202:
		return"江西省宜春地区丰城市";
		break;
	case 362203:
		return"江西省宜春地区樟树市";
		break;
	case 362204:
		return"江西省宜春地区高安市";
		break;
	case 362226:
		return"江西省宜春地区奉新县";
		break;
	case 362227:
		return"江西省宜春地区万载县";
		break;
	case 362228:
		return"江西省宜春地区上高县";
		break;
	case 362229:
		return"江西省宜春地区宜丰县";
		break;
	case 362232:
		return"江西省宜春地区靖安县";
		break;
	case 362233:
		return"江西省宜春地区铜鼓县";
		break;
	case 362300:
		return"江西省上饶地区";
		break;
	case 362301:
		return"江西省上饶地区上饶市";
		break;
	case 362302:
		return"江西省上饶地区德兴市";
		break;
	case 362321:
		return"江西省上饶地区上饶县";
		break;
	case 362322:
		return"江西省上饶地区广丰县";
		break;
	case 362323:
		return"江西省上饶地区玉山县";
		break;
	case 362324:
		return"江西省上饶地区铅山县";
		break;
	case 362325:
		return"江西省上饶地区横峰县";
		break;
	case 362326:
		return"江西省上饶地区弋阳县";
		break;
	case 362329:
		return"江西省上饶地区余干县";
		break;
	case 362330:
		return"江西省上饶地区波阳县";
		break;
	case 362331:
		return"江西省上饶地区万年县";
		break;
	case 362334:
		return"江西省上饶地区婺源县";
		break;
	case 362400:
		return"江西省吉安地区";
		break;
	case 362401:
		return"江西省吉安地区吉安市";
		break;
	case 362402:
		return"江西省吉安地区井冈山市";
		break;
	case 362421:
		return"江西省吉安地区吉安县";
		break;
	case 362422:
		return"江西省吉安地区吉水县";
		break;
	case 362423:
		return"江西省吉安地区峡江县";
		break;
	case 362424:
		return"江西省吉安地区新干县";
		break;
	case 362425:
		return"江西省吉安地区永丰县";
		break;
	case 362426:
		return"江西省吉安地区泰和县";
		break;
	case 362427:
		return"江西省吉安地区遂川县";
		break;
	case 362428:
		return"江西省吉安地区万安县";
		break;
	case 362429:
		return"江西省吉安地区安福县";
		break;
	case 362430:
		return"江西省吉安地区永新县";
		break;
	case 362432:
		return"江西省吉安地区宁冈县";
		break;
	case 362500:
		return"江西省抚州地区";
		break;
	case 362502:
		return"江西省抚州地区临川市";
		break;
	case 362522:
		return"江西省抚州地区南城县";
		break;
	case 362523:
		return"江西省抚州地区黎川县";
		break;
	case 362524:
		return"江西省抚州地区南丰县";
		break;
	case 362525:
		return"江西省抚州地区崇仁县";
		break;
	case 362526:
		return"江西省抚州地区乐安县";
		break;
	case 362527:
		return"江西省抚州地区宜黄县";
		break;
	case 362528:
		return"江西省抚州地区金溪县";
		break;
	case 362529:
		return"江西省抚州地区资溪县";
		break;
	case 362531:
		return"江西省抚州地区东乡县";
		break;
	case 362532:
		return"江西省抚州地区广昌县";
		break;
	case 370000:
		return"山东省";
		break;
	case 370100:
		return"山东省济南市";
		break;
	case 370101:
		return"山东省济南市市辖区";
		break;
	case 370102:
		return"山东省济南市历下区";
		break;
	case 370103:
		return"山东省济南市市中区";
		break;
	case 370104:
		return"山东省济南市槐荫区";
		break;
	case 370105:
		return"山东省济南市天桥区";
		break;
	case 370112:
		return"山东省济南市历城区";
		break;
	case 370123:
		return"山东省济南市长清县";
		break;
	case 370124:
		return"山东省济南市平阴县";
		break;
	case 370125:
		return"山东省济南市济阳县";
		break;
	case 370126:
		return"山东省济南市商河县";
		break;
	case 370181:
		return"山东省济南市章丘市";
		break;
	case 370200:
		return"山东省青岛市";
		break;
	case 370201:
		return"山东省青岛市市辖区";
		break;
	case 370202:
		return"山东省青岛市市南区";
		break;
	case 370203:
		return"山东省青岛市市北区";
		break;
	case 370205:
		return"山东省青岛市四方区";
		break;
	case 370211:
		return"山东省青岛市黄岛区";
		break;
	case 370212:
		return"山东省青岛市崂山区";
		break;
	case 370213:
		return"山东省青岛市李沧区";
		break;
	case 370214:
		return"山东省青岛市城阳区";
		break;
	case 370281:
		return"山东省青岛市胶州市";
		break;
	case 370282:
		return"山东省青岛市即墨市";
		break;
	case 370283:
		return"山东省青岛市平度市";
		break;
	case 370284:
		return"山东省青岛市胶南市";
		break;
	case 370285:
		return"山东省青岛市莱西市";
		break;
	case 370300:
		return"山东省淄博市";
		break;
	case 370301:
		return"山东省淄博市市辖区";
		break;
	case 370302:
		return"山东省淄博市淄川区";
		break;
	case 370303:
		return"山东省淄博市张店区";
		break;
	case 370304:
		return"山东省淄博市博山区";
		break;
	case 370305:
		return"山东省淄博市临淄区";
		break;
	case 370306:
		return"山东省淄博市周村区";
		break;
	case 370321:
		return"山东省淄博市桓台县";
		break;
	case 370322:
		return"山东省淄博市高青县";
		break;
	case 370323:
		return"山东省淄博市沂源县";
		break;
	case 370400:
		return"山东省枣庄市";
		break;
	case 370401:
		return"山东省枣庄市市辖区";
		break;
	case 370402:
		return"山东省枣庄市市中区";
		break;
	case 370403:
		return"山东省枣庄市薛城区";
		break;
	case 370404:
		return"山东省枣庄市峄城区";
		break;
	case 370405:
		return"山东省枣庄市台儿庄区";
		break;
	case 370406:
		return"山东省枣庄市山亭区";
		break;
	case 370481:
		return"山东省枣庄市滕州市";
		break;
	case 370500:
		return"山东省东营市";
		break;
	case 370501:
		return"山东省东营市市辖区";
		break;
	case 370502:
		return"山东省东营市东营区";
		break;
	case 370503:
		return"山东省东营市河口区";
		break;
	case 370521:
		return"山东省东营市垦利县";
		break;
	case 370522:
		return"山东省东营市利津县";
		break;
	case 370523:
		return"山东省东营市广饶县";
		break;
	case 370600:
		return"山东省烟台市";
		break;
	case 370601:
		return"山东省烟台市市辖区";
		break;
	case 370602:
		return"山东省烟台市芝罘区";
		break;
	case 370611:
		return"山东省烟台市福山区";
		break;
	case 370612:
		return"山东省烟台市牟平区";
		break;
	case 370613:
		return"山东省烟台市莱山区";
		break;
	case 370634:
		return"山东省烟台市长岛县";
		break;
	case 370681:
		return"山东省烟台市龙口市";
		break;
	case 370682:
		return"山东省烟台市莱阳市";
		break;
	case 370683:
		return"山东省烟台市莱州市";
		break;
	case 370684:
		return"山东省烟台市蓬莱市";
		break;
	case 370685:
		return"山东省烟台市招远市";
		break;
	case 370686:
		return"山东省烟台市栖霞市";
		break;
	case 370687:
		return"山东省烟台市海阳市";
		break;
	case 370700:
		return"山东省潍坊市";
		break;
	case 370701:
		return"山东省潍坊市市辖区";
		break;
	case 370702:
		return"山东省潍坊市潍城区";
		break;
	case 370703:
		return"山东省潍坊市寒亭区";
		break;
	case 370704:
		return"山东省潍坊市坊子区";
		break;
	case 370705:
		return"山东省潍坊市奎文区";
		break;
	case 370724:
		return"山东省潍坊市临朐县";
		break;
	case 370725:
		return"山东省潍坊市昌乐县";
		break;
	case 370781:
		return"山东省潍坊市青州市";
		break;
	case 370782:
		return"山东省潍坊市诸城市";
		break;
	case 370783:
		return"山东省潍坊市寿光市";
		break;
	case 370784:
		return"山东省潍坊市安丘市";
		break;
	case 370785:
		return"山东省潍坊市高密市";
		break;
	case 370786:
		return"山东省潍坊市昌邑市";
		break;
	case 370800:
		return"山东省济宁市";
		break;
	case 370801:
		return"山东省济宁市市辖区";
		break;
	case 370802:
		return"山东省济宁市市中区";
		break;
	case 370811:
		return"山东省济宁市任城区";
		break;
	case 370826:
		return"山东省济宁市微山县";
		break;
	case 370827:
		return"山东省济宁市鱼台县";
		break;
	case 370828:
		return"山东省济宁市金乡县";
		break;
	case 370829:
		return"山东省济宁市嘉祥县";
		break;
	case 370830:
		return"山东省济宁市汶上县";
		break;
	case 370831:
		return"山东省济宁市泗水县";
		break;
	case 370832:
		return"山东省济宁市梁山县";
		break;
	case 370881:
		return"山东省济宁市曲阜市";
		break;
	case 370882:
		return"山东省济宁市兖州市";
		break;
	case 370883:
		return"山东省济宁市邹城市";
		break;
	case 370900:
		return"山东省泰安市";
		break;
	case 370901:
		return"山东省泰安市市辖区";
		break;
	case 370902:
		return"山东省泰安市泰山区";
		break;
	case 370911:
		return"山东省泰安市郊区";
		break;
	case 370921:
		return"山东省泰安市宁阳县";
		break;
	case 370923:
		return"山东省泰安市东平县";
		break;
	case 370982:
		return"山东省泰安市新泰市";
		break;
	case 370983:
		return"山东省泰安市肥城市";
		break;
	case 371000:
		return"山东省威海市";
		break;
	case 371001:
		return"山东省威海市市辖区";
		break;
	case 371002:
		return"山东省威海市环翠区";
		break;
	case 371081:
		return"山东省威海市文登市";
		break;
	case 371082:
		return"山东省威海市荣成市";
		break;
	case 371083:
		return"山东省威海市乳山市";
		break;
	case 371100:
		return"山东省日照市";
		break;
	case 371101:
		return"山东省日照市市辖区";
		break;
	case 371102:
		return"山东省日照市东港区";
		break;
	case 371121:
		return"山东省日照市五莲县";
		break;
	case 371122:
		return"山东省日照市莒县";
		break;
	case 371200:
		return"山东省莱芜市";
		break;
	case 371201:
		return"山东省莱芜市市辖区";
		break;
	case 371202:
		return"山东省莱芜市莱城区";
		break;
	case 371203:
		return"山东省莱芜市钢城区";
		break;
	case 371300:
		return"山东省临沂市";
		break;
	case 371301:
		return"山东省临沂市市辖区";
		break;
	case 371302:
		return"山东省临沂市兰山区";
		break;
	case 371311:
		return"山东省临沂市罗庄区";
		break;
	case 371312:
		return"山东省临沂市河东区";
		break;
	case 371321:
		return"山东省临沂市沂南县";
		break;
	case 371322:
		return"山东省临沂市郯城县";
		break;
	case 371323:
		return"山东省临沂市沂水县";
		break;
	case 371324:
		return"山东省临沂市苍山县";
		break;
	case 371325:
		return"山东省临沂市费县";
		break;
	case 371326:
		return"山东省临沂市平邑县";
		break;
	case 371327:
		return"山东省临沂市莒南县";
		break;
	case 371328:
		return"山东省临沂市蒙阴县";
		break;
	case 371329:
		return"山东省临沂市临沭县";
		break;
	case 371400:
		return"山东省德州市";
		break;
	case 371401:
		return"山东省德州市市辖区";
		break;
	case 371402:
		return"山东省德州市德城区";
		break;
	case 371421:
		return"山东省德州市陵县";
		break;
	case 371422:
		return"山东省德州市宁津县";
		break;
	case 371423:
		return"山东省德州市庆云县";
		break;
	case 371424:
		return"山东省德州市临邑县";
		break;
	case 371425:
		return"山东省德州市齐河县";
		break;
	case 371426:
		return"山东省德州市平原县";
		break;
	case 371427:
		return"山东省德州市夏津县";
		break;
	case 371428:
		return"山东省德州市武城县";
		break;
	case 371481:
		return"山东省德州市乐陵市";
		break;
	case 371482:
		return"山东省德州市禹城市";
		break;
	case 371500:
		return"山东省聊城市";
		break;
	case 371501:
		return"山东省聊城市市辖区";
		break;
	case 371502:
		return"山东省聊城市东昌府区";
		break;
	case 371521:
		return"山东省聊城市阳谷县";
		break;
	case 371522:
		return"山东省聊城市莘县";
		break;
	case 371523:
		return"山东省聊城市茌平县";
		break;
	case 371524:
		return"山东省聊城市东阿县";
		break;
	case 371525:
		return"山东省聊城市冠县";
		break;
	case 371526:
		return"山东省聊城市高唐县";
		break;
	case 371581:
		return"山东省聊城市临清市";
		break;
	case 372300:
		return"山东省滨州地区";
		break;
	case 372301:
		return"山东省滨州地区滨州市";
		break;
	case 372321:
		return"山东省滨州地区惠民县";
		break;
	case 372323:
		return"山东省滨州地区阳信县";
		break;
	case 372324:
		return"山东省滨州地区无棣县";
		break;
	case 372325:
		return"山东省滨州地区沾化县";
		break;
	case 372328:
		return"山东省滨州地区博兴县";
		break;
	case 372330:
		return"山东省滨州地区邹平县";
		break;
	case 372900:
		return"山东省菏泽地区";
		break;
	case 372901:
		return"山东省菏泽地区菏泽市";
		break;
	case 372922:
		return"山东省菏泽地区曹县";
		break;
	case 372923:
		return"山东省菏泽地区定陶县";
		break;
	case 372924:
		return"山东省菏泽地区成武县";
		break;
	case 372925:
		return"山东省菏泽地区单县";
		break;
	case 372926:
		return"山东省菏泽地区巨野县";
		break;
	case 372928:
		return"山东省菏泽地区郓城县";
		break;
	case 372929:
		return"山东省菏泽地区鄄城县";
		break;
	case 372930:
		return"山东省菏泽地区东明县";
		break;
	case 410000:
		return"河南省";
		break;
	case 410100:
		return"河南省郑州市";
		break;
	case 410101:
		return"河南省郑州市市辖区";
		break;
	case 410102:
		return"河南省郑州市中原区";
		break;
	case 410103:
		return"河南省郑州市二七区";
		break;
	case 410104:
		return"河南省郑州市管城回族区";
		break;
	case 410105:
		return"河南省郑州市金水区";
		break;
	case 410106:
		return"河南省郑州市上街区";
		break;
	case 410108:
		return"河南省郑州市邙山区";
		break;
	case 410122:
		return"河南省郑州市中牟县";
		break;
	case 410181:
		return"河南省郑州市巩义市";
		break;
	case 410182:
		return"河南省郑州市荥阳市";
		break;
	case 410183:
		return"河南省郑州市新密市";
		break;
	case 410184:
		return"河南省郑州市新郑市";
		break;
	case 410185:
		return"河南省郑州市登封市";
		break;
	case 410200:
		return"河南省开封市";
		break;
	case 410201:
		return"河南省开封市市辖区";
		break;
	case 410202:
		return"河南省开封市龙亭区";
		break;
	case 410203:
		return"河南省开封市顺河回族区";
		break;
	case 410204:
		return"河南省开封市鼓楼区";
		break;
	case 410205:
		return"河南省开封市南关区";
		break;
	case 410211:
		return"河南省开封市郊区";
		break;
	case 410221:
		return"河南省开封市杞县";
		break;
	case 410222:
		return"河南省开封市通许县";
		break;
	case 410223:
		return"河南省开封市尉氏县";
		break;
	case 410224:
		return"河南省开封市开封县";
		break;
	case 410225:
		return"河南省开封市兰考县";
		break;
	case 410300:
		return"河南省洛阳市";
		break;
	case 410301:
		return"河南省洛阳市市辖区";
		break;
	case 410302:
		return"河南省洛阳市老城区";
		break;
	case 410303:
		return"河南省洛阳市西工区";
		break;
	case 410304:
		return"河南省洛阳市廛河回族区";
		break;
	case 410305:
		return"河南省洛阳市涧西区";
		break;
	case 410306:
		return"河南省洛阳市吉利区";
		break;
	case 410311:
		return"河南省洛阳市郊区";
		break;
	case 410322:
		return"河南省洛阳市孟津县";
		break;
	case 410323:
		return"河南省洛阳市新安县";
		break;
	case 410324:
		return"河南省洛阳市栾川县";
		break;
	case 410325:
		return"河南省洛阳市嵩县";
		break;
	case 410326:
		return"河南省洛阳市汝阳县";
		break;
	case 410327:
		return"河南省洛阳市宜阳县";
		break;
	case 410328:
		return"河南省洛阳市洛宁县";
		break;
	case 410329:
		return"河南省洛阳市伊川县";
		break;
	case 410381:
		return"河南省洛阳市偃师市";
		break;
	case 410400:
		return"河南省平顶山市";
		break;
	case 410401:
		return"河南省平顶山市市辖区";
		break;
	case 410402:
		return"河南省平顶山市新华区";
		break;
	case 410403:
		return"河南省平顶山市卫东区";
		break;
	case 410404:
		return"河南省平顶山市石龙区";
		break;
	case 410411:
		return"河南省平顶山市湛河区";
		break;
	case 410421:
		return"河南省平顶山市宝丰县";
		break;
	case 410422:
		return"河南省平顶山市叶县";
		break;
	case 410423:
		return"河南省平顶山市鲁山县";
		break;
	case 410425:
		return"河南省平顶山市郏县";
		break;
	case 410481:
		return"河南省平顶山市舞钢市";
		break;
	case 410482:
		return"河南省平顶山市汝州市";
		break;
	case 410500:
		return"河南省安阳市";
		break;
	case 410501:
		return"河南省安阳市市辖区";
		break;
	case 410502:
		return"河南省安阳市文峰区";
		break;
	case 410503:
		return"河南省安阳市北关区";
		break;
	case 410504:
		return"河南省安阳市铁西区";
		break;
	case 410511:
		return"河南省安阳市郊区";
		break;
	case 410522:
		return"河南省安阳市安阳县";
		break;
	case 410523:
		return"河南省安阳市汤阴县";
		break;
	case 410526:
		return"河南省安阳市滑县";
		break;
	case 410527:
		return"河南省安阳市内黄县";
		break;
	case 410581:
		return"河南省安阳市林州市";
		break;
	case 410600:
		return"河南省鹤壁市";
		break;
	case 410601:
		return"河南省鹤壁市市辖区";
		break;
	case 410602:
		return"河南省鹤壁市鹤山区";
		break;
	case 410603:
		return"河南省鹤壁市山城区";
		break;
	case 410611:
		return"河南省鹤壁市郊区";
		break;
	case 410621:
		return"河南省鹤壁市浚县";
		break;
	case 410622:
		return"河南省鹤壁市淇县";
		break;
	case 410700:
		return"河南省新乡市";
		break;
	case 410701:
		return"河南省新乡市市辖区";
		break;
	case 410702:
		return"河南省新乡市红旗区";
		break;
	case 410703:
		return"河南省新乡市新华区";
		break;
	case 410704:
		return"河南省新乡市北站区";
		break;
	case 410711:
		return"河南省新乡市郊区";
		break;
	case 410721:
		return"河南省新乡市新乡县";
		break;
	case 410724:
		return"河南省新乡市获嘉县";
		break;
	case 410725:
		return"河南省新乡市原阳县";
		break;
	case 410726:
		return"河南省新乡市延津县";
		break;
	case 410727:
		return"河南省新乡市封丘县";
		break;
	case 410728:
		return"河南省新乡市长垣县";
		break;
	case 410781:
		return"河南省新乡市卫辉市";
		break;
	case 410782:
		return"河南省新乡市辉县市";
		break;
	case 410800:
		return"河南省焦作市";
		break;
	case 410801:
		return"河南省焦作市市辖区";
		break;
	case 410802:
		return"河南省焦作市解放区";
		break;
	case 410803:
		return"河南省焦作市中站区";
		break;
	case 410804:
		return"河南省焦作市马村区";
		break;
	case 410811:
		return"河南省焦作市山阳区";
		break;
	case 410821:
		return"河南省焦作市修武县";
		break;
	case 410822:
		return"河南省焦作市博爱县";
		break;
	case 410823:
		return"河南省焦作市武陟县";
		break;
	case 410825:
		return"河南省焦作市温县";
		break;
	case 410881:
		return"河南省焦作市济源市";
		break;
	case 410882:
		return"河南省焦作市沁阳市";
		break;
	case 410883:
		return"河南省焦作市孟州市";
		break;
	case 410900:
		return"河南省濮阳市";
		break;
	case 410901:
		return"河南省濮阳市市辖区";
		break;
	case 410902:
		return"河南省濮阳市市区";
		break;
	case 410922:
		return"河南省濮阳市清丰县";
		break;
	case 410923:
		return"河南省濮阳市南乐县";
		break;
	case 410926:
		return"河南省濮阳市范县";
		break;
	case 410927:
		return"河南省濮阳市台前县";
		break;
	case 410928:
		return"河南省濮阳市濮阳县";
		break;
	case 411000:
		return"河南省许昌市";
		break;
	case 411001:
		return"河南省许昌市市辖区";
		break;
	case 411002:
		return"河南省许昌市魏都区";
		break;
	case 411023:
		return"河南省许昌市许昌县";
		break;
	case 411024:
		return"河南省许昌市鄢陵县";
		break;
	case 411025:
		return"河南省许昌市襄城县";
		break;
	case 411081:
		return"河南省许昌市禹州市";
		break;
	case 411082:
		return"河南省许昌市长葛市";
		break;
	case 411100:
		return"河南省漯河市";
		break;
	case 411101:
		return"河南省漯河市市辖区";
		break;
	case 411102:
		return"河南省漯河市源汇区";
		break;
	case 411121:
		return"河南省漯河市舞阳县";
		break;
	case 411122:
		return"河南省漯河市临颍县";
		break;
	case 411123:
		return"河南省漯河市郾城县";
		break;
	case 411200:
		return"河南省三门峡市";
		break;
	case 411201:
		return"河南省三门峡市市辖区";
		break;
	case 411202:
		return"河南省三门峡市湖滨区";
		break;
	case 411221:
		return"河南省三门峡市渑池县";
		break;
	case 411222:
		return"河南省三门峡市陕县";
		break;
	case 411224:
		return"河南省三门峡市卢氏县";
		break;
	case 411281:
		return"河南省三门峡市义马市";
		break;
	case 411282:
		return"河南省三门峡市灵宝市";
		break;
	case 411300:
		return"河南省南阳市";
		break;
	case 411301:
		return"河南省南阳市市辖区";
		break;
	case 411302:
		return"河南省南阳市宛城区";
		break;
	case 411303:
		return"河南省南阳市卧龙区";
		break;
	case 411321:
		return"河南省南阳市南召县";
		break;
	case 411322:
		return"河南省南阳市方城县";
		break;
	case 411323:
		return"河南省南阳市西峡县";
		break;
	case 411324:
		return"河南省南阳市镇平县";
		break;
	case 411325:
		return"河南省南阳市内乡县";
		break;
	case 411326:
		return"河南省南阳市淅川县";
		break;
	case 411327:
		return"河南省南阳市社旗县";
		break;
	case 411328:
		return"河南省南阳市唐河县";
		break;
	case 411329:
		return"河南省南阳市新野县";
		break;
	case 411330:
		return"河南省南阳市桐柏县";
		break;
	case 411381:
		return"河南省南阳市邓州市";
		break;
	case 411400:
		return"河南省商丘市";
		break;
	case 411401:
		return"河南省商丘市市辖区";
		break;
	case 411402:
		return"河南省商丘市梁园区";
		break;
	case 411403:
		return"河南省商丘市睢阳区";
		break;
	case 411421:
		return"河南省商丘市民权县";
		break;
	case 411422:
		return"河南省商丘市睢县";
		break;
	case 411423:
		return"河南省商丘市宁陵县";
		break;
	case 411424:
		return"河南省商丘市柘城县";
		break;
	case 411425:
		return"河南省商丘市虞城县";
		break;
	case 411426:
		return"河南省商丘市夏邑县";
		break;
	case 411481:
		return"河南省商丘市永城市";
		break;
	case 411500:
		return"河南省信阳市";
		break;
	case 411501:
		return"河南省信阳市市辖区";
		break;
	case 411502:
		return"河南省信阳市师河区";
		break;
	case 411503:
		return"河南省信阳市平桥区";
		break;
	case 411521:
		return"河南省信阳市罗山县";
		break;
	case 411522:
		return"河南省信阳市光山县";
		break;
	case 411523:
		return"河南省信阳市新县";
		break;
	case 411524:
		return"河南省信阳市商城县";
		break;
	case 411525:
		return"河南省信阳市固始县";
		break;
	case 411526:
		return"河南省信阳市潢川县";
		break;
	case 411527:
		return"河南省信阳市淮滨县";
		break;
	case 411528:
		return"河南省信阳市息县";
		break;
	case 412700:
		return"河南省周口地区";
		break;
	case 412701:
		return"河南省周口地区周口市";
		break;
	case 412702:
		return"河南省周口地区项城市";
		break;
	case 412721:
		return"河南省周口地区扶沟县";
		break;
	case 412722:
		return"河南省周口地区西华县";
		break;
	case 412723:
		return"河南省周口地区商水县";
		break;
	case 412724:
		return"河南省周口地区太康县";
		break;
	case 412725:
		return"河南省周口地区鹿邑县";
		break;
	case 412726:
		return"河南省周口地区郸城县";
		break;
	case 412727:
		return"河南省周口地区淮阳县";
		break;
	case 412728:
		return"河南省周口地区沈丘县";
		break;
	case 412800:
		return"河南省驻马店地区";
		break;
	case 412801:
		return"河南省驻马店地区驻马店市";
		break;
	case 412821:
		return"河南省驻马店地区确山县";
		break;
	case 412822:
		return"河南省驻马店地区泌阳县";
		break;
	case 412823:
		return"河南省驻马店地区遂平县";
		break;
	case 412824:
		return"河南省驻马店地区西平县";
		break;
	case 412825:
		return"河南省驻马店地区上蔡县";
		break;
	case 412826:
		return"河南省驻马店地区汝南县";
		break;
	case 412827:
		return"河南省驻马店地区平舆县";
		break;
	case 412828:
		return"河南省驻马店地区新蔡县";
		break;
	case 412829:
		return"河南省驻马店地区正阳县";
		break;
	case 420000:
		return"湖北省";
		break;
	case 420100:
		return"湖北省武汉市";
		break;
	case 420101:
		return"湖北省武汉市市辖区";
		break;
	case 420102:
		return"湖北省武汉市江岸区";
		break;
	case 420103:
		return"湖北省武汉市江汉区";
		break;
	case 420104:
		return"湖北省武汉市乔口区";
		break;
	case 420105:
		return"湖北省武汉市汉阳区";
		break;
	case 420106:
		return"湖北省武汉市武昌区";
		break;
	case 420107:
		return"湖北省武汉市青山区";
		break;
	case 420111:
		return"湖北省武汉市洪山区";
		break;
	case 420112:
		return"湖北省武汉市东西湖区";
		break;
	case 420113:
		return"湖北省武汉市汉南区";
		break;
	case 420114:
		return"湖北省武汉市蔡甸区";
		break;
	case 420115:
		return"湖北省武汉市江夏区";
		break;
	case 420116:
		return"湖北省武汉市黄陂区";
		break;
	case 420117:
		return"湖北省武汉市新洲区";
		break;
	case 420200:
		return"湖北省黄石市";
		break;
	case 420201:
		return"湖北省黄石市市辖区";
		break;
	case 420202:
		return"湖北省黄石市黄石港区";
		break;
	case 420203:
		return"湖北省黄石市石灰窑区";
		break;
	case 420204:
		return"湖北省黄石市下陆区";
		break;
	case 420205:
		return"湖北省黄石市铁山区";
		break;
	case 420222:
		return"湖北省黄石市阳新县";
		break;
	case 420281:
		return"湖北省黄石市大冶市";
		break;
	case 420300:
		return"湖北省十堰市";
		break;
	case 420301:
		return"湖北省十堰市市辖区";
		break;
	case 420302:
		return"湖北省十堰市茅箭区";
		break;
	case 420303:
		return"湖北省十堰市张湾区";
		break;
	case 420321:
		return"湖北省十堰市郧县";
		break;
	case 420322:
		return"湖北省十堰市郧西县";
		break;
	case 420323:
		return"湖北省十堰市竹山县";
		break;
	case 420324:
		return"湖北省十堰市竹溪县";
		break;
	case 420325:
		return"湖北省十堰市房县";
		break;
	case 420381:
		return"湖北省十堰市丹江口市";
		break;
	case 420500:
		return"湖北省宜昌市";
		break;
	case 420501:
		return"湖北省宜昌市市辖区";
		break;
	case 420502:
		return"湖北省宜昌市西陵区";
		break;
	case 420503:
		return"湖北省宜昌市伍家岗区";
		break;
	case 420504:
		return"湖北省宜昌市点军区";
		break;
	case 420505:
		return"湖北省宜昌市虎亭区";
		break;
	case 420521:
		return"湖北省宜昌市宜昌县";
		break;
	case 420525:
		return"湖北省宜昌市远安县";
		break;
	case 420526:
		return"湖北省宜昌市兴山县";
		break;
	case 420527:
		return"湖北省宜昌市秭归县";
		break;
	case 420528:
		return"湖北省宜昌市长阳土家族自治县";
		break;
	case 420529:
		return"湖北省宜昌市五峰土家族自治县";
		break;
	case 420581:
		return"湖北省宜昌市宜都市";
		break;
	case 420582:
		return"湖北省宜昌市当阳市";
		break;
	case 420583:
		return"湖北省宜昌市枝江市";
		break;
	case 420600:
		return"湖北省襄樊市";
		break;
	case 420601:
		return"湖北省襄樊市市辖区";
		break;
	case 420602:
		return"湖北省襄樊市襄城区";
		break;
	case 420606:
		return"湖北省襄樊市樊城区";
		break;
	case 420621:
		return"湖北省襄樊市襄阳县";
		break;
	case 420624:
		return"湖北省襄樊市南漳县";
		break;
	case 420625:
		return"湖北省襄樊市谷城县";
		break;
	case 420626:
		return"湖北省襄樊市保康县";
		break;
	case 420682:
		return"湖北省襄樊市老河口市";
		break;
	case 420683:
		return"湖北省襄樊市枣阳市";
		break;
	case 420684:
		return"湖北省襄樊市宜城市";
		break;
	case 420700:
		return"湖北省鄂州市";
		break;
	case 420701:
		return"湖北省鄂州市市辖区";
		break;
	case 420702:
		return"湖北省鄂州市梁子湖区";
		break;
	case 420703:
		return"湖北省鄂州市华容区";
		break;
	case 420704:
		return"湖北省鄂州市鄂城区";
		break;
	case 420800:
		return"湖北省荆门市";
		break;
	case 420801:
		return"湖北省荆门市市辖区";
		break;
	case 420802:
		return"湖北省荆门市东宝区";
		break;
	case 420821:
		return"湖北省荆门市京山县";
		break;
	case 420822:
		return"湖北省荆门市沙洋县";
		break;
	case 420881:
		return"湖北省荆门市钟祥市";
		break;
	case 420900:
		return"湖北省孝感市";
		break;
	case 420901:
		return"湖北省孝感市市辖区";
		break;
	case 420902:
		return"湖北省孝感市孝南区";
		break;
	case 420921:
		return"湖北省孝感市孝昌县";
		break;
	case 420922:
		return"湖北省孝感市大悟县";
		break;
	case 420923:
		return"湖北省孝感市云梦县";
		break;
	case 420981:
		return"湖北省孝感市应城市";
		break;
	case 420982:
		return"湖北省孝感市安陆市";
		break;
	case 420983:
		return"湖北省孝感市广水市";
		break;
	case 420984:
		return"湖北省孝感市汉川市";
		break;
	case 421000:
		return"湖北省荆州市";
		break;
	case 421001:
		return"湖北省荆州市市辖区";
		break;
	case 421002:
		return"湖北省荆州市沙市区";
		break;
	case 421003:
		return"湖北省荆州市荆州区";
		break;
	case 421022:
		return"湖北省荆州市公安县";
		break;
	case 421023:
		return"湖北省荆州市监利县";
		break;
	case 421024:
		return"湖北省荆州市江陵县";
		break;
	case 421081:
		return"湖北省荆州市石首市";
		break;
	case 421083:
		return"湖北省荆州市洪湖市";
		break;
	case 421087:
		return"湖北省荆州市松滋市";
		break;
	case 421100:
		return"湖北省黄冈市";
		break;
	case 421101:
		return"湖北省黄冈市市辖区";
		break;
	case 421102:
		return"湖北省黄冈市黄州区";
		break;
	case 421121:
		return"湖北省黄冈市团风县";
		break;
	case 421122:
		return"湖北省黄冈市红安县";
		break;
	case 421123:
		return"湖北省黄冈市罗田县";
		break;
	case 421124:
		return"湖北省黄冈市英山县";
		break;
	case 421125:
		return"湖北省黄冈市浠水县";
		break;
	case 421126:
		return"湖北省黄冈市蕲春县";
		break;
	case 421127:
		return"湖北省黄冈市黄梅县";
		break;
	case 421181:
		return"湖北省黄冈市麻城市";
		break;
	case 421182:
		return"湖北省黄冈市武穴市";
		break;
	case 421200:
		return"湖北省咸宁市";
		break;
	case 421201:
		return"湖北省咸宁市市辖区";
		break;
	case 421202:
		return"湖北省咸宁市咸安区";
		break;
	case 421221:
		return"湖北省咸宁市嘉鱼县";
		break;
	case 421222:
		return"湖北省咸宁市通城县";
		break;
	case 421223:
		return"湖北省咸宁市崇阳县";
		break;
	case 421224:
		return"湖北省咸宁市通山县";
		break;
	case 422800:
		return"湖北省施土家族苗族自治州";
		break;
	case 422801:
		return"湖北省恩施土家族苗族自治州恩施县";
		break;
	case 422802:
		return"湖北省恩施土家族苗族自治州利川市";
		break;
	case 422822:
		return"湖北省恩施土家族苗族自治州建始县";
		break;
	case 422823:
		return"湖北省恩施土家族苗族自治州巴东县";
		break;
	case 422825:
		return"湖北省恩施土家族苗族自治州宣恩县";
		break;
	case 422826:
		return"湖北省恩施土家族苗族自治州咸丰县";
		break;
	case 422827:
		return"湖北省恩施土家族苗族自治州来凤县";
		break;
	case 422828:
		return"湖北省恩施土家族苗族自治州鹤峰县";
		break;
	case 429000:
		return"湖北省省直辖县级行政单位";
		break;
	case 429001:
		return"湖北省随州市";
		break;
	case 429004:
		return"湖北省仙桃市";
		break;
	case 429005:
		return"湖北省潜江市";
		break;
	case 429006:
		return"湖北省天门市";
		break;
	case 429021:
		return"湖北省神农架林区";
		break;
	case 430000:
		return"湖南省";
		break;
	case 430100:
		return"湖南省长沙市";
		break;
	case 430101:
		return"湖南省长沙市市辖区";
		break;
	case 430102:
		return"湖南省长沙市芙蓉区";
		break;
	case 430103:
		return"湖南省长沙市天心区";
		break;
	case 430104:
		return"湖南省长沙市岳麓区";
		break;
	case 430105:
		return"湖南省长沙市开福区";
		break;
	case 430111:
		return"湖南省长沙市雨花区";
		break;
	case 430121:
		return"湖南省长沙市长沙县";
		break;
	case 430122:
		return"湖南省长沙市望城县";
		break;
	case 430124:
		return"湖南省长沙市宁乡县";
		break;
	case 430181:
		return"湖南省长沙市浏阳市";
		break;
	case 430200:
		return"湖南省株洲市";
		break;
	case 430201:
		return"湖南省株洲市市辖区";
		break;
	case 430202:
		return"湖南省株洲市荷塘区";
		break;
	case 430203:
		return"湖南省株洲市芦淞区";
		break;
	case 430204:
		return"湖南省株洲市石峰区";
		break;
	case 430211:
		return"湖南省株洲市天元区";
		break;
	case 430221:
		return"湖南省株洲市株洲县";
		break;
	case 430223:
		return"湖南省株洲市攸县";
		break;
	case 430224:
		return"湖南省株洲市茶陵县";
		break;
	case 430225:
		return"湖南省株洲市炎陵县";
		break;
	case 430281:
		return"湖南省株洲市醴陵市";
		break;
	case 430300:
		return"湖南省湘潭市";
		break;
	case 430301:
		return"湖南省湘潭市市辖区";
		break;
	case 430302:
		return"湖南省湘潭市雨湖区";
		break;
	case 430304:
		return"湖南省湘潭市岳塘区";
		break;
	case 430321:
		return"湖南省湘潭市湘潭县";
		break;
	case 430381:
		return"湖南省湘潭市湘乡市";
		break;
	case 430382:
		return"湖南省湘潭市韶山市";
		break;
	case 430400:
		return"湖南省衡阳市";
		break;
	case 430401:
		return"湖南省衡阳市市辖区";
		break;
	case 430402:
		return"湖南省衡阳市江东区";
		break;
	case 430403:
		return"湖南省衡阳市城南区";
		break;
	case 430404:
		return"湖南省衡阳市城北区";
		break;
	case 430411:
		return"湖南省衡阳市郊区";
		break;
	case 430412:
		return"湖南省衡阳市南岳区";
		break;
	case 430421:
		return"湖南省衡阳市衡阳县";
		break;
	case 430422:
		return"湖南省衡阳市衡南县";
		break;
	case 430423:
		return"湖南省衡阳市衡山县";
		break;
	case 430424:
		return"湖南省衡阳市衡东县";
		break;
	case 430426:
		return"湖南省衡阳市祁东县";
		break;
	case 430481:
		return"湖南省衡阳市耒阳市";
		break;
	case 430482:
		return"湖南省衡阳市常宁市";
		break;
	case 430500:
		return"湖南省邵阳市";
		break;
	case 430501:
		return"湖南省邵阳市市辖区";
		break;
	case 430502:
		return"湖南省邵阳市双清区";
		break;
	case 430503:
		return"湖南省邵阳市大祥区";
		break;
	case 430511:
		return"湖南省邵阳市北塔区";
		break;
	case 430521:
		return"湖南省邵阳市邵东县";
		break;
	case 430522:
		return"湖南省邵阳市新邵县";
		break;
	case 430523:
		return"湖南省邵阳市邵阳县";
		break;
	case 430524:
		return"湖南省邵阳市隆回县";
		break;
	case 430525:
		return"湖南省邵阳市洞口县";
		break;
	case 430527:
		return"湖南省邵阳市绥宁县";
		break;
	case 430528:
		return"湖南省邵阳市新宁县";
		break;
	case 430529:
		return"湖南省邵阳市城步苗族自治县";
		break;
	case 430581:
		return"湖南省邵阳市武冈市";
		break;
	case 430600:
		return"湖南省岳阳市";
		break;
	case 430601:
		return"湖南省岳阳市市辖区";
		break;
	case 430602:
		return"湖南省岳阳市岳阳楼区";
		break;
	case 430603:
		return"湖南省岳阳市云溪区";
		break;
	case 430611:
		return"湖南省岳阳市君山区";
		break;
	case 430621:
		return"湖南省岳阳市岳阳县";
		break;
	case 430623:
		return"湖南省岳阳市华容县";
		break;
	case 430624:
		return"湖南省岳阳市湘阴县";
		break;
	case 430626:
		return"湖南省岳阳市平江县";
		break;
	case 430681:
		return"湖南省岳阳市汨罗市";
		break;
	case 430682:
		return"湖南省岳阳市临湘市";
		break;
	case 430700:
		return"湖南省常德市";
		break;
	case 430701:
		return"湖南省常德市市辖区";
		break;
	case 430702:
		return"湖南省常德市武陵区";
		break;
	case 430703:
		return"湖南省常德市鼎城区";
		break;
	case 430721:
		return"湖南省常德市安乡县";
		break;
	case 430722:
		return"湖南省常德市汉寿县";
		break;
	case 430723:
		return"湖南省常德市澧县";
		break;
	case 430724:
		return"湖南省常德市临澧县";
		break;
	case 430725:
		return"湖南省常德市桃源县";
		break;
	case 430726:
		return"湖南省常德市石门县";
		break;
	case 430781:
		return"湖南省常德市津市市";
		break;
	case 430800:
		return"湖南省张家界市";
		break;
	case 430801:
		return"湖南省张家界市市辖区";
		break;
	case 430802:
		return"湖南省张家界市永定区";
		break;
	case 430811:
		return"湖南省张家界市武陵源区";
		break;
	case 430821:
		return"湖南省张家界市慈利县";
		break;
	case 430822:
		return"湖南省张家界市桑植县";
		break;
	case 430900:
		return"湖南省益阳市";
		break;
	case 430901:
		return"湖南省益阳市市辖区";
		break;
	case 430902:
		return"湖南省益阳市资阳区";
		break;
	case 430903:
		return"湖南省益阳市赫山区";
		break;
	case 430921:
		return"湖南省益阳市南县";
		break;
	case 430922:
		return"湖南省益阳市桃江县";
		break;
	case 430923:
		return"湖南省益阳市安化县";
		break;
	case 430981:
		return"湖南省益阳市沅江市";
		break;
	case 431000:
		return"湖南省郴州市";
		break;
	case 431001:
		return"湖南省郴州市市辖区";
		break;
	case 431002:
		return"湖南省郴州市北湖区";
		break;
	case 431003:
		return"湖南省郴州市苏仙区";
		break;
	case 431021:
		return"湖南省郴州市桂阳县";
		break;
	case 431022:
		return"湖南省郴州市宜章县";
		break;
	case 431023:
		return"湖南省郴州市永兴县";
		break;
	case 431024:
		return"湖南省郴州市嘉禾县";
		break;
	case 431025:
		return"湖南省郴州市临武县";
		break;
	case 431026:
		return"湖南省郴州市汝城县";
		break;
	case 431027:
		return"湖南省郴州市桂东县";
		break;
	case 431028:
		return"湖南省郴州市安仁县";
		break;
	case 431081:
		return"湖南省郴州市资兴市";
		break;
	case 431100:
		return"湖南省永州市";
		break;
	case 431101:
		return"湖南省永州市市辖区";
		break;
	case 431102:
		return"湖南省永州市芝山区";
		break;
	case 431103:
		return"湖南省永州市冷水滩区";
		break;
	case 431121:
		return"湖南省永州市祁阳县";
		break;
	case 431122:
		return"湖南省永州市东安县";
		break;
	case 431123:
		return"湖南省永州市双牌县";
		break;
	case 431124:
		return"湖南省永州市道县";
		break;
	case 431125:
		return"湖南省永州市江永县";
		break;
	case 431126:
		return"湖南省永州市宁远县";
		break;
	case 431127:
		return"湖南省永州市蓝山县";
		break;
	case 431128:
		return"湖南省永州市新田县";
		break;
	case 431129:
		return"湖南省永州市江华瑶族自治县";
		break;
	case 431200:
		return"湖南省怀化市";
		break;
	case 431201:
		return"湖南省怀化市市辖区";
		break;
	case 431202:
		return"湖南省怀化市鹤城区";
		break;
	case 431221:
		return"湖南省怀化市中方县";
		break;
	case 431222:
		return"湖南省怀化市沅陵县";
		break;
	case 431223:
		return"湖南省怀化市辰溪县";
		break;
	case 431224:
		return"湖南省怀化市溆浦县";
		break;
	case 431225:
		return"湖南省怀化市会同县";
		break;
	case 431226:
		return"湖南省怀化市麻阳苗族自治县";
		break;
	case 431227:
		return"湖南省怀化市新晃侗族自治县";
		break;
	case 431228:
		return"湖南省怀化市芷江侗族自治县";
		break;
	case 431229:
		return"湖南省怀化市靖州苗族侗族自治县";
		break;
	case 431230:
		return"湖南省怀化市通道侗族自治县";
		break;
	case 431281:
		return"湖南省怀化市洪江市";
		break;
	case 432500:
		return"湖南省娄底地区";
		break;
	case 432501:
		return"湖南省娄底地区娄底市";
		break;
	case 432502:
		return"湖南省娄底地区冷水江市";
		break;
	case 432503:
		return"湖南省娄底地区涟源市";
		break;
	case 432522:
		return"湖南省娄底地区双峰县";
		break;
	case 432524:
		return"湖南省娄底地区新化县";
		break;
	case 433000:
		return"湖南省怀化市";
		break;
	case 433001:
		return"湖南省怀化市";
		break;
	case 433100:
		return"湖南省湘西土家族苗族自治州";
		break;
	case 433101:
		return"湖南省湘西土家族苗族自治州吉首市";
		break;
	case 433122:
		return"湖南省湘西土家族苗族自治州泸溪县";
		break;
	case 433123:
		return"湖南省湘西土家族苗族自治州凤凰县";
		break;
	case 433124:
		return"湖南省湘西土家族苗族自治州花垣县";
		break;
	case 433125:
		return"湖南省湘西土家族苗族自治州保靖县";
		break;
	case 433126:
		return"湖南省湘西土家族苗族自治州古丈县";
		break;
	case 433127:
		return"湖南省湘西土家族苗族自治州永顺县";
		break;
	case 433130:
		return"湖南省湘西土家族苗族自治州龙山县";
		break;
	case 440000:
		return"广东省";
		break;
	case 440100:
		return"广东省广州市";
		break;
	case 440101:
		return"广东省广州市市辖区";
		break;
	case 440102:
		return"广东省广州市东山区";
		break;
	case 440103:
		return"广东省广州市荔湾区";
		break;
	case 440104:
		return"广东省广州市越秀区";
		break;
	case 440105:
		return"广东省广州市海珠区";
		break;
	case 440106:
		return"广东省广州市天河区";
		break;
	case 440107:
		return"广东省广州市芳村区";
		break;
	case 440111:
		return"广东省广州市白云区";
		break;
	case 440112:
		return"广东省广州市黄埔区";
		break;
	case 440181:
		return"广东省广州市番禺市";
		break;
	case 440182:
		return"广东省广州市花都市";
		break;
	case 440183:
		return"广东省广州市增城市";
		break;
	case 440184:
		return"广东省广州市从化市";
		break;
	case 440200:
		return"广东省韶关市";
		break;
	case 440201:
		return"广东省韶关市市辖区";
		break;
	case 440202:
		return"广东省韶关市北江区";
		break;
	case 440203:
		return"广东省韶关市武江区";
		break;
	case 440204:
		return"广东省韶关市浈江区";
		break;
	case 440221:
		return"广东省韶关市曲江县";
		break;
	case 440222:
		return"广东省韶关市始兴县";
		break;
	case 440224:
		return"广东省韶关市仁化县";
		break;
	case 440229:
		return"广东省韶关市翁源县";
		break;
	case 440232:
		return"广东省韶关市乳源瑶族自治县";
		break;
	case 440233:
		return"广东省韶关市新丰县";
		break;
	case 440281:
		return"广东省韶关市乐昌市";
		break;
	case 440282:
		return"广东省韶关市南雄市";
		break;
	case 440300:
		return"广东省深圳市";
		break;
	case 440301:
		return"广东省深圳市市辖区";
		break;
	case 440303:
		return"广东省深圳市罗湖区";
		break;
	case 440304:
		return"广东省深圳市福田区";
		break;
	case 440305:
		return"广东省深圳市南山区";
		break;
	case 440306:
		return"广东省深圳市宝安区";
		break;
	case 440307:
		return"广东省深圳市龙岗区";
		break;
	case 440308:
		return"广东省深圳市盐田区";
		break;
	case 440400:
		return"广东省珠海市";
		break;
	case 440401:
		return"广东省珠海市市辖区";
		break;
	case 440402:
		return"广东省珠海市香洲区";
		break;
	case 440421:
		return"广东省珠海市斗门县";
		break;
	case 440500:
		return"广东省汕头市";
		break;
	case 440501:
		return"广东省汕头市市辖区";
		break;
	case 440506:
		return"广东省汕头市达濠区";
		break;
	case 440507:
		return"广东省汕头市龙湖区";
		break;
	case 440508:
		return"广东省汕头市金园区";
		break;
	case 440509:
		return"广东省汕头市升平区";
		break;
	case 440510:
		return"广东省汕头市河浦区";
		break;
	case 440523:
		return"广东省汕头市南澳县";
		break;
	case 440582:
		return"广东省汕头市潮阳市";
		break;
	case 440583:
		return"广东省汕头市澄海市";
		break;
	case 440600:
		return"广东省佛山市";
		break;
	case 440601:
		return"广东省佛山市市辖区";
		break;
	case 440602:
		return"广东省佛山市城区";
		break;
	case 440603:
		return"广东省佛山市石湾区";
		break;
	case 440681:
		return"广东省佛山市顺德市";
		break;
	case 440682:
		return"广东省佛山市南海市";
		break;
	case 440683:
		return"广东省佛山市三水市";
		break;
	case 440684:
		return"广东省佛山市高明市";
		break;
	case 440700:
		return"广东省江门市";
		break;
	case 440701:
		return"广东省江门市市辖区";
		break;
	case 440703:
		return"广东省江门市蓬江区";
		break;
	case 440704:
		return"广东省江门市江海区";
		break;
	case 440781:
		return"广东省江门市台山市";
		break;
	case 440782:
		return"广东省江门市新会市";
		break;
	case 440783:
		return"广东省江门市开平市";
		break;
	case 440784:
		return"广东省江门市鹤山市";
		break;
	case 440785:
		return"广东省江门市恩平市";
		break;
	case 440800:
		return"广东省湛江市";
		break;
	case 440801:
		return"广东省湛江市市辖区";
		break;
	case 440802:
		return"广东省湛江市赤坎区";
		break;
	case 440803:
		return"广东省湛江市霞山区";
		break;
	case 440804:
		return"广东省湛江市坡头区";
		break;
	case 440811:
		return"广东省湛江市麻章区";
		break;
	case 440823:
		return"广东省湛江市遂溪县";
		break;
	case 440825:
		return"广东省湛江市徐闻县";
		break;
	case 440881:
		return"广东省湛江市廉江市";
		break;
	case 440882:
		return"广东省湛江市雷州市";
		break;
	case 440883:
		return"广东省湛江市吴川市";
		break;
	case 440900:
		return"广东省茂名市";
		break;
	case 440901:
		return"广东省茂名市市辖区";
		break;
	case 440902:
		return"广东省茂名市茂南区";
		break;
	case 440923:
		return"广东省茂名市电白县";
		break;
	case 440981:
		return"广东省茂名市高州市";
		break;
	case 440982:
		return"广东省茂名市化州市";
		break;
	case 440983:
		return"广东省茂名市信宜市";
		break;
	case 441200:
		return"广东省肇庆市";
		break;
	case 441201:
		return"广东省肇庆市市辖区";
		break;
	case 441202:
		return"广东省肇庆市端州区";
		break;
	case 441203:
		return"广东省肇庆市鼎湖区";
		break;
	case 441223:
		return"广东省肇庆市广宁县";
		break;
	case 441224:
		return"广东省肇庆市怀集县";
		break;
	case 441225:
		return"广东省肇庆市封开县";
		break;
	case 441226:
		return"广东省肇庆市德庆县";
		break;
	case 441283:
		return"广东省肇庆市高要市";
		break;
	case 441284:
		return"广东省肇庆市四会市";
		break;
	case 441300:
		return"广东省惠州市";
		break;
	case 441301:
		return"广东省惠州市市辖区";
		break;
	case 441302:
		return"广东省惠州市惠城区";
		break;
	case 441322:
		return"广东省惠州市博罗县";
		break;
	case 441323:
		return"广东省惠州市惠东县";
		break;
	case 441324:
		return"广东省惠州市龙门县";
		break;
	case 441381:
		return"广东省惠州市惠阳市";
		break;
	case 441400:
		return"广东省梅州市";
		break;
	case 441401:
		return"广东省梅州市市辖区";
		break;
	case 441402:
		return"广东省梅州市梅江区";
		break;
	case 441421:
		return"广东省梅州市梅县";
		break;
	case 441422:
		return"广东省梅州市大埔县";
		break;
	case 441423:
		return"广东省梅州市丰顺县";
		break;
	case 441424:
		return"广东省梅州市五华县";
		break;
	case 441426:
		return"广东省梅州市平远县";
		break;
	case 441427:
		return"广东省梅州市蕉岭县";
		break;
	case 441481:
		return"广东省梅州市兴宁市";
		break;
	case 441500:
		return"广东省汕尾市";
		break;
	case 441501:
		return"广东省汕尾市市辖区";
		break;
	case 441502:
		return"广东省汕尾市城区";
		break;
	case 441521:
		return"广东省汕尾市海丰县";
		break;
	case 441523:
		return"广东省汕尾市陆河县";
		break;
	case 441581:
		return"广东省汕尾市陆丰市";
		break;
	case 441600:
		return"广东省河源市";
		break;
	case 441601:
		return"广东省河源市市辖区";
		break;
	case 441602:
		return"广东省河源市源城区";
		break;
	case 441621:
		return"广东省河源市紫金县";
		break;
	case 441622:
		return"广东省河源市龙川县";
		break;
	case 441623:
		return"广东省河源市连平县";
		break;
	case 441624:
		return"广东省河源市和平县";
		break;
	case 441625:
		return"广东省河源市东源县";
		break;
	case 441700:
		return"广东省阳江市";
		break;
	case 441701:
		return"广东省阳江市市辖区";
		break;
	case 441702:
		return"广东省阳江市江城区";
		break;
	case 441721:
		return"广东省阳江市阳西县";
		break;
	case 441723:
		return"广东省阳江市阳东县";
		break;
	case 441781:
		return"广东省阳江市阳春市";
		break;
	case 441800:
		return"广东省清远市";
		break;
	case 441801:
		return"广东省清远市市辖区";
		break;
	case 441802:
		return"广东省清远市清城区";
		break;
	case 441821:
		return"广东省清远市佛冈县";
		break;
	case 441823:
		return"广东省清远市阳山县";
		break;
	case 441825:
		return"广东省清远市连山壮族瑶族自治县";
		break;
	case 441826:
		return"广东省清远市连南瑶族自治县";
		break;
	case 441827:
		return"广东省清远市清新县";
		break;
	case 441881:
		return"广东省清远市英德市";
		break;
	case 441882:
		return"广东省清远市连州市";
		break;
	case 441900:
		return"广东省东莞市";
		break;
	case 441901:
		return"广东省东莞市市辖区";
		break;
	case 442000:
		return"广东省中山市";
		break;
	case 442001:
		return"广东省中山市市辖区";
		break;
	case 445100:
		return"广东省潮州市";
		break;
	case 445101:
		return"广东省潮州市市辖区";
		break;
	case 445102:
		return"广东省潮州市湘桥区";
		break;
	case 445121:
		return"广东省潮州市潮安县";
		break;
	case 445122:
		return"广东省潮州市饶平县";
		break;
	case 445200:
		return"广东省揭阳市";
		break;
	case 445201:
		return"广东省揭阳市市辖区";
		break;
	case 445202:
		return"广东省揭阳市榕城区";
		break;
	case 445221:
		return"广东省揭阳市揭东县";
		break;
	case 445222:
		return"广东省揭阳市揭西县";
		break;
	case 445224:
		return"广东省揭阳市惠来县";
		break;
	case 445281:
		return"广东省揭阳市普宁市";
		break;
	case 445300:
		return"广东省云浮市";
		break;
	case 445301:
		return"广东省云浮市市辖区";
		break;
	case 445302:
		return"广东省云浮市云城区";
		break;
	case 445321:
		return"广东省云浮市新兴县";
		break;
	case 445322:
		return"广东省云浮市郁南县";
		break;
	case 445323:
		return"广东省云浮市云安县";
		break;
	case 445381:
		return"广东省云浮市罗定市";
		break;
	case 450000:
		return"广西壮族自治区";
		break;
	case 450100:
		return"广西壮族自治区南宁市";
		break;
	case 450101:
		return"广西壮族自治区南宁市市辖区";
		break;
	case 450102:
		return"广西壮族自治区南宁市兴宁区";
		break;
	case 450103:
		return"广西壮族自治区南宁市新城区";
		break;
	case 450104:
		return"广西壮族自治区南宁市城北区";
		break;
	case 450105:
		return"广西壮族自治区南宁市江南区";
		break;
	case 450106:
		return"广西壮族自治区南宁市永新区";
		break;
	case 450111:
		return"广西壮族自治区南宁市市郊区";
		break;
	case 450121:
		return"广西壮族自治区南宁市邕宁县";
		break;
	case 450122:
		return"广西壮族自治区南宁市武鸣县";
		break;
	case 450200:
		return"广西壮族自治区柳州市";
		break;
	case 450201:
		return"广西壮族自治区柳州市市辖区";
		break;
	case 450202:
		return"广西壮族自治区柳州市城中区";
		break;
	case 450203:
		return"广西壮族自治区柳州市鱼峰区";
		break;
	case 450204:
		return"广西壮族自治区柳州市柳南区";
		break;
	case 450205:
		return"广西壮族自治区柳州市柳北区";
		break;
	case 450211:
		return"广西壮族自治区柳州市市郊区";
		break;
	case 450221:
		return"广西壮族自治区柳州市柳江县";
		break;
	case 450222:
		return"广西壮族自治区柳州市柳城县";
		break;
	case 450300:
		return"广西壮族自治区桂林市";
		break;
	case 450301:
		return"广西壮族自治区桂林市市辖区";
		break;
	case 450302:
		return"广西壮族自治区桂林市秀峰区";
		break;
	case 450303:
		return"广西壮族自治区桂林市叠彩区";
		break;
	case 450304:
		return"广西壮族自治区桂林市象山区";
		break;
	case 450305:
		return"广西壮族自治区桂林市七星区";
		break;
	case 450311:
		return"广西壮族自治区桂林市雁山区";
		break;
	case 450321:
		return"广西壮族自治区桂林市阳朔县";
		break;
	case 450322:
		return"广西壮族自治区桂林市临桂县";
		break;
	case 450323:
		return"广西壮族自治区桂林市灵川县";
		break;
	case 450324:
		return"广西壮族自治区桂林市全州县";
		break;
	case 450325:
		return"广西壮族自治区桂林市兴安县";
		break;
	case 450326:
		return"广西壮族自治区桂林市永福县";
		break;
	case 450327:
		return"广西壮族自治区桂林市灌阳县";
		break;
	case 450328:
		return"广西壮族自治区桂林市龙胜各族自治县";
		break;
	case 450329:
		return"广西壮族自治区桂林市资源县";
		break;
	case 450330:
		return"广西壮族自治区桂林市平乐县";
		break;
	case 450331:
		return"广西壮族自治区桂林市荔浦县";
		break;
	case 450332:
		return"广西壮族自治区桂林市恭城瑶族自治县";
		break;
	case 450400:
		return"广西壮族自治区梧州市";
		break;
	case 450401:
		return"广西壮族自治区梧州市市辖区";
		break;
	case 450403:
		return"广西壮族自治区梧州市万秀区";
		break;
	case 450404:
		return"广西壮族自治区梧州市蝶山区";
		break;
	case 450411:
		return"广西壮族自治区梧州市市郊区";
		break;
	case 450421:
		return"广西壮族自治区梧州市苍梧县";
		break;
	case 450422:
		return"广西壮族自治区梧州市藤县";
		break;
	case 450423:
		return"广西壮族自治区梧州市蒙山县";
		break;
	case 450481:
		return"广西壮族自治区梧州市岑溪市";
		break;
	case 450500:
		return"广西壮族自治区北海市";
		break;
	case 450501:
		return"广西壮族自治区北海市市辖区";
		break;
	case 450502:
		return"广西壮族自治区北海市海城区";
		break;
	case 450503:
		return"广西壮族自治区北海市银海区";
		break;
	case 450512:
		return"广西壮族自治区北海市铁山港区";
		break;
	case 450521:
		return"广西壮族自治区北海市合浦县";
		break;
	case 450600:
		return"广西壮族自治区防城港市";
		break;
	case 450601:
		return"广西壮族自治区防城港市市辖区";
		break;
	case 450602:
		return"广西壮族自治区防城港市港口区";
		break;
	case 450603:
		return"广西壮族自治区防城港市防城区";
		break;
	case 450621:
		return"广西壮族自治区防城港市上思县";
		break;
	case 450681:
		return"广西壮族自治区防城港市东兴市";
		break;
	case 450700:
		return"广西壮族自治区钦州市";
		break;
	case 450701:
		return"广西壮族自治区钦州市市辖区";
		break;
	case 450702:
		return"广西壮族自治区钦州市钦南区";
		break;
	case 450703:
		return"广西壮族自治区钦州市钦北区";
		break;
	case 450721:
		return"广西壮族自治区钦州市灵山县";
		break;
	case 450722:
		return"广西壮族自治区钦州市浦北县";
		break;
	case 450800:
		return"广西壮族自治区贵港市";
		break;
	case 450801:
		return"广西壮族自治区贵港市市辖区";
		break;
	case 450802:
		return"广西壮族自治区贵港市港北区";
		break;
	case 450803:
		return"广西壮族自治区贵港市港南区";
		break;
	case 450821:
		return"广西壮族自治区贵港市平南县";
		break;
	case 450881:
		return"广西壮族自治区贵港市桂平市";
		break;
	case 450900:
		return"广西壮族自治区玉林市";
		break;
	case 450901:
		return"广西壮族自治区玉林市市辖区";
		break;
	case 450902:
		return"广西壮族自治区玉林市玉州区";
		break;
	case 450921:
		return"广西壮族自治区玉林市容县";
		break;
	case 450922:
		return"广西壮族自治区玉林市陆川县";
		break;
	case 450923:
		return"广西壮族自治区玉林市博白县";
		break;
	case 450924:
		return"广西壮族自治区玉林市兴业县";
		break;
	case 450981:
		return"广西壮族自治区玉林市北流市";
		break;
	case 452100:
		return"广西壮族自治区南宁地区";
		break;
	case 452101:
		return"广西壮族自治区南宁地区凭祥市";
		break;
	case 452122:
		return"广西壮族自治区南宁地区横县";
		break;
	case 452123:
		return"广西壮族自治区南宁地区宾阳县";
		break;
	case 452124:
		return"广西壮族自治区南宁地区上林县";
		break;
	case 452126:
		return"广西壮族自治区南宁地区隆安县";
		break;
	case 452127:
		return"广西壮族自治区南宁地区马山县";
		break;
	case 452128:
		return"广西壮族自治区南宁地区扶绥县";
		break;
	case 452129:
		return"广西壮族自治区南宁地区崇左县";
		break;
	case 452130:
		return"广西壮族自治区南宁地区大新县";
		break;
	case 452131:
		return"广西壮族自治区南宁地区天等县";
		break;
	case 452132:
		return"广西壮族自治区南宁地区宁明县";
		break;
	case 452133:
		return"广西壮族自治区南宁地区龙州县";
		break;
	case 452200:
		return"广西壮族自治区柳州地区";
		break;
	case 452201:
		return"广西壮族自治区柳州地区合山市";
		break;
	case 452223:
		return"广西壮族自治区柳州地区鹿寨县";
		break;
	case 452224:
		return"广西壮族自治区柳州地区象州县";
		break;
	case 452225:
		return"广西壮族自治区柳州地区武宣县";
		break;
	case 452226:
		return"广西壮族自治区柳州地区来宾县";
		break;
	case 452227:
		return"广西壮族自治区柳州地区融安县";
		break;
	case 452228:
		return"广西壮族自治区柳州地区三江侗族自治县";
		break;
	case 452229:
		return"广西壮族自治区柳州地区融水苗族自治县";
		break;
	case 452230:
		return"广西壮族自治区柳州地区金秀瑶族自治县";
		break;
	case 452231:
		return"广西壮族自治区柳州地区忻城县";
		break;
	case 452400:
		return"广西壮族自治区贺州地区";
		break;
	case 452402:
		return"广西壮族自治区贺州地区贺州市";
		break;
	case 452424:
		return"广西壮族自治区贺州地区昭平县";
		break;
	case 452427:
		return"广西壮族自治区贺州地区钟山县";
		break;
	case 452428:
		return"广西壮族自治区贺州地区富川瑶族自治县";
		break;
	case 452600:
		return"广西壮族自治区百色地区";
		break;
	case 452601:
		return"广西壮族自治区百色地区百色市";
		break;
	case 452622:
		return"广西壮族自治区百色地区田阳县";
		break;
	case 452623:
		return"广西壮族自治区百色地区田东县";
		break;
	case 452624:
		return"广西壮族自治区百色地区平果县";
		break;
	case 452625:
		return"广西壮族自治区百色地区德保县";
		break;
	case 452626:
		return"广西壮族自治区百色地区靖西县";
		break;
	case 452627:
		return"广西壮族自治区百色地区那坡县";
		break;
	case 452628:
		return"广西壮族自治区百色地区凌云县";
		break;
	case 452629:
		return"广西壮族自治区百色地区乐业县";
		break;
	case 452630:
		return"广西壮族自治区百色地区田林县";
		break;
	case 452631:
		return"广西壮族自治区百色地区隆林各族自治县";
		break;
	case 452632:
		return"广西壮族自治区百色地区西林县";
		break;
	case 452700:
		return"广西壮族自治区河池地区";
		break;
	case 452701:
		return"广西壮族自治区河池地区河池市";
		break;
	case 452702:
		return"广西壮族自治区河池地区宜州市";
		break;
	case 452723:
		return"广西壮族自治区河池地区罗城仫佬族自治县";
		break;
	case 452724:
		return"广西壮族自治区河池地区环江毛南族自治县";
		break;
	case 452725:
		return"广西壮族自治区河池地区南丹县";
		break;
	case 452726:
		return"广西壮族自治区河池地区天峨县";
		break;
	case 452727:
		return"广西壮族自治区河池地区凤山县";
		break;
	case 452728:
		return"广西壮族自治区河池地区东兰县";
		break;
	case 452729:
		return"广西壮族自治区河池地区巴马瑶族自治县";
		break;
	case 452730:
		return"广西壮族自治区河池地区都安瑶族自治县";
		break;
	case 452731:
		return"广西壮族自治区河池地区大化瑶族自治县";
		break;
	case 460000:
		return"海南省";
		break;
	case 460001:
		return"海南省三亚市通什市";
		break;
	case 460002:
		return"海南省三亚市琼海市";
		break;
	case 460003:
		return"海南省三亚市儋州市";
		break;
	case 460004:
		return"海南省三亚市琼山市";
		break;
	case 460005:
		return"海南省三亚市文昌市";
		break;
	case 460006:
		return"海南省三亚市万宁市";
		break;
	case 460007:
		return"海南省三亚市东方市";
		break;
	case 460025:
		return"海南省三亚市定安县";
		break;
	case 460026:
		return"海南省三亚市屯昌县";
		break;
	case 460027:
		return"海南省三亚市澄迈县";
		break;
	case 460028:
		return"海南省三亚市临高县";
		break;
	case 460030:
		return"海南省三亚市白沙黎族自治县";
		break;
	case 460031:
		return"海南省三亚市昌江黎族自治县";
		break;
	case 460033:
		return"海南省三亚市乐东黎族自治县";
		break;
	case 460034:
		return"海南省三亚市陵水黎族自治县";
		break;
	case 460035:
		return"海南省三亚市保亭黎族苗族自治县";
		break;
	case 460036:
		return"海南省三亚市琼中黎族苗族自治县";
		break;
	case 460037:
		return"海南省西沙群岛";
		break;
	case 460038:
		return"海南省南沙群岛";
		break;
	case 460039:
		return"海南省中沙群岛的岛礁及其海域";
		break;
	case 460100:
		return"海南省海口市";
		break;
	case 460101:
		return"海南省海口市市辖区";
		break;
	case 460102:
		return"海南省海口市振东区";
		break;
	case 460103:
		return"海南省海口市新华区";
		break;
	case 460104:
		return"海南省海口市秀英区";
		break;
	case 460200:
		return"海南省三亚市";
		break;
	case 460201:
		return"海南省三亚市市辖区";
		break;
	case 500000:
		return"重庆市";
		break;
	case 500100:
		return"重庆市市辖区";
		break;
	case 500101:
		return"重庆市万州区";
		break;
	case 500102:
		return"重庆市涪陵区";
		break;
	case 500103:
		return"重庆市渝中区";
		break;
	case 500104:
		return"重庆市大渡口区";
		break;
	case 500105:
		return"重庆市江北区";
		break;
	case 500106:
		return"重庆市沙坪坝区";
		break;
	case 500107:
		return"重庆市九龙坡区";
		break;
	case 500108:
		return"重庆市南岸区";
		break;
	case 500109:
		return"重庆市北碚区";
		break;
	case 500110:
		return"重庆市万盛区";
		break;
	case 500111:
		return"重庆市双桥区";
		break;
	case 500112:
		return"重庆市渝北区";
		break;
	case 500113:
		return"重庆市巴南区";
		break;
	case 500200:
		return"重庆市县";
		break;
	case 500221:
		return"重庆市长寿县";
		break;
	case 500222:
		return"重庆市綦江县";
		break;
	case 500223:
		return"重庆市潼南县";
		break;
	case 500224:
		return"重庆市铜梁县";
		break;
	case 500225:
		return"重庆市大足县";
		break;
	case 500226:
		return"重庆市荣昌县";
		break;
	case 500227:
		return"重庆市璧山县";
		break;
	case 500228:
		return"重庆市梁平县";
		break;
	case 500229:
		return"重庆市城口县";
		break;
	case 500230:
		return"重庆市丰都县";
		break;
	case 500231:
		return"重庆市垫江县";
		break;
	case 500232:
		return"重庆市武隆县";
		break;
	case 500233:
		return"重庆市忠县";
		break;
	case 500234:
		return"重庆市开县";
		break;
	case 500235:
		return"重庆市云阳县";
		break;
	case 500236:
		return"重庆市奉节县";
		break;
	case 500237:
		return"重庆市巫山县";
		break;
	case 500238:
		return"重庆市巫溪县";
		break;
	case 500239:
		return"重庆市黔江土家族苗族自治县";
		break;
	case 500240:
		return"重庆市石柱土家族自治县";
		break;
	case 500241:
		return"重庆市秀山土家族苗族自治县";
		break;
	case 500242:
		return"重庆市酉阳土家族苗族自治县";
		break;
	case 500243:
		return"重庆市彭水苗族土家族自治县";
		break;
	case 500300:
		return"重庆市(市)";
		break;
	case 500381:
		return"重庆市江津市";
		break;
	case 500382:
		return"重庆市合川市";
		break;
	case 500383:
		return"重庆市永川市";
		break;
	case 500384:
		return"重庆市南川市";
		break;
	case 510000:
		return"四川省";
		break;
	case 510100:
		return"四川省成都市";
		break;
	case 510101:
		return"四川省成都市市辖区";
		break;
	case 510104:
		return"四川省成都市锦江区";
		break;
	case 510105:
		return"四川省成都市青羊区";
		break;
	case 510106:
		return"四川省成都市金牛区";
		break;
	case 510107:
		return"四川省成都市武侯区";
		break;
	case 510108:
		return"四川省成都市成华区";
		break;
	case 510112:
		return"四川省成都市龙泉驿区";
		break;
	case 510113:
		return"四川省成都市青白江区";
		break;
	case 510121:
		return"四川省成都市金堂县";
		break;
	case 510122:
		return"四川省成都市双流县";
		break;
	case 510123:
		return"四川省成都市温江县";
		break;
	case 510124:
		return"四川省成都市郫县";
		break;
	case 510125:
		return"四川省成都市新都县";
		break;
	case 510129:
		return"四川省成都市大邑县";
		break;
	case 510131:
		return"四川省成都市蒲江县";
		break;
	case 510132:
		return"四川省成都市新津县";
		break;
	case 510181:
		return"四川省成都市都江堰市";
		break;
	case 510182:
		return"四川省成都市彭州市";
		break;
	case 510183:
		return"四川省成都市邛崃市";
		break;
	case 510184:
		return"四川省成都市崇州市";
		break;
	case 510300:
		return"四川省自贡市";
		break;
	case 510301:
		return"四川省自贡市市辖区";
		break;
	case 510302:
		return"四川省自贡市自流井区";
		break;
	case 510303:
		return"四川省自贡市贡井区";
		break;
	case 510304:
		return"四川省自贡市大安区";
		break;
	case 510311:
		return"四川省自贡市沿滩区";
		break;
	case 510321:
		return"四川省自贡市荣县";
		break;
	case 510322:
		return"四川省自贡市富顺县";
		break;
	case 510400:
		return"四川省攀枝花市";
		break;
	case 510401:
		return"四川省攀枝花市市辖区";
		break;
	case 510402:
		return"四川省攀枝花市东区";
		break;
	case 510403:
		return"四川省攀枝花市西区";
		break;
	case 510411:
		return"四川省攀枝花市仁和区";
		break;
	case 510421:
		return"四川省攀枝花市米易县";
		break;
	case 510422:
		return"四川省攀枝花市盐边县";
		break;
	case 510500:
		return"四川省泸州市";
		break;
	case 510501:
		return"四川省泸州市市辖区";
		break;
	case 510502:
		return"四川省泸州市江阳区";
		break;
	case 510503:
		return"四川省泸州市纳溪区";
		break;
	case 510504:
		return"四川省泸州市龙马潭区";
		break;
	case 510521:
		return"四川省泸州市泸县";
		break;
	case 510522:
		return"四川省泸州市合江县";
		break;
	case 510524:
		return"四川省泸州市叙永县";
		break;
	case 510525:
		return"四川省泸州市古蔺县";
		break;
	case 510600:
		return"四川省德阳市";
		break;
	case 510601:
		return"四川省德阳市市辖区";
		break;
	case 510603:
		return"四川省德阳市旌阳区";
		break;
	case 510623:
		return"四川省德阳市中江县";
		break;
	case 510626:
		return"四川省德阳市罗江县";
		break;
	case 510681:
		return"四川省德阳市广汉市";
		break;
	case 510682:
		return"四川省德阳市什邡市";
		break;
	case 510683:
		return"四川省德阳市绵竹市";
		break;
	case 510700:
		return"四川省绵阳市";
		break;
	case 510701:
		return"四川省绵阳市市辖区";
		break;
	case 510703:
		return"四川省绵阳市涪城区";
		break;
	case 510704:
		return"四川省绵阳市游仙区";
		break;
	case 510722:
		return"四川省绵阳市三台县";
		break;
	case 510723:
		return"四川省绵阳市盐亭县";
		break;
	case 510724:
		return"四川省绵阳市安县";
		break;
	case 510725:
		return"四川省绵阳市梓潼县";
		break;
	case 510726:
		return"四川省绵阳市北川县";
		break;
	case 510727:
		return"四川省绵阳市平武县";
		break;
	case 510781:
		return"四川省绵阳市江油市";
		break;
	case 510800:
		return"四川省广元市";
		break;
	case 510801:
		return"四川省广元市市辖区";
		break;
	case 510802:
		return"四川省广元市市中区";
		break;
	case 510811:
		return"四川省广元市元坝区";
		break;
	case 510812:
		return"四川省广元市朝天区";
		break;
	case 510821:
		return"四川省广元市旺苍县";
		break;
	case 510822:
		return"四川省广元市青川县";
		break;
	case 510823:
		return"四川省广元市剑阁县";
		break;
	case 510824:
		return"四川省广元市苍溪县";
		break;
	case 510900:
		return"四川省遂宁市";
		break;
	case 510901:
		return"四川省遂宁市市辖区";
		break;
	case 510902:
		return"四川省遂宁市市中区";
		break;
	case 510921:
		return"四川省遂宁市蓬溪县";
		break;
	case 510922:
		return"四川省遂宁市射洪县";
		break;
	case 510923:
		return"四川省遂宁市大英县";
		break;
	case 511000:
		return"四川省内江市";
		break;
	case 511001:
		return"四川省内江市市辖区";
		break;
	case 511002:
		return"四川省内江市市中区";
		break;
	case 511011:
		return"四川省内江市东兴区";
		break;
	case 511024:
		return"四川省内江市威远县";
		break;
	case 511025:
		return"四川省内江市资中县";
		break;
	case 511028:
		return"四川省内江市隆昌县";
		break;
	case 511100:
		return"四川省乐山市";
		break;
	case 511101:
		return"四川省乐山市市辖区";
		break;
	case 511102:
		return"四川省乐山市市中区";
		break;
	case 511111:
		return"四川省乐山市沙湾区";
		break;
	case 511112:
		return"四川省乐山市五通桥区";
		break;
	case 511113:
		return"四川省乐山市金口河区";
		break;
	case 511123:
		return"四川省乐山市犍为县";
		break;
	case 511124:
		return"四川省乐山市井研县";
		break;
	case 511126:
		return"四川省乐山市夹江县";
		break;
	case 511129:
		return"四川省乐山市沐川县";
		break;
	case 511132:
		return"四川省乐山市峨边彝族自治县";
		break;
	case 511133:
		return"四川省乐山市马边彝族自治县";
		break;
	case 511181:
		return"四川省乐山市峨眉山市";
		break;
	case 511300:
		return"四川省南充市";
		break;
	case 511301:
		return"四川省南充市市辖区";
		break;
	case 511302:
		return"四川省南充市顺庆区";
		break;
	case 511303:
		return"四川省南充市高坪区";
		break;
	case 511304:
		return"四川省南充市嘉陵区";
		break;
	case 511321:
		return"四川省南充市南部县";
		break;
	case 511322:
		return"四川省南充市营山县";
		break;
	case 511323:
		return"四川省南充市蓬安县";
		break;
	case 511324:
		return"四川省南充市仪陇县";
		break;
	case 511325:
		return"四川省南充市西充县";
		break;
	case 511381:
		return"四川省南充市阆中市";
		break;
	case 511500:
		return"四川省宜宾市";
		break;
	case 511501:
		return"四川省宜宾市市辖区";
		break;
	case 511502:
		return"四川省宜宾市翠屏区";
		break;
	case 511521:
		return"四川省宜宾市宜宾县";
		break;
	case 511522:
		return"四川省宜宾市南溪县";
		break;
	case 511523:
		return"四川省宜宾市江安县";
		break;
	case 511524:
		return"四川省宜宾市长宁县";
		break;
	case 511525:
		return"四川省宜宾市高县";
		break;
	case 511526:
		return"四川省宜宾市珙县";
		break;
	case 511527:
		return"四川省宜宾市筠连县";
		break;
	case 511528:
		return"四川省宜宾市兴文县";
		break;
	case 511529:
		return"四川省宜宾市屏山县";
		break;
	case 511600:
		return"四川省广安市";
		break;
	case 511601:
		return"四川省广安市市辖区";
		break;
	case 511602:
		return"四川省广安市广安区";
		break;
	case 511621:
		return"四川省广安市岳池县";
		break;
	case 511622:
		return"四川省广安市武胜县";
		break;
	case 511623:
		return"四川省广安市邻水县";
		break;
	case 511681:
		return"四川省广安市华蓥市";
		break;
	case 513000:
		return"四川省达川地区";
		break;
	case 513001:
		return"四川省达川地区达川市";
		break;
	case 513002:
		return"四川省达川地区万源市";
		break;
	case 513021:
		return"四川省达川地区达县";
		break;
	case 513022:
		return"四川省达川地区宣汉县";
		break;
	case 513023:
		return"四川省达川地区开江县";
		break;
	case 513029:
		return"四川省达川地区大竹县";
		break;
	case 513030:
		return"四川省达川地区渠县";
		break;
	case 513100:
		return"四川省雅安地区";
		break;
	case 513101:
		return"四川省雅安地区雅安市";
		break;
	case 513122:
		return"四川省雅安地区名山县";
		break;
	case 513123:
		return"四川省雅安地区荥经县";
		break;
	case 513124:
		return"四川省雅安地区汉源县";
		break;
	case 513125:
		return"四川省雅安地区石棉县";
		break;
	case 513126:
		return"四川省雅安地区天全县";
		break;
	case 513127:
		return"四川省雅安地区芦山县";
		break;
	case 513128:
		return"四川省雅安地区宝兴县";
		break;
	case 513200:
		return"四川省阿坝藏族羌族自治州";
		break;
	case 513221:
		return"四川省阿坝藏族羌族自治州汶川县";
		break;
	case 513222:
		return"四川省阿坝藏族羌族自治州理县";
		break;
	case 513223:
		return"四川省阿坝藏族羌族自治州茂县";
		break;
	case 513224:
		return"四川省阿坝藏族羌族自治州松潘县";
		break;
	case 513225:
		return"四川省阿坝藏族羌族自治州九寨沟县";
		break;
	case 513226:
		return"四川省阿坝藏族羌族自治州金川县";
		break;
	case 513227:
		return"四川省阿坝藏族羌族自治州小金县";
		break;
	case 513228:
		return"四川省阿坝藏族羌族自治州黑水县";
		break;
	case 513229:
		return"四川省阿坝藏族羌族自治州马尔康县";
		break;
	case 513230:
		return"四川省阿坝藏族羌族自治州壤塘县";
		break;
	case 513231:
		return"四川省阿坝藏族羌族自治州阿坝县";
		break;
	case 513232:
		return"四川省阿坝藏族羌族自治州若尔盖县";
		break;
	case 513233:
		return"四川省阿坝藏族羌族自治州红原县";
		break;
	case 513300:
		return"四川省甘孜藏族自治州";
		break;
	case 513321:
		return"四川省甘孜藏族自治州康定县";
		break;
	case 513322:
		return"四川省甘孜藏族自治州泸定县";
		break;
	case 513323:
		return"四川省甘孜藏族自治州丹巴县";
		break;
	case 513324:
		return"四川省甘孜藏族自治州九龙县";
		break;
	case 513325:
		return"四川省甘孜藏族自治州雅江县";
		break;
	case 513326:
		return"四川省甘孜藏族自治州道孚县";
		break;
	case 513327:
		return"四川省甘孜藏族自治州炉霍县";
		break;
	case 513328:
		return"四川省甘孜藏族自治州甘孜县";
		break;
	case 513329:
		return"四川省甘孜藏族自治州新龙县";
		break;
	case 513330:
		return"四川省甘孜藏族自治州德格县";
		break;
	case 513331:
		return"四川省甘孜藏族自治州白玉县";
		break;
	case 513332:
		return"四川省甘孜藏族自治州石渠县";
		break;
	case 513333:
		return"四川省甘孜藏族自治州色达县";
		break;
	case 513334:
		return"四川省甘孜藏族自治州理塘县";
		break;
	case 513335:
		return"四川省甘孜藏族自治州巴塘县";
		break;
	case 513336:
		return"四川省甘孜藏族自治州乡城县";
		break;
	case 513337:
		return"四川省甘孜藏族自治州稻城县";
		break;
	case 513338:
		return"四川省甘孜藏族自治州得荣县";
		break;
	case 513400:
		return"四川省凉山彝族自治州";
		break;
	case 513401:
		return"四川省凉山彝族自治州西昌市";
		break;
	case 513422:
		return"四川省凉山彝族自治州木里藏族自治县";
		break;
	case 513423:
		return"四川省凉山彝族自治州盐源县";
		break;
	case 513424:
		return"四川省凉山彝族自治州德昌县";
		break;
	case 513425:
		return"四川省凉山彝族自治州会理县";
		break;
	case 513426:
		return"四川省凉山彝族自治州会东县";
		break;
	case 513427:
		return"四川省凉山彝族自治州宁南县";
		break;
	case 513428:
		return"四川省凉山彝族自治州普格县";
		break;
	case 513429:
		return"四川省凉山彝族自治州布拖县";
		break;
	case 513430:
		return"四川省凉山彝族自治州金阳县";
		break;
	case 513431:
		return"四川省凉山彝族自治州昭觉县";
		break;
	case 513432:
		return"四川省凉山彝族自治州喜德县";
		break;
	case 513433:
		return"四川省凉山彝族自治州冕宁县";
		break;
	case 513434:
		return"四川省凉山彝族自治州越西县";
		break;
	case 513435:
		return"四川省凉山彝族自治州甘洛县";
		break;
	case 513436:
		return"四川省凉山彝族自治州美姑县";
		break;
	case 513437:
		return"四川省凉山彝族自治州雷波县";
		break;
	case 513700:
		return"四川省巴中地区";
		break;
	case 513701:
		return"四川省巴中地区巴中市";
		break;
	case 513721:
		return"四川省巴中地区通江县";
		break;
	case 513722:
		return"四川省巴中地区南江县";
		break;
	case 513723:
		return"四川省巴中地区平昌县";
		break;
	case 513800:
		return"四川省眉山地区";
		break;
	case 513821:
		return"四川省眉山地区眉山县";
		break;
	case 513822:
		return"四川省眉山地区仁寿县";
		break;
	case 513823:
		return"四川省眉山地区彭山县";
		break;
	case 513824:
		return"四川省眉山地区洪雅县";
		break;
	case 513825:
		return"四川省眉山地区丹棱县";
		break;
	case 513826:
		return"四川省眉山地区青神县";
		break;
	case 513900:
		return"四川省眉山地区资阳地区";
		break;
	case 513901:
		return"四川省眉山地区资阳市";
		break;
	case 513902:
		return"四川省眉山地区简阳市";
		break;
	case 513921:
		return"四川省眉山地区安岳县";
		break;
	case 513922:
		return"四川省眉山地区乐至县";
		break;
	case 520000:
		return"贵州省";
		break;
	case 520100:
		return"贵州省贵阳市";
		break;
	case 520101:
		return"贵州省贵阳市市辖区";
		break;
	case 520102:
		return"贵州省贵阳市南明区";
		break;
	case 520103:
		return"贵州省贵阳市云岩区";
		break;
	case 520111:
		return"贵州省贵阳市花溪区";
		break;
	case 520112:
		return"贵州省贵阳市乌当区";
		break;
	case 520113:
		return"贵州省贵阳市白云区";
		break;
	case 520121:
		return"贵州省贵阳市开阳县";
		break;
	case 520122:
		return"贵州省贵阳市息烽县";
		break;
	case 520123:
		return"贵州省贵阳市修文县";
		break;
	case 520181:
		return"贵州省贵阳市清镇市";
		break;
	case 520200:
		return"贵州省六盘水市";
		break;
	case 520201:
		return"贵州省六盘水市钟山区";
		break;
	case 520202:
		return"贵州省六盘水市盘县特区";
		break;
	case 520203:
		return"贵州省六盘水市六枝特区";
		break;
	case 520221:
		return"贵州省六盘水市水城县";
		break;
	case 520300:
		return"贵州省遵义市";
		break;
	case 520301:
		return"贵州省遵义市市辖区";
		break;
	case 520302:
		return"贵州省遵义市红花岗区";
		break;
	case 520321:
		return"贵州省遵义市遵义县";
		break;
	case 520322:
		return"贵州省遵义市桐梓县";
		break;
	case 520323:
		return"贵州省遵义市绥阳县";
		break;
	case 520324:
		return"贵州省遵义市正安县";
		break;
	case 520325:
		return"贵州省遵义市道真仡佬族苗族自治县";
		break;
	case 520326:
		return"贵州省遵义市务川仡佬族苗族自治县";
		break;
	case 520327:
		return"贵州省遵义市凤冈县";
		break;
	case 520328:
		return"贵州省遵义市湄潭县";
		break;
	case 520329:
		return"贵州省遵义市余庆县";
		break;
	case 520330:
		return"贵州省遵义市习水县";
		break;
	case 520381:
		return"贵州省遵义市赤水市";
		break;
	case 520382:
		return"贵州省遵义市仁怀市";
		break;
	case 522200:
		return"贵州省铜仁地区";
		break;
	case 522201:
		return"贵州省铜仁地区铜仁市";
		break;
	case 522222:
		return"贵州省铜仁地区江口县";
		break;
	case 522223:
		return"贵州省铜仁地区玉屏侗族自治县";
		break;
	case 522224:
		return"贵州省铜仁地区石阡县";
		break;
	case 522225:
		return"贵州省铜仁地区思南县";
		break;
	case 522226:
		return"贵州省铜仁地区印江土家族苗族自治县";
		break;
	case 522227:
		return"贵州省铜仁地区德江县";
		break;
	case 522228:
		return"贵州省铜仁地区沿河土家族自治县";
		break;
	case 522229:
		return"贵州省铜仁地区松桃苗族自治县";
		break;
	case 522230:
		return"贵州省铜仁地区万山特区";
		break;
	case 522300:
		return"贵州省黔西南布依族苗族自治州";
		break;
	case 522301:
		return"贵州省黔西南布依族苗族自治州兴义市";
		break;
	case 522322:
		return"贵州省黔西南布依族苗族自治州兴仁县";
		break;
	case 522323:
		return"贵州省黔西南布依族苗族自治州普安县";
		break;
	case 522324:
		return"贵州省黔西南布依族苗族自治州晴隆县";
		break;
	case 522325:
		return"贵州省黔西南布依族苗族自治州贞丰县";
		break;
	case 522326:
		return"贵州省黔西南布依族苗族自治州望谟县";
		break;
	case 522327:
		return"贵州省黔西南布依族苗族自治州册亨县";
		break;
	case 522328:
		return"贵州省黔西南布依族苗族自治州安龙县";
		break;
	case 522400:
		return"贵州省毕节地区";
		break;
	case 522401:
		return"贵州省毕节地区毕节市";
		break;
	case 522422:
		return"贵州省毕节地区大方县";
		break;
	case 522423:
		return"贵州省毕节地区黔西县";
		break;
	case 522424:
		return"贵州省毕节地区金沙县";
		break;
	case 522425:
		return"贵州省毕节地区织金县";
		break;
	case 522426:
		return"贵州省毕节地区纳雍县";
		break;
	case 522427:
		return"贵州省毕节地区威宁彝族回族苗族自治县";
		break;
	case 522428:
		return"贵州省毕节地区赫章县";
		break;
	case 522500:
		return"贵州省安顺地区";
		break;
	case 522501:
		return"贵州省安顺地区安顺市";
		break;
	case 522526:
		return"贵州省安顺地区平坝县";
		break;
	case 522527:
		return"贵州省安顺地区普定县";
		break;
	case 522528:
		return"贵州省安顺地区关岭布依族苗族自治县";
		break;
	case 522529:
		return"贵州省安顺地区镇宁布依族苗族自治县";
		break;
	case 522530:
		return"贵州省安顺地区紫云苗族布依族自治县";
		break;
	case 522600:
		return"贵州省黔东南苗族侗族自治州";
		break;
	case 522601:
		return"贵州省黔东南苗族侗族自治州凯里市";
		break;
	case 522622:
		return"贵州省黔东南苗族侗族自治州黄平县";
		break;
	case 522623:
		return"贵州省黔东南苗族侗族自治州施秉县";
		break;
	case 522624:
		return"贵州省黔东南苗族侗族自治州三穗县";
		break;
	case 522625:
		return"贵州省黔东南苗族侗族自治州镇远县";
		break;
	case 522626:
		return"贵州省黔东南苗族侗族自治州岑巩县";
		break;
	case 522627:
		return"贵州省黔东南苗族侗族自治州天柱县";
		break;
	case 522628:
		return"贵州省黔东南苗族侗族自治州锦屏县";
		break;
	case 522629:
		return"贵州省黔东南苗族侗族自治州剑河县";
		break;
	case 522630:
		return"贵州省黔东南苗族侗族自治州台江县";
		break;
	case 522631:
		return"贵州省黔东南苗族侗族自治州黎平县";
		break;
	case 522632:
		return"贵州省黔东南苗族侗族自治州榕江县";
		break;
	case 522633:
		return"贵州省黔东南苗族侗族自治州从江县";
		break;
	case 522634:
		return"贵州省黔东南苗族侗族自治州雷山县";
		break;
	case 522635:
		return"贵州省黔东南苗族侗族自治州麻江县";
		break;
	case 522636:
		return"贵州省黔东南苗族侗族自治州丹寨县";
		break;
	case 522700:
		return"贵州省黔南布依族苗族自治州";
		break;
	case 522701:
		return"贵州省黔南布依族苗族自治州都匀市";
		break;
	case 522702:
		return"贵州省黔南布依族苗族自治州福泉市";
		break;
	case 522722:
		return"贵州省黔南布依族苗族自治州荔波县";
		break;
	case 522723:
		return"贵州省黔南布依族苗族自治州贵定县";
		break;
	case 522725:
		return"贵州省黔南布依族苗族自治州瓮安县";
		break;
	case 522726:
		return"贵州省黔南布依族苗族自治州独山县";
		break;
	case 522727:
		return"贵州省黔南布依族苗族自治州平塘县";
		break;
	case 522728:
		return"贵州省黔南布依族苗族自治州罗甸县";
		break;
	case 522729:
		return"贵州省黔南布依族苗族自治州长顺县";
		break;
	case 522730:
		return"贵州省黔南布依族苗族自治州龙里县";
		break;
	case 522731:
		return"贵州省黔南布依族苗族自治州惠水县";
		break;
	case 522732:
		return"贵州省黔南布依族苗族自治州三都水族自治县";
		break;
	case 530000:
		return"云南省";
		break;
	case 530100:
		return"云南省昆明市";
		break;
	case 530101:
		return"云南省昆明市市辖区";
		break;
	case 530102:
		return"云南省昆明市五华区";
		break;
	case 530103:
		return"云南省昆明市盘龙区";
		break;
	case 530111:
		return"云南省昆明市官渡区";
		break;
	case 530112:
		return"云南省昆明市西山区";
		break;
	case 530113:
		return"云南省昆明市东川区";
		break;
	case 530121:
		return"云南省昆明市呈贡县";
		break;
	case 530122:
		return"云南省昆明市晋宁县";
		break;
	case 530124:
		return"云南省昆明市富民县";
		break;
	case 530125:
		return"云南省昆明市宜良县";
		break;
	case 530126:
		return"云南省昆明市石林彝族自治县";
		break;
	case 530127:
		return"云南省昆明市嵩明县";
		break;
	case 530128:
		return"云南省昆明市禄劝彝族苗族自治县";
		break;
	case 530129:
		return"云南省昆明市寻甸回族彝族自治县";
		break;
	case 530181:
		return"云南省昆明市安宁市";
		break;
	case 530300:
		return"云南省曲靖市";
		break;
	case 530301:
		return"云南省曲靖市市辖区";
		break;
	case 530302:
		return"云南省曲靖市麒麟区";
		break;
	case 530321:
		return"云南省曲靖市马龙县";
		break;
	case 530322:
		return"云南省曲靖市陆良县";
		break;
	case 530323:
		return"云南省曲靖市师宗县";
		break;
	case 530324:
		return"云南省曲靖市罗平县";
		break;
	case 530325:
		return"云南省曲靖市富源县";
		break;
	case 530326:
		return"云南省曲靖市会泽县";
		break;
	case 530328:
		return"云南省曲靖市沾益县";
		break;
	case 530381:
		return"云南省曲靖市宣威市";
		break;
	case 530400:
		return"云南省玉溪市";
		break;
	case 530401:
		return"云南省玉溪市市辖区";
		break;
	case 530402:
		return"云南省玉溪市红塔区";
		break;
	case 530421:
		return"云南省玉溪市江川县";
		break;
	case 530422:
		return"云南省玉溪市澄江县";
		break;
	case 530423:
		return"云南省玉溪市通海县";
		break;
	case 530424:
		return"云南省玉溪市华宁县";
		break;
	case 530425:
		return"云南省玉溪市易门县";
		break;
	case 530426:
		return"云南省玉溪市峨山彝族自治县";
		break;
	case 530427:
		return"云南省玉溪市新平彝族傣族自治县";
		break;
	case 530428:
		return"云南省玉溪市元江哈尼族彝族傣族自治县";
		break;
	case 532100:
		return"云南省昭通地区";
		break;
	case 532101:
		return"云南省昭通地区昭通市";
		break;
	case 532122:
		return"云南省昭通地区鲁甸县";
		break;
	case 532123:
		return"云南省昭通地区巧家县";
		break;
	case 532124:
		return"云南省昭通地区盐津县";
		break;
	case 532125:
		return"云南省昭通地区大关县";
		break;
	case 532126:
		return"云南省昭通地区永善县";
		break;
	case 532127:
		return"云南省昭通地区绥江县";
		break;
	case 532128:
		return"云南省昭通地区镇雄县";
		break;
	case 532129:
		return"云南省昭通地区彝良县";
		break;
	case 532130:
		return"云南省昭通地区威信县";
		break;
	case 532131:
		return"云南省昭通地区水富县";
		break;
	case 532300:
		return"云南省楚雄彝族自治州";
		break;
	case 532301:
		return"云南省楚雄彝族自治州楚雄市";
		break;
	case 532322:
		return"云南省楚雄彝族自治州双柏县";
		break;
	case 532323:
		return"云南省楚雄彝族自治州牟定县";
		break;
	case 532324:
		return"云南省楚雄彝族自治州南华县";
		break;
	case 532325:
		return"云南省楚雄彝族自治州姚安县";
		break;
	case 532326:
		return"云南省楚雄彝族自治州大姚县";
		break;
	case 532327:
		return"云南省楚雄彝族自治州永仁县";
		break;
	case 532328:
		return"云南省楚雄彝族自治州元谋县";
		break;
	case 532329:
		return"云南省楚雄彝族自治州武定县";
		break;
	case 532331:
		return"云南省楚雄彝族自治州禄丰县";
		break;
	case 532500:
		return"云南省红河哈尼族彝族自治州";
		break;
	case 532501:
		return"云南省红河哈尼族彝族自治州个旧市";
		break;
	case 532502:
		return"云南省红河哈尼族彝族自治州开远市";
		break;
	case 532522:
		return"云南省红河哈尼族彝族自治州蒙自县";
		break;
	case 532523:
		return"云南省红河哈尼族彝族自治州屏边苗族自治县";
		break;
	case 532524:
		return"云南省红河哈尼族彝族自治州建水县";
		break;
	case 532525:
		return"云南省红河哈尼族彝族自治州石屏县";
		break;
	case 532526:
		return"云南省红河哈尼族彝族自治州弥勒县";
		break;
	case 532527:
		return"云南省红河哈尼族彝族自治州泸西县";
		break;
	case 532528:
		return"云南省红河哈尼族彝族自治州元阳县";
		break;
	case 532529:
		return"云南省红河哈尼族彝族自治州红河县";
		break;
	case 532530:
		return"云南省红河哈尼族彝族自治州金平苗族瑶族傣族自治县";
		break;
	case 532531:
		return"云南省红河哈尼族彝族自治州绿春县";
		break;
	case 532532:
		return"云南省红河哈尼族彝族自治州河口瑶族自治县";
		break;
	case 532600:
		return"云南省文山壮族苗族自治州";
		break;
	case 532621:
		return"云南省文山壮族苗族自治州文山县";
		break;
	case 532622:
		return"云南省文山壮族苗族自治州砚山县";
		break;
	case 532623:
		return"云南省文山壮族苗族自治州西畴县";
		break;
	case 532624:
		return"云南省文山壮族苗族自治州麻栗坡县";
		break;
	case 532625:
		return"云南省文山壮族苗族自治州马关县";
		break;
	case 532626:
		return"云南省文山壮族苗族自治州丘北县";
		break;
	case 532627:
		return"云南省文山壮族苗族自治州广南县";
		break;
	case 532628:
		return"云南省文山壮族苗族自治州富宁县";
		break;
	case 532700:
		return"云南省思茅地区";
		break;
	case 532701:
		return"云南省思茅地区思茅市";
		break;
	case 532722:
		return"云南省思茅地区普洱哈尼族彝族自治县";
		break;
	case 532723:
		return"云南省思茅地区墨江哈尼族自治县";
		break;
	case 532724:
		return"云南省思茅地区景东彝族自治县";
		break;
	case 532725:
		return"云南省思茅地区景谷傣族彝族自治县";
		break;
	case 532726:
		return"云南省思茅地区镇沅彝族哈尼族拉祜族自治县";
		break;
	case 532727:
		return"云南省思茅地区江城哈尼族彝族自治县";
		break;
	case 532728:
		return"云南省思茅地区孟连傣族拉祜族佤族自治县";
		break;
	case 532729:
		return"云南省思茅地区澜沧拉祜族自治县";
		break;
	case 532730:
		return"云南省思茅地区西盟佤族自治县";
		break;
	case 532800:
		return"云南省西双版纳傣族自治州";
		break;
	case 532801:
		return"云南省西双版纳傣族自治州景洪市";
		break;
	case 532822:
		return"云南省西双版纳傣族自治州勐海县";
		break;
	case 532823:
		return"云南省西双版纳傣族自治州勐腊县";
		break;
	case 532900:
		return"云南省大理白族自治州";
		break;
	case 532901:
		return"云南省大理白族自治州大理市";
		break;
	case 532922:
		return"云南省大理白族自治州漾濞彝族自治县";
		break;
	case 532923:
		return"云南省大理白族自治州祥云县";
		break;
	case 532924:
		return"云南省大理白族自治州宾川县";
		break;
	case 532925:
		return"云南省大理白族自治州弥渡县";
		break;
	case 532926:
		return"云南省大理白族自治州南涧彝族自治县";
		break;
	case 532927:
		return"云南省大理白族自治州巍山彝族回族自治县";
		break;
	case 532928:
		return"云南省大理白族自治州永平县";
		break;
	case 532929:
		return"云南省大理白族自治州云龙县";
		break;
	case 532930:
		return"云南省大理白族自治州洱源县";
		break;
	case 532931:
		return"云南省大理白族自治州剑川县";
		break;
	case 532932:
		return"云南省大理白族自治州鹤庆县";
		break;
	case 533000:
		return"云南省保山地区";
		break;
	case 533001:
		return"云南省保山地区保山市";
		break;
	case 533022:
		return"云南省保山地区施甸县";
		break;
	case 533023:
		return"云南省保山地区腾冲县";
		break;
	case 533024:
		return"云南省保山地区龙陵县";
		break;
	case 533025:
		return"云南省保山地区昌宁县";
		break;
	case 533100:
		return"云南省德宏傣族景颇族自治州";
		break;
	case 533101:
		return"云南省德宏傣族景颇族自治州畹町市";
		break;
	case 533102:
		return"云南省德宏傣族景颇族自治州瑞丽市";
		break;
	case 533103:
		return"云南省德宏傣族景颇族自治州潞西市";
		break;
	case 533122:
		return"云南省德宏傣族景颇族自治州梁河县";
		break;
	case 533123:
		return"云南省德宏傣族景颇族自治州盈江县";
		break;
	case 533124:
		return"云南省德宏傣族景颇族自治州陇川县";
		break;
	case 533200:
		return"云南省丽江地区";
		break;
	case 533221:
		return"云南省丽江地区丽江纳西族自治县";
		break;
	case 533222:
		return"云南省丽江地区永胜县";
		break;
	case 533223:
		return"云南省丽江地区华坪县";
		break;
	case 533224:
		return"云南省丽江地区宁蒗彝族自治县";
		break;
	case 533300:
		return"云南省怒江傈僳族自治州";
		break;
	case 533321:
		return"云南省怒江傈僳族自治州泸水县";
		break;
	case 533323:
		return"云南省怒江傈僳族自治州福贡县";
		break;
	case 533324:
		return"云南省怒江傈僳族自治州贡山独龙族怒族自治县";
		break;
	case 533325:
		return"云南省怒江傈僳族自治州兰坪白族普米族自治县";
		break;
	case 533400:
		return"云南省迪庆藏族自治州";
		break;
	case 533421:
		return"云南省迪庆藏族自治州中甸县";
		break;
	case 533422:
		return"云南省迪庆藏族自治州德钦县";
		break;
	case 533423:
		return"云南省迪庆藏族自治州维西傈僳族自治县";
		break;
	case 533500:
		return"云南省临沧地区";
		break;
	case 533521:
		return"云南省临沧地区临沧县";
		break;
	case 533522:
		return"云南省临沧地区凤庆县";
		break;
	case 533523:
		return"云南省临沧地区云县";
		break;
	case 533524:
		return"云南省临沧地区永德县";
		break;
	case 533525:
		return"云南省临沧地区镇康县";
		break;
	case 533526:
		return"云南省临沧地区双江拉祜族佤族布朗族傣族自治县";
		break;
	case 533527:
		return"云南省临沧地区耿马傣族佤族自治县";
		break;
	case 533528:
		return"云南省临沧地区沧源佤族自治县";
		break;
	case 540000:
		return"西藏自治区";
		break;
	case 540100:
		return"西藏自治区拉萨市";
		break;
	case 540101:
		return"西藏自治区拉萨市市辖区";
		break;
	case 540102:
		return"西藏自治区拉萨市城关区";
		break;
	case 540121:
		return"西藏自治区拉萨市林周县";
		break;
	case 540122:
		return"西藏自治区拉萨市当雄县";
		break;
	case 540123:
		return"西藏自治区拉萨市尼木县";
		break;
	case 540124:
		return"西藏自治区拉萨市曲水县";
		break;
	case 540125:
		return"西藏自治区拉萨市堆龙德庆县";
		break;
	case 540126:
		return"西藏自治区拉萨市达孜县";
		break;
	case 540127:
		return"西藏自治区拉萨市墨竹工卡县";
		break;
	case 542100:
		return"西藏自治区昌都地区";
		break;
	case 542121:
		return"西藏自治区昌都地区昌都县";
		break;
	case 542122:
		return"西藏自治区昌都地区江达县";
		break;
	case 542123:
		return"西藏自治区昌都地区贡觉县";
		break;
	case 542124:
		return"西藏自治区昌都地区类乌齐县";
		break;
	case 542125:
		return"西藏自治区昌都地区丁青县";
		break;
	case 542126:
		return"西藏自治区昌都地区察雅县";
		break;
	case 542127:
		return"西藏自治区昌都地区八宿县";
		break;
	case 542128:
		return"西藏自治区昌都地区左贡县";
		break;
	case 542129:
		return"西藏自治区昌都地区芒康县";
		break;
	case 542132:
		return"西藏自治区昌都地区洛隆县";
		break;
	case 542133:
		return"西藏自治区昌都地区边坝县";
		break;
	case 542134:
		return"西藏自治区昌都地区盐井县";
		break;
	case 542135:
		return"西藏自治区昌都地区碧土县";
		break;
	case 542136:
		return"西藏自治区昌都地区妥坝县";
		break;
	case 542137:
		return"西藏自治区昌都地区生达县";
		break;
	case 542200:
		return"西藏自治区山南地区";
		break;
	case 542221:
		return"西藏自治区山南地区乃东县";
		break;
	case 542222:
		return"西藏自治区山南地区扎囊县";
		break;
	case 542223:
		return"西藏自治区山南地区贡嘎县";
		break;
	case 542224:
		return"西藏自治区山南地区桑日县";
		break;
	case 542225:
		return"西藏自治区山南地区琼结县";
		break;
	case 542226:
		return"西藏自治区山南地区曲松县";
		break;
	case 542227:
		return"西藏自治区山南地区措美县";
		break;
	case 542228:
		return"西藏自治区山南地区洛扎县";
		break;
	case 542229:
		return"西藏自治区山南地区加查县";
		break;
	case 542231:
		return"西藏自治区山南地区隆子县";
		break;
	case 542232:
		return"西藏自治区山南地区错那县";
		break;
	case 542233:
		return"西藏自治区山南地区浪卡子县";
		break;
	case 542300:
		return"西藏自治区日喀则地区";
		break;
	case 542301:
		return"西藏自治区日喀则地区日喀则市";
		break;
	case 542322:
		return"西藏自治区日喀则地区南木林县";
		break;
	case 542323:
		return"西藏自治区日喀则地区江孜县";
		break;
	case 542324:
		return"西藏自治区日喀则地区定日县";
		break;
	case 542325:
		return"西藏自治区日喀则地区萨迦县";
		break;
	case 542326:
		return"西藏自治区日喀则地区拉孜县";
		break;
	case 542327:
		return"西藏自治区日喀则地区昂仁县";
		break;
	case 542328:
		return"西藏自治区日喀则地区谢通门县";
		break;
	case 542329:
		return"西藏自治区日喀则地区白朗县";
		break;
	case 542330:
		return"西藏自治区日喀则地区仁布县";
		break;
	case 542331:
		return"西藏自治区日喀则地区康马县";
		break;
	case 542332:
		return"西藏自治区日喀则地区定结县";
		break;
	case 542333:
		return"西藏自治区日喀则地区仲巴县";
		break;
	case 542334:
		return"西藏自治区日喀则地区亚东县";
		break;
	case 542335:
		return"西藏自治区日喀则地区吉隆县";
		break;
	case 542336:
		return"西藏自治区日喀则地区聂拉木县";
		break;
	case 542337:
		return"西藏自治区日喀则地区萨嘎县";
		break;
	case 542338:
		return"西藏自治区日喀则地区岗巴县";
		break;
	case 542400:
		return"西藏自治区那曲地区";
		break;
	case 542421:
		return"西藏自治区那曲地区那曲县";
		break;
	case 542422:
		return"西藏自治区那曲地区嘉黎县";
		break;
	case 542423:
		return"西藏自治区那曲地区比如县";
		break;
	case 542424:
		return"西藏自治区那曲地区聂荣县";
		break;
	case 542425:
		return"西藏自治区那曲地区安多县";
		break;
	case 542426:
		return"西藏自治区那曲地区申扎县";
		break;
	case 542427:
		return"西藏自治区那曲地区索县";
		break;
	case 542428:
		return"西藏自治区那曲地区班戈县";
		break;
	case 542429:
		return"西藏自治区那曲地区巴青县";
		break;
	case 542430:
		return"西藏自治区那曲地区尼玛县";
		break;
	case 542500:
		return"西藏自治区阿里地区";
		break;
	case 542521:
		return"西藏自治区阿里地区普兰县";
		break;
	case 542522:
		return"西藏自治区阿里地区札达县";
		break;
	case 542523:
		return"西藏自治区阿里地区噶尔县";
		break;
	case 542524:
		return"西藏自治区阿里地区日土县";
		break;
	case 542525:
		return"西藏自治区阿里地区革吉县";
		break;
	case 542526:
		return"西藏自治区阿里地区改则县";
		break;
	case 542527:
		return"西藏自治区阿里地区措勤县";
		break;
	case 542528:
		return"西藏自治区阿里地区隆格尔县";
		break;
	case 542600:
		return"西藏自治区林芝地区";
		break;
	case 542621:
		return"西藏自治区林芝地区林芝县";
		break;
	case 542622:
		return"西藏自治区林芝地区工布江达县";
		break;
	case 542623:
		return"西藏自治区林芝地区米林县";
		break;
	case 542624:
		return"西藏自治区林芝地区墨脱县";
		break;
	case 542625:
		return"西藏自治区林芝地区波密县";
		break;
	case 542626:
		return"西藏自治区林芝地区察隅县";
		break;
	case 542627:
		return"西藏自治区林芝地区朗县";
		break;
	case 610000:
		return"陕西省";
		break;
	case 610100:
		return"陕西省西安市";
		break;
	case 610101:
		return"陕西省西安市市辖区";
		break;
	case 610102:
		return"陕西省西安市新城区";
		break;
	case 610103:
		return"陕西省西安市碑林区";
		break;
	case 610104:
		return"陕西省西安市莲湖区";
		break;
	case 610111:
		return"陕西省西安市灞桥区";
		break;
	case 610112:
		return"陕西省西安市未央区";
		break;
	case 610113:
		return"陕西省西安市雁塔区";
		break;
	case 610114:
		return"陕西省西安市阎良区";
		break;
	case 610115:
		return"陕西省西安市临潼区";
		break;
	case 610121:
		return"陕西省西安市长安县";
		break;
	case 610122:
		return"陕西省西安市蓝田县";
		break;
	case 610124:
		return"陕西省西安市周至县";
		break;
	case 610125:
		return"陕西省西安市户县";
		break;
	case 610126:
		return"陕西省西安市高陵县";
		break;
	case 610200:
		return"陕西省铜川市";
		break;
	case 610201:
		return"陕西省铜川市市辖区";
		break;
	case 610202:
		return"陕西省铜川市城区";
		break;
	case 610203:
		return"陕西省铜川市郊区";
		break;
	case 610221:
		return"陕西省铜川市耀县";
		break;
	case 610222:
		return"陕西省铜川市宜君县";
		break;
	case 610300:
		return"陕西省宝鸡市";
		break;
	case 610301:
		return"陕西省宝鸡市市辖区";
		break;
	case 610302:
		return"陕西省宝鸡市渭滨区";
		break;
	case 610303:
		return"陕西省宝鸡市金台区";
		break;
	case 610321:
		return"陕西省宝鸡市宝鸡县";
		break;
	case 610322:
		return"陕西省宝鸡市凤翔县";
		break;
	case 610323:
		return"陕西省宝鸡市岐山县";
		break;
	case 610324:
		return"陕西省宝鸡市扶风县";
		break;
	case 610326:
		return"陕西省宝鸡市眉县";
		break;
	case 610327:
		return"陕西省宝鸡市陇县";
		break;
	case 610328:
		return"陕西省宝鸡市千阳县";
		break;
	case 610329:
		return"陕西省宝鸡市麟游县";
		break;
	case 610330:
		return"陕西省宝鸡市凤县";
		break;
	case 610331:
		return"陕西省宝鸡市太白县";
		break;
	case 610400:
		return"陕西省咸阳市";
		break;
	case 610401:
		return"陕西省咸阳市市辖区";
		break;
	case 610402:
		return"陕西省咸阳市秦都区";
		break;
	case 610403:
		return"陕西省咸阳市杨陵区";
		break;
	case 610404:
		return"陕西省咸阳市渭城区";
		break;
	case 610422:
		return"陕西省咸阳市三原县";
		break;
	case 610423:
		return"陕西省咸阳市泾阳县";
		break;
	case 610424:
		return"陕西省咸阳市乾县";
		break;
	case 610425:
		return"陕西省咸阳市礼泉县";
		break;
	case 610426:
		return"陕西省咸阳市永寿县";
		break;
	case 610427:
		return"陕西省咸阳市彬县";
		break;
	case 610428:
		return"陕西省咸阳市长武县";
		break;
	case 610429:
		return"陕西省咸阳市旬邑县";
		break;
	case 610430:
		return"陕西省咸阳市淳化县";
		break;
	case 610431:
		return"陕西省咸阳市武功县";
		break;
	case 610481:
		return"陕西省咸阳市兴平市";
		break;
	case 610500:
		return"陕西省渭南市";
		break;
	case 610501:
		return"陕西省渭南市市辖区";
		break;
	case 610502:
		return"陕西省渭南市临渭区";
		break;
	case 610521:
		return"陕西省渭南市华县";
		break;
	case 610522:
		return"陕西省渭南市潼关县";
		break;
	case 610523:
		return"陕西省渭南市大荔县";
		break;
	case 610524:
		return"陕西省渭南市合阳县";
		break;
	case 610525:
		return"陕西省渭南市澄城县";
		break;
	case 610526:
		return"陕西省渭南市蒲城县";
		break;
	case 610527:
		return"陕西省渭南市白水县";
		break;
	case 610528:
		return"陕西省渭南市富平县";
		break;
	case 610581:
		return"陕西省渭南市韩城市";
		break;
	case 610582:
		return"陕西省渭南市华阴市";
		break;
	case 610600:
		return"陕西省延安市";
		break;
	case 610601:
		return"陕西省延安市市辖区";
		break;
	case 610602:
		return"陕西省延安市宝塔区";
		break;
	case 610621:
		return"陕西省延安市延长县";
		break;
	case 610622:
		return"陕西省延安市延川县";
		break;
	case 610623:
		return"陕西省延安市子长县";
		break;
	case 610624:
		return"陕西省延安市安塞县";
		break;
	case 610625:
		return"陕西省延安市志丹县";
		break;
	case 610626:
		return"陕西省延安市吴旗县";
		break;
	case 610627:
		return"陕西省延安市甘泉县";
		break;
	case 610628:
		return"陕西省延安市富县";
		break;
	case 610629:
		return"陕西省延安市洛川县";
		break;
	case 610630:
		return"陕西省延安市宜川县";
		break;
	case 610631:
		return"陕西省延安市黄龙县";
		break;
	case 610632:
		return"陕西省延安市黄陵县";
		break;
	case 610700:
		return"陕西省汉中市";
		break;
	case 610701:
		return"陕西省汉中市市辖区";
		break;
	case 610702:
		return"陕西省汉中市汉台区";
		break;
	case 610721:
		return"陕西省汉中市南郑县";
		break;
	case 610722:
		return"陕西省汉中市城固县";
		break;
	case 610723:
		return"陕西省汉中市洋县";
		break;
	case 610724:
		return"陕西省汉中市西乡县";
		break;
	case 610725:
		return"陕西省汉中市勉县";
		break;
	case 610726:
		return"陕西省汉中市宁强县";
		break;
	case 610727:
		return"陕西省汉中市略阳县";
		break;
	case 610728:
		return"陕西省汉中市镇巴县";
		break;
	case 610729:
		return"陕西省汉中市留坝县";
		break;
	case 610730:
		return"陕西省汉中市佛坪县";
		break;
	case 612400:
		return"陕西省安康地区";
		break;
	case 612401:
		return"陕西省安康地区安康市";
		break;
	case 612422:
		return"陕西省安康地区汉阴县";
		break;
	case 612423:
		return"陕西省安康地区石泉县";
		break;
	case 612424:
		return"陕西省安康地区宁陕县";
		break;
	case 612425:
		return"陕西省安康地区紫阳县";
		break;
	case 612426:
		return"陕西省安康地区岚皋县";
		break;
	case 612427:
		return"陕西省安康地区平利县";
		break;
	case 612428:
		return"陕西省安康地区镇坪县";
		break;
	case 612429:
		return"陕西省安康地区旬阳县";
		break;
	case 612430:
		return"陕西省安康地区白河县";
		break;
	case 612500:
		return"陕西省商洛地区";
		break;
	case 612501:
		return"陕西省商洛地区商州市";
		break;
	case 612522:
		return"陕西省商洛地区洛南县";
		break;
	case 612523:
		return"陕西省商洛地区丹凤县";
		break;
	case 612524:
		return"陕西省商洛地区商南县";
		break;
	case 612525:
		return"陕西省商洛地区山阳县";
		break;
	case 612526:
		return"陕西省商洛地区镇安县";
		break;
	case 612527:
		return"陕西省商洛地区柞水县";
		break;
	case 612700:
		return"陕西省榆林地区";
		break;
	case 612701:
		return"陕西省榆林地区榆林市";
		break;
	case 612722:
		return"陕西省榆林地区神木县";
		break;
	case 612723:
		return"陕西省榆林地区府谷县";
		break;
	case 612724:
		return"陕西省榆林地区横山县";
		break;
	case 612725:
		return"陕西省榆林地区靖边县";
		break;
	case 612726:
		return"陕西省榆林地区定边县";
		break;
	case 612727:
		return"陕西省榆林地区绥德县";
		break;
	case 612728:
		return"陕西省榆林地区米脂县";
		break;
	case 612729:
		return"陕西省榆林地区佳县";
		break;
	case 612730:
		return"陕西省榆林地区吴堡县";
		break;
	case 612731:
		return"陕西省榆林地区清涧县";
		break;
	case 612732:
		return"陕西省榆林地区子洲县";
		break;
	case 620000:
		return"甘肃省";
		break;
	case 620100:
		return"甘肃省兰州市";
		break;
	case 620101:
		return"甘肃省兰州市市辖区";
		break;
	case 620102:
		return"甘肃省兰州市城关区";
		break;
	case 620103:
		return"甘肃省兰州市七里河区";
		break;
	case 620104:
		return"甘肃省兰州市西固区";
		break;
	case 620105:
		return"甘肃省兰州市安宁区";
		break;
	case 620111:
		return"甘肃省兰州市红古区";
		break;
	case 620121:
		return"甘肃省兰州市永登县";
		break;
	case 620122:
		return"甘肃省兰州市皋兰县";
		break;
	case 620123:
		return"甘肃省兰州市榆中县";
		break;
	case 620200:
		return"甘肃省嘉峪关市";
		break;
	case 620201:
		return"甘肃省嘉峪关市市辖区";
		break;
	case 620300:
		return"甘肃省嘉峪关市金昌市";
		break;
	case 620301:
		return"甘肃省嘉峪关市市辖区";
		break;
	case 620302:
		return"甘肃省嘉峪关市金川区";
		break;
	case 620321:
		return"甘肃省嘉峪关市永昌县";
		break;
	case 620400:
		return"甘肃省白银市";
		break;
	case 620401:
		return"甘肃省白银市市辖区";
		break;
	case 620402:
		return"甘肃省白银市白银区";
		break;
	case 620403:
		return"甘肃省白银市平川区";
		break;
	case 620421:
		return"甘肃省白银市靖远县";
		break;
	case 620422:
		return"甘肃省白银市会宁县";
		break;
	case 620423:
		return"甘肃省白银市景泰县";
		break;
	case 620500:
		return"甘肃省天水市";
		break;
	case 620501:
		return"甘肃省天水市市辖区";
		break;
	case 620502:
		return"甘肃省天水市秦城区";
		break;
	case 620503:
		return"甘肃省天水市北道区";
		break;
	case 620521:
		return"甘肃省天水市清水县";
		break;
	case 620522:
		return"甘肃省天水市秦安县";
		break;
	case 620523:
		return"甘肃省天水市甘谷县";
		break;
	case 620524:
		return"甘肃省天水市武山县";
		break;
	case 620525:
		return"甘肃省天水市张家川回族自治县";
		break;
	case 622100:
		return"甘肃省酒泉地区";
		break;
	case 622101:
		return"甘肃省酒泉地区玉门市";
		break;
	case 622102:
		return"甘肃省酒泉地区酒泉市";
		break;
	case 622103:
		return"甘肃省酒泉地区敦煌市";
		break;
	case 622123:
		return"甘肃省酒泉地区金塔县";
		break;
	case 622124:
		return"甘肃省酒泉地区肃北蒙古族自治县";
		break;
	case 622125:
		return"甘肃省酒泉地区阿克塞哈萨克族自治县";
		break;
	case 622126:
		return"甘肃省酒泉地区安西县";
		break;
	case 622200:
		return"甘肃省张掖地区";
		break;
	case 622201:
		return"甘肃省张掖地区张掖市";
		break;
	case 622222:
		return"甘肃省张掖地区肃南裕固族自治县";
		break;
	case 622223:
		return"甘肃省张掖地区民乐县";
		break;
	case 622224:
		return"甘肃省张掖地区临泽县";
		break;
	case 622225:
		return"甘肃省张掖地区高台县";
		break;
	case 622226:
		return"甘肃省张掖地区山丹县";
		break;
	case 622300:
		return"甘肃省武威地区";
		break;
	case 622301:
		return"甘肃省武威地区武威市";
		break;
	case 622322:
		return"甘肃省武威地区民勤县";
		break;
	case 622323:
		return"甘肃省武威地区古浪县";
		break;
	case 622326:
		return"甘肃省武威地区天祝藏族自治县";
		break;
	case 622400:
		return"甘肃省定西地区";
		break;
	case 622421:
		return"甘肃省定西地区定西县";
		break;
	case 622424:
		return"甘肃省定西地区通渭县";
		break;
	case 622425:
		return"甘肃省定西地区陇西县";
		break;
	case 622426:
		return"甘肃省定西地区渭源县";
		break;
	case 622427:
		return"甘肃省定西地区临洮县";
		break;
	case 622428:
		return"甘肃省定西地区漳县";
		break;
	case 622429:
		return"甘肃省定西地区岷县";
		break;
	case 622600:
		return"甘肃省陇南地区";
		break;
	case 622621:
		return"甘肃省陇南地区武都县";
		break;
	case 622623:
		return"甘肃省陇南地区宕昌县";
		break;
	case 622624:
		return"甘肃省陇南地区成县";
		break;
	case 622625:
		return"甘肃省陇南地区康县";
		break;
	case 622626:
		return"甘肃省陇南地区文县";
		break;
	case 622627:
		return"甘肃省陇南地区西和县";
		break;
	case 622628:
		return"甘肃省陇南地区礼县";
		break;
	case 622629:
		return"甘肃省陇南地区两当县";
		break;
	case 622630:
		return"甘肃省陇南地区徽县";
		break;
	case 622700:
		return"甘肃省平凉地区";
		break;
	case 622701:
		return"甘肃省平凉地区平凉市";
		break;
	case 622722:
		return"甘肃省平凉地区泾川县";
		break;
	case 622723:
		return"甘肃省平凉地区灵台县";
		break;
	case 622724:
		return"甘肃省平凉地区崇信县";
		break;
	case 622725:
		return"甘肃省平凉地区华亭县";
		break;
	case 622726:
		return"甘肃省平凉地区庄浪县";
		break;
	case 622727:
		return"甘肃省平凉地区静宁县";
		break;
	case 622800:
		return"甘肃省庆阳地区";
		break;
	case 622801:
		return"甘肃省庆阳地区西峰市";
		break;
	case 622821:
		return"甘肃省庆阳地区庆阳县";
		break;
	case 622822:
		return"甘肃省庆阳地区环县";
		break;
	case 622823:
		return"甘肃省庆阳地区华池县";
		break;
	case 622824:
		return"甘肃省庆阳地区合水县";
		break;
	case 622825:
		return"甘肃省庆阳地区正宁县";
		break;
	case 622826:
		return"甘肃省庆阳地区宁县";
		break;
	case 622827:
		return"甘肃省庆阳地区镇原县";
		break;
	case 622900:
		return"甘肃省临夏回族自治州";
		break;
	case 622901:
		return"甘肃省临夏回族自治州临夏市";
		break;
	case 622921:
		return"甘肃省临夏回族自治州临夏县";
		break;
	case 622922:
		return"甘肃省临夏回族自治州康乐县";
		break;
	case 622923:
		return"甘肃省临夏回族自治州永靖县";
		break;
	case 622924:
		return"甘肃省临夏回族自治州广河县";
		break;
	case 622925:
		return"甘肃省临夏回族自治州和政县";
		break;
	case 622926:
		return"甘肃省临夏回族自治州东乡族自治县";
		break;
	case 622927:
		return"甘肃省临夏回族自治州积石山保安族东乡族撒拉族自治县";
		break;
	case 623000:
		return"甘肃省甘南藏族自治州";
		break;
	case 623001:
		return"甘肃省甘南藏族自治州合作市";
		break;
	case 623021:
		return"甘肃省甘南藏族自治州临潭县";
		break;
	case 623022:
		return"甘肃省甘南藏族自治州卓尼县";
		break;
	case 623023:
		return"甘肃省甘南藏族自治州舟曲县";
		break;
	case 623024:
		return"甘肃省甘南藏族自治州迭部县";
		break;
	case 623025:
		return"甘肃省甘南藏族自治州玛曲县";
		break;
	case 623026:
		return"甘肃省甘南藏族自治州碌曲县";
		break;
	case 623027:
		return"甘肃省甘南藏族自治州夏河县";
		break;
	case 630000:
		return"青海省";
		break;
	case 630100:
		return"青海省西宁市";
		break;
	case 630101:
		return"青海省西宁市市辖区";
		break;
	case 630102:
		return"青海省西宁市城东区";
		break;
	case 630103:
		return"青海省西宁市城中区";
		break;
	case 630104:
		return"青海省西宁市城西区";
		break;
	case 630105:
		return"青海省西宁市城北区";
		break;
	case 630121:
		return"青海省西宁市大通回族土族自治县";
		break;
	case 632100:
		return"青海省海东地区";
		break;
	case 632121:
		return"青海省海东地区平安县";
		break;
	case 632122:
		return"青海省海东地区民和回族土族自治县";
		break;
	case 632123:
		return"青海省海东地区乐都县";
		break;
	case 632124:
		return"青海省海东地区湟中县";
		break;
	case 632125:
		return"青海省海东地区湟源县";
		break;
	case 632126:
		return"青海省海东地区互助土族自治县";
		break;
	case 632127:
		return"青海省海东地区化隆回族自治县";
		break;
	case 632128:
		return"青海省海东地区循化撒拉族自治县";
		break;
	case 632200:
		return"青海省海北藏族自治州";
		break;
	case 632221:
		return"青海省海北藏族自治州门源回族自治县";
		break;
	case 632222:
		return"青海省海北藏族自治州祁连县";
		break;
	case 632223:
		return"青海省海北藏族自治州海晏县";
		break;
	case 632224:
		return"青海省海北藏族自治州刚察县";
		break;
	case 632300:
		return"青海省黄南藏族自治州";
		break;
	case 632321:
		return"青海省黄南藏族自治州同仁县";
		break;
	case 632322:
		return"青海省黄南藏族自治州尖扎县";
		break;
	case 632323:
		return"青海省黄南藏族自治州泽库县";
		break;
	case 632324:
		return"青海省黄南藏族自治州河南蒙古族自治县";
		break;
	case 632500:
		return"青海省海南藏族自治州";
		break;
	case 632521:
		return"青海省海南藏族自治州共和县";
		break;
	case 632522:
		return"青海省海南藏族自治州同德县";
		break;
	case 632523:
		return"青海省海南藏族自治州贵德县";
		break;
	case 632524:
		return"青海省海南藏族自治州兴海县";
		break;
	case 632525:
		return"青海省海南藏族自治州贵南县";
		break;
	case 632600:
		return"青海省果洛藏族自治州";
		break;
	case 632621:
		return"青海省果洛藏族自治州玛沁县";
		break;
	case 632622:
		return"青海省果洛藏族自治州班玛县";
		break;
	case 632623:
		return"青海省果洛藏族自治州甘德县";
		break;
	case 632624:
		return"青海省果洛藏族自治州达日县";
		break;
	case 632625:
		return"青海省果洛藏族自治州久治县";
		break;
	case 632626:
		return"青海省果洛藏族自治州玛多县";
		break;
	case 632700:
		return"青海省玉树藏族自治州";
		break;
	case 632721:
		return"青海省玉树藏族自治州玉树县";
		break;
	case 632722:
		return"青海省玉树藏族自治州杂多县";
		break;
	case 632723:
		return"青海省玉树藏族自治州称多县";
		break;
	case 632724:
		return"青海省玉树藏族自治州治多县";
		break;
	case 632725:
		return"青海省玉树藏族自治州囊谦县";
		break;
	case 632726:
		return"青海省玉树藏族自治州曲麻莱县";
		break;
	case 632800:
		return"青海省海西蒙古族藏族自治州";
		break;
	case 632801:
		return"青海省海西蒙古族藏族自治州格尔木市";
		break;
	case 632802:
		return"青海省海西蒙古族藏族自治州德令哈市";
		break;
	case 632821:
		return"青海省海西蒙古族藏族自治州乌兰县";
		break;
	case 632822:
		return"青海省海西蒙古族藏族自治州都兰县";
		break;
	case 632823:
		return"青海省海西蒙古族藏族自治州天峻县";
		break;
	case 640000:
		return"宁夏回族自治区";
		break;
	case 640100:
		return"宁夏回族自治区银川市";
		break;
	case 640101:
		return"宁夏回族自治区银川市市辖区";
		break;
	case 640102:
		return"宁夏回族自治区银川市城区";
		break;
	case 640103:
		return"宁夏回族自治区银川市新城区";
		break;
	case 640111:
		return"宁夏回族自治区银川市郊区";
		break;
	case 640121:
		return"宁夏回族自治区银川市永宁县";
		break;
	case 640122:
		return"宁夏回族自治区银川市贺兰县";
		break;
	case 640200:
		return"宁夏回族自治区石嘴山市";
		break;
	case 640201:
		return"宁夏回族自治区石嘴山市市辖区";
		break;
	case 640202:
		return"宁夏回族自治区石嘴山市大武口区";
		break;
	case 640203:
		return"宁夏回族自治区石嘴山市石嘴山区";
		break;
	case 640204:
		return"宁夏回族自治区石嘴山市石炭井区";
		break;
	case 640221:
		return"宁夏回族自治区石嘴山市平罗县";
		break;
	case 640222:
		return"宁夏回族自治区石嘴山市陶乐县";
		break;
	case 640223:
		return"宁夏回族自治区石嘴山市惠农县";
		break;
	case 640300:
		return"宁夏回族自治区吴忠市";
		break;
	case 640301:
		return"宁夏回族自治区吴忠市市辖区";
		break;
	case 640302:
		return"宁夏回族自治区吴忠市利通区";
		break;
	case 640321:
		return"宁夏回族自治区吴忠市中卫县";
		break;
	case 640322:
		return"宁夏回族自治区吴忠市中宁县";
		break;
	case 640323:
		return"宁夏回族自治区吴忠市盐池县";
		break;
	case 640324:
		return"宁夏回族自治区吴忠市同心县";
		break;
	case 640381:
		return"宁夏回族自治区吴忠市青铜峡市";
		break;
	case 640382:
		return"宁夏回族自治区吴忠市灵武市";
		break;
	case 642200:
		return"宁夏回族自治区固原地区";
		break;
	case 642221:
		return"宁夏回族自治区固原地区固原县";
		break;
	case 642222:
		return"宁夏回族自治区固原地区海原县";
		break;
	case 642223:
		return"宁夏回族自治区固原地区西吉县";
		break;
	case 642224:
		return"宁夏回族自治区固原地区隆德县";
		break;
	case 642225:
		return"宁夏回族自治区固原地区泾源县";
		break;
	case 642226:
		return"宁夏回族自治区固原地区彭阳县";
		break;
	case 650000:
		return"新疆维吾尔自治区";
		break;
	case 650100:
		return"新疆维吾尔族自治区乌鲁木齐市";
		break;
	case 650101:
		return"新疆维吾尔族自治区乌鲁木齐市市辖区";
		break;
	case 650102:
		return"新疆维吾尔族自治区乌鲁木齐市天山区";
		break;
	case 650103:
		return"新疆维吾尔族自治区乌鲁木齐市沙依巴克区";
		break;
	case 650104:
		return"新疆维吾尔族自治区乌鲁木齐市新市区";
		break;
	case 650105:
		return"新疆维吾尔族自治区乌鲁木齐市水磨沟区";
		break;
	case 650106:
		return"新疆维吾尔族自治区乌鲁木齐市头屯河区";
		break;
	case 650107:
		return"新疆维吾尔族自治区乌鲁木齐市南山矿区";
		break;
	case 650108:
		return"新疆维吾尔族自治区乌鲁木齐市东山区";
		break;
	case 650121:
		return"新疆维吾尔族自治区乌鲁木齐市乌鲁木齐县";
		break;
	case 650200:
		return"新疆维吾尔族自治区克拉玛依市";
		break;
	case 650201:
		return"新疆维吾尔族自治区克拉玛依市市辖区";
		break;
	case 650202:
		return"新疆维吾尔族自治区克拉玛依市独山子区";
		break;
	case 650203:
		return"新疆维吾尔族自治区克拉玛依市克拉玛依区";
		break;
	case 650204:
		return"新疆维吾尔族自治区克拉玛依市白碱滩区";
		break;
	case 650205:
		return"新疆维吾尔族自治区克拉玛依市乌尔禾区";
		break;
	case 652100:
		return"新疆维吾尔族自治区吐鲁番地区";
		break;
	case 652101:
		return"新疆维吾尔族自治区吐鲁番地区吐鲁番市";
		break;
	case 652122:
		return"新疆维吾尔族自治区吐鲁番地区鄯善县";
		break;
	case 652123:
		return"新疆维吾尔族自治区吐鲁番地区托克逊县";
		break;
	case 652200:
		return"新疆维吾尔族自治区哈密地区";
		break;
	case 652201:
		return"新疆维吾尔族自治区哈密地区哈密市";
		break;
	case 652222:
		return"新疆维吾尔族自治区哈密地区巴里坤哈萨克自治县";
		break;
	case 652223:
		return"新疆维吾尔族自治区哈密地区伊吾县";
		break;
	case 652300:
		return"新疆维吾尔族自治区昌吉回族自治州";
		break;
	case 652301:
		return"新疆维吾尔族自治区昌吉回族自治州昌吉市";
		break;
	case 652302:
		return"新疆维吾尔族自治区昌吉回族自治州阜康市";
		break;
	case 652303:
		return"新疆维吾尔族自治区昌吉回族自治州米泉市";
		break;
	case 652323:
		return"新疆维吾尔族自治区昌吉回族自治州呼图壁县";
		break;
	case 652324:
		return"新疆维吾尔族自治区昌吉回族自治州玛纳斯县";
		break;
	case 652325:
		return"新疆维吾尔族自治区昌吉回族自治州奇台县";
		break;
	case 652327:
		return"新疆维吾尔族自治区昌吉回族自治州吉木萨尔县";
		break;
	case 652328:
		return"新疆维吾尔族自治区昌吉回族自治州木垒哈萨克自治县";
		break;
	case 652700:
		return"新疆维吾尔族自治区博尔塔拉蒙古自治州";
		break;
	case 652701:
		return"新疆维吾尔族自治区博尔塔拉蒙古自治州博乐市";
		break;
	case 652722:
		return"新疆维吾尔族自治区博尔塔拉蒙古自治州精河县";
		break;
	case 652723:
		return"新疆维吾尔族自治区博尔塔拉蒙古自治州温泉县";
		break;
	case 652800:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州";
		break;
	case 652801:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州库尔勒市";
		break;
	case 652822:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州轮台县";
		break;
	case 652823:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州尉犁县";
		break;
	case 652824:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州若羌县";
		break;
	case 652825:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州且末县";
		break;
	case 652826:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州焉耆回族自治县";
		break;
	case 652827:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州和静县";
		break;
	case 652828:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州和硕县";
		break;
	case 652829:
		return"新疆维吾尔族自治区巴音郭楞蒙古自治州博湖县";
		break;
	case 652900:
		return"新疆维吾尔族自治区阿克苏地区";
		break;
	case 652901:
		return"新疆维吾尔族自治区阿克苏地区阿克苏市";
		break;
	case 652922:
		return"新疆维吾尔族自治区阿克苏地区温宿县";
		break;
	case 652923:
		return"新疆维吾尔族自治区阿克苏地区库车县";
		break;
	case 652924:
		return"新疆维吾尔族自治区阿克苏地区沙雅县";
		break;
	case 652925:
		return"新疆维吾尔族自治区阿克苏地区新和县";
		break;
	case 652926:
		return"新疆维吾尔族自治区阿克苏地区拜城县";
		break;
	case 652927:
		return"新疆维吾尔族自治区阿克苏地区乌什县";
		break;
	case 652928:
		return"新疆维吾尔族自治区阿克苏地区阿瓦提县";
		break;
	case 652929:
		return"新疆维吾尔族自治区阿克苏地区柯坪县";
		break;
	case 653000:
		return"新疆维吾尔族自治区克孜勒苏柯尔克孜自治州";
		break;
	case 653001:
		return"新疆维吾尔族自治区克孜勒苏柯尔克孜自治州阿图什市";
		break;
	case 653022:
		return"新疆维吾尔族自治区克孜勒苏柯尔克孜自治州阿克陶县";
		break;
	case 653023:
		return"新疆维吾尔族自治区克孜勒苏柯尔克孜自治州阿合奇县";
		break;
	case 653024:
		return"新疆维吾尔族自治区克孜勒苏柯尔克孜自治州乌恰县";
		break;
	case 653100:
		return"新疆维吾尔族自治区喀什地区";
		break;
	case 653101:
		return"新疆维吾尔族自治区喀什地区喀什市";
		break;
	case 653121:
		return"新疆维吾尔族自治区喀什地区疏附县";
		break;
	case 653122:
		return"新疆维吾尔族自治区喀什地区疏勒县";
		break;
	case 653123:
		return"新疆维吾尔族自治区喀什地区英吉沙县";
		break;
	case 653124:
		return"新疆维吾尔族自治区喀什地区泽普县";
		break;
	case 653125:
		return"新疆维吾尔族自治区喀什地区莎车县";
		break;
	case 653126:
		return"新疆维吾尔族自治区喀什地区叶城县";
		break;
	case 653127:
		return"新疆维吾尔族自治区喀什地区麦盖提县";
		break;
	case 653128:
		return"新疆维吾尔族自治区喀什地区岳普湖县";
		break;
	case 653129:
		return"新疆维吾尔族自治区喀什地区伽师县";
		break;
	case 653130:
		return"新疆维吾尔族自治区喀什地区巴楚县";
		break;
	case 653131:
		return"新疆维吾尔族自治区喀什地区塔什库尔干塔吉克自治县";
		break;
	case 653200:
		return"新疆维吾尔族自治区和田地区";
		break;
	case 653201:
		return"新疆维吾尔族自治区和田地区和田市";
		break;
	case 653221:
		return"新疆维吾尔族自治区和田地区和田县";
		break;
	case 653222:
		return"新疆维吾尔族自治区和田地区墨玉县";
		break;
	case 653223:
		return"新疆维吾尔族自治区和田地区皮山县";
		break;
	case 653224:
		return"新疆维吾尔族自治区和田地区洛浦县";
		break;
	case 653225:
		return"新疆维吾尔族自治区和田地区策勒县";
		break;
	case 653226:
		return"新疆维吾尔族自治区和田地区于田县";
		break;
	case 653227:
		return"新疆维吾尔族自治区和田地区民丰县";
		break;
	case 654000:
		return"新疆维吾尔族自治区伊犁哈萨克自治州";
		break;
	case 654001:
		return"新疆维吾尔族自治区伊犁哈萨克自治州奎屯市";
		break;
	case 654100:
		return"新疆维吾尔族自治区伊犁哈萨克自治州伊犁地区";
		break;
	case 654101:
		return"新疆维吾尔族自治区伊犁哈萨克自治州伊宁市";
		break;
	case 654121:
		return"新疆维吾尔族自治区伊犁哈萨克自治州伊宁县";
		break;
	case 654122:
		return"新疆自治区伊犁哈萨克自治州察布查尔锡伯自治县";
		break;
	case 654123:
		return"新疆维吾尔族自治区伊犁哈萨克自治州霍城县";
		break;
	case 654124:
		return"新疆维吾尔族自治区伊犁哈萨克自治州巩留县";
		break;
	case 654125:
		return"新疆维吾尔族自治区伊犁哈萨克自治州新源县";
		break;
	case 654126:
		return"新疆维吾尔族自治区伊犁哈萨克自治州昭苏县";
		break;
	case 654127:
		return"新疆维吾尔族自治区伊犁哈萨克自治州特克斯县";
		break;
	case 654128:
		return"新疆维吾尔族自治区伊犁哈萨克自治州尼勒克县";
		break;
	case 654200:
		return"新疆维吾尔族自治区塔城地区";
		break;
	case 654201:
		return"新疆维吾尔族自治区塔城地区塔城市";
		break;
	case 654202:
		return"新疆维吾尔族自治区塔城地区乌苏市";
		break;
	case 654221:
		return"新疆维吾尔族自治区塔城地区额敏县";
		break;
	case 654223:
		return"新疆维吾尔族自治区塔城地区沙湾县";
		break;
	case 654224:
		return"新疆维吾尔族自治区塔城地区托里县";
		break;
	case 654225:
		return"新疆维吾尔族自治区塔城地区裕民县";
		break;
	case 654226:
		return"新疆维吾尔族自治区塔城地区和布克赛尔蒙古自治县";
		break;
	case 654300:
		return"新疆维吾尔族自治区阿勒泰地区";
		break;
	case 654301:
		return"新疆维吾尔族自治区阿勒泰地区阿勒泰市";
		break;
	case 654321:
		return"新疆维吾尔族自治区阿勒泰地区布尔津县";
		break;
	case 654322:
		return"新疆维吾尔族自治区阿勒泰地区富蕴县";
		break;
	case 654323:
		return"新疆维吾尔族自治区阿勒泰地区福海县";
		break;
	case 654324:
		return"新疆维吾尔族自治区阿勒泰地区哈巴河县";
		break;
	case 654325:
		return"新疆维吾尔族自治区阿勒泰地区青河县";
		break;
	case 654326:
		return"新疆维吾尔族自治区阿勒泰地区吉木乃县";
		break;
	case 659000:
		return"新疆维吾尔族自治区直辖县级行政单位";
		break;
	case 659001:
		return"新疆维吾尔族自治区石河子市";
		break;
	default:
		return"错误";
		break;
	}
}
