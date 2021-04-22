//
//  Created by Sam Westrich
//  Copyright © 2020 Dash Core Group. All rights reserved.
//
//  Licensed under the MIT License (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  https://opensource.org/licenses/MIT
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

typedef const struct checkpoint {
	uint32_t height;
	const char *checkpointHash;
	uint32_t timestamp;
	uint32_t target;
	const char *masternodeListPath;
	const char *merkleRoot;
	const char *chainWork;
} checkpoint;

static checkpoint testnet_checkpoint_array[] = {
    {0, "00000bafbc94add76cb75e2ec92894837288a481e5c005f6563d91623bf8bc2c", 1390666206, 0x1e0ffff0u, "", "", "0000000000000000000000000000000000000000000000000000000000100010"},
    {1500, "000002d7a07979a4d6b24efdda0bbf6e3c03a59c22765a0128a5c53b3888aa28", 1423460945, 0x1e03ffffu, "", "", "000000000000000000000000000000000000000000000000000000009f403ba7"},
    {2000, "000006b9af71c8ac510ff912b632ff91a2e05ab92ba4de9f1ec4be424c4ba636", 1462833216, 0x1e0fffffu, "", "", "00000000000000000000000000000000000000000000000000000001e81159d8"},
    {2999, "0000024bc3f4f4cb30d29827c13d921ad77d2c6072e586c7f60d83c2722cdcc5", 1462856598, 0x1e03ffffu, "", "", "000000000000000000000000000000000000000000000000000000034dd286a4"},
    {4002, "00000534b6b0a7ba8746a412384c9c9bbd492e03e2babd2878f0723981f03978", 1544736464, 0x1e0fffffu, "", "", "00000000000000000000000000000000000000000000000000000003cd92a544"},
    {8000, "0000001618273379c4d96403954480bdf5c522d734f457716db1295d7a3646e0", 1545231876, 0x1d1c3ba6u, "", "", "000000000000000000000000000000000000000000000000000006f4c9b0f637"},
    {15000, "00000000172f1946aad9183732d65aaa117d47c2e86c698940bd942dc7ffccc5", 1546203631, 0x1c19907eu, "", "", "0000000000000000000000000000000000000000000000000000fb8fdcfbec41"},
    {19500, "000000000735c41ba5948fbe6c791d5e28b02e3eff5ea4ac7fecf6d07c488edf", 1546803426, 0x1c0daf28u, "", "", "0000000000000000000000000000000000000000000000000001ab8e4215dc59"},  //important for testInstantSendReceiveTransaction
    {122064, "0000000003fa1af7f55b5cde19da8c8fdb024a881a50794cd1c31e0cb4506b3d", 1561126213, 0x1c0c2849u, "", "", "000000000000000000000000000000000000000000000000006a40236b40b0e8"}, //for tests
    {122088, "0000000007eec28e1459b36de6e54ac81fa2dc2b12a797ac77ee7c7f7a59148f", 1561129080, 0x1c0839adu, "", "", "000000000000000000000000000000000000000000000000006a4265998db1b8"}, //for tests
    {122928, "0000000001d975dfc73df9040e894576f27f6c252f1540b1c092c80353cdb823", 1561247926, 0x1c0b30d2u, "", "", "000000000000000000000000000000000000000000000000006a81a7832f90bd"}, //for tests
    {123000, "000000000577855d5599ce9a89417628233a6ccf3a86b2938b191f3dfed2e63d", 1561258020, 0x1c0d4446u, "", "", "000000000000000000000000000000000000000000000000006a86c80a25f15c"}, //for tests
    {180000, "000000000175f718920ecebd54765faee973975511415f1dd1ef12194518675b", 1569211090, 0x1c025786u, "", "", "000000000000000000000000000000000000000000000000007f95dcdcbb22d6"},
    {300000, "00000059475b2de06486d86c1764ee6058b454eea72a32eb7f900aa94b9d4312", 1588424121, 0x1e0fffffu, "", "", "00000000000000000000000000000000000000000000000001e6f6b99adb1c2b"},
    {370368, "000001702422af778c9d1e16a891f58fbaabb6ff82dea8fc1910ab80552bdf9c", 1598642620, 0x1e02336eu, "", "717beedaa6da0d5c1124b9d0788d040ca18eb1fe6ed49c126ea9a2d30d11921c", "00000000000000000000000000000000000000000000000002239b4ac0e84dc4"}, //for tests
    {414106, "00000674c5269b59d6d3bb6bb08b58add4b3e0eab11136be47bb8e0d4ec86e69", 1609043444, 0x1e0dd96eu, "", "e8c45fabdb650ac2c42105083cb63998142e18be89b61bd034b3714498e6622f", "000000000000000000000000000000000000000000000000022f14058d3b2efc"}  //fork height
};

// blockchain checkpoints - these are also used as starting points for partial chain downloads, so they need to be at
// difficulty transition boundaries in order to verify the block difficulty at the immediately following transition
static checkpoint mainnet_checkpoint_array[] = {
    {0, "00000ffd590b1485b3caadc19b22e6379c733355108f107a430458cdf3407ab6", 1390095618, 0x1e0ffff0u, "", "e0028eb9648db56b1ac77cf090b99048a8007e2bb64b68f092c03c7f56a662c7", "0000000000000000000000000000000000000000000000000000000000100010"},
    {227121, "00000000000455a2b3a2ed5dfb03990043ca0074568b939acec62820e89a6c45", 1425039295, 0x1b1261d6u, "", "", "00000000000000000000000000000000000000000000000021355b4a2f76e1f1"}, //This is the first sync time (aka BIP39 creation time).
    {230000, "0000000000014a26211176f72564e442e01354d70b9bfdc4927f775127f7ccb4", 1425492298, 0x1b0e7bddu, "", "228e067496be60515f35b89a35fadc8bd91ea80f58b9ce2db3b94af36781e343", "00000000000000000000000000000000000000000000000021d5d06e1c6c822f"},

    {340000, "000000000014f4e32be2038272cc074a75467c342e25bfe0b566fabe927240b4", 1442833344, 0x1b1acd73u, "", "", "00000000000000000000000000000000000000000000000034e3620e6971b1b8"},
    {400000, "00000000000132b9afeca5e9a2fdf4477338df6dcff1342300240bc70397c4bb", 1452288263, 0x1b0d642eu, "", "", "00000000000000000000000000000000000000000000000040252b2b3b38ca28"},
    {500000, "000000000002be1cff717f4aa6efc504fa06dc9c453c83773de0b712b8690b7d", 1468042975, 0x1b06a6cfu, "", "", "0000000000000000000000000000000000000000000000006609142fb25f3515"},
    {600000, "000000000000a0b730b5be60e65b4a730d1fdcf1d023c9e42c0e5bf4a059f709", 1483795508, 0x1b00db54u, "", "", "0000000000000000000000000000000000000000000000014711b6a853f7dd94"},
    {620000, "0000000000002e7f2ab6cefe6f63b34c821e7f2f8aa5525c6409dc57677044b4", 1486948317, 0x1b0100c5u, "", "", "000000000000000000000000000000000000000000000001a66418be0738eca2"},
    {640000, "00000000000079dfa97353fd50a420a4425b5e96b1699927da5e89cbabe730bf", 1490098758, 0x1b009c90u, "", "", "0000000000000000000000000000000000000000000000021b9fe97b42a66316"},
    {660000, "000000000000124a71b04fa91cc37e510fabd66f2286491104ecf54f96148275", 1493250273, 0x1a710fe7u, "", "", "0000000000000000000000000000000000000000000000029f6340553c5c2dc3"},
    {680000, "00000000000012b333e5ba8a85895bcafa8ad3674c2fb8b2de98bf3a5f08fa81", 1496400309, 0x1a64bc7au, "", "", "000000000000000000000000000000000000000000000003445c0d4e9d2e2049"},
    {700000, "00000000000002958852d255726d695ecccfbfacfac318a9d0ebc558eecefeb9", 1499552504, 0x1a37e005u, "", "", "0000000000000000000000000000000000000000000000043fa186270b24e45e"},
    {720000, "0000000000000acfc49b67e8e72c6faa2d057720d13b9052161305654b39b281", 1502702260, 0x1a158e98u, "", "", "000000000000000000000000000000000000000000000006805f0f3d9f8a7187"},
    {740000, "00000000000008d0d8a9054072b0272024a01d1920ab4d5a5eb98584930cbd4c", 1505852282, 0x1a0ab756u, "", "", "00000000000000000000000000000000000000000000000bba02927a1eacc86f"},
    {760000, "000000000000011131c4a8c6446e6ce4597a192296ecad0fb47a23ae4b506682", 1508998683, 0x1a014ed1u, "", "", "00000000000000000000000000000000000000000000002cb42ee0f60ddb3d9b"},
    {780000, "0000000000000019c30fd5b13548fe169068cbcedb1efb14a630398c26a0ae3b", 1512146289, 0x19408279u, "", "", "0000000000000000000000000000000000000000000000d80f87019d91a7e5b3"},
    {800000, "000000000000002a702916db91213077926866437a6b63e90548af03647d5df3", 1515298907, 0x193a412au, "", "", "00000000000000000000000000000000000000000000024db269cc7723ab75d2"},
    {820000, "0000000000000006619ae1f0fc453690183f571817ef677a822b76d133ea920b", 1518449736, 0x192ab829u, "", "", "0000000000000000000000000000000000000000000003aa4d4c30ea62280b01"},
    {840000, "000000000000000dfb1273aad00884845ddbde6371f44f3fe1a157d057e7757e", 1521602534, 0x194d5e8eu, "", "", "000000000000000000000000000000000000000000000528408f8f46572a4ede"},
    {860000, "000000000000001ed76fb953e7e96daf7000f657594a909540b0da6aa2252393", 1524751102, 0x1933df60u, "", "", "000000000000000000000000000000000000000000000662e04603d45ee888c2"},
    {880000, "000000000000001c980f140d5ff954581b0b35d680e03f4aeba30505cb1072a6", 1527903835, 0x1962d4edu, "", "", "000000000000000000000000000000000000000000000791b70924e953c256ef"},
    {900000, "000000000000001eedab948c433a50b1131a8e15c8c2beef4be237701feff7b5", 1531055382, 0x1945cebcu, "", "", "0000000000000000000000000000000000000000000008a8ae840f52917fa49d"},
    {920000, "00000000000000341469d7ab5aa190cbf49a19ac69afcf8cfd608d7f8cdf7245", 1534206756, 0x1950c940u, "", "", "0000000000000000000000000000000000000000000009b77333a84f2528943d"},
    {940000, "000000000000001232b541264361386c0ea40ac3f0b72814b48a16a249c5386c", 1537357320, 0x1952e364u, "", "", "000000000000000000000000000000000000000000000ac9399559fe5c2c4495"},
    {960000, "000000000000004a74127b49e7eebbde24253f08677880b4d0fd20c5637ab68c", 1540510859, 0x1965c6b0u, "", "", "000000000000000000000000000000000000000000000c16096182b08f8ce451"},
    {980000, "0000000000000014a649707045782b2fa540492865a253d8beec12de1c69d513", 1543661716, 0x1935793au, "", "", "000000000000000000000000000000000000000000000de16f70813f98add8de"},
    {1000000, "000000000000000c9167ee9675411440e10e9adbc21fb57b88879fc293e9d494", 1546810296, 0x194a441cu, "", "", "000000000000000000000000000000000000000000000f06009e8ebc22f41596"},
    {1020000, "000000000000000ec0df78766bfe87f2414177c64a3960dc0ab06351ba81881e", 1549961482, 0x19469e2au, "", "", "0000000000000000000000000000000000000000000010442011fac56db44009"},
    {1040000, "0000000000000014ddf198355bf1e10dd848465b0296097a520619c73f87e11a", 1553111735, 0x1934898bu, "", "", "0000000000000000000000000000000000000000000011b50754cb72e8a662bf"},
    {1060000, "00000000000000132447e6bac9fe0d7d756851450eab29358787dc05d809bf07", 1556260812, 0x191f6aceu, "", "", "000000000000000000000000000000000000000000001392c164c11ca344daec"},
    {1080000, "00000000000000099c5cc38bac7878f771408537e520a1ef9e31b5c1040d2d2a", 1559412342, 0x192a9588u, "", "", "0000000000000000000000000000000000000000000015a7e09c202c817e33d8"},
    {1088640, "00000000000000112e41e4b3afda8b233b8cc07c532d2eac5de097b68358c43e", 1560773201, 0x1922ae0bu, "ML1088640", "379fd491044a273372a8e901866fbe6ed9bab7ce2de0968a71d38de5d5eac340", "0000000000000000000000000000000000000000000016a12b2d3216341ba998"},
    {1100000, "00000000000000190560ed4b128c156e489fdbe0814bf62c8ab53ab3259d7908", 1562561033, 0x191a9f05u, "", "", "0000000000000000000000000000000000000000000017ffbd499dd0911202a4"},
    {1120000, "0000000000000011103eae768e6a322b991c5c20569d95930b87e1305fa19c75", 1565712301, 0x19200768u, "", "", "000000000000000000000000000000000000000000001a7cca810db5e54e95ca"},
    {1140000, "00000000000000083ac0e592e180487cb237f659a305d2be19e883ed564fe20f", 1568864488, 0x1923198bu, "", "", "000000000000000000000000000000000000000000001ccf1b2b6718aad9bb8d"},
    {1160000, "00000000000000098f985e79ca74ca2cf8c113763f8184011759306945149309", 1572017931, 0x191f3f6eu, "", "", "000000000000000000000000000000000000000000001f9c55ec0edb976f5b91"},
    {1180000, "0000000000000001e1de4be8cafd6b0dc70a16293f8e82bcc41a87d80032ac34", 1575169584, 0x191bb2a5u, "", "", "0000000000000000000000000000000000000000000022627cdba7173758a936"},
    {1200000, "0000000000000005fbc6c64e048be7c29d43e4829f360220cededb73ce84894c", 1578321180, 0x191c82aau, "", "", "0000000000000000000000000000000000000000000025480b80cfaaa03cb202"},
    {1220000, "00000000000000088d62064bf4fde648fe8d573dc93ef38434e81cfe612de78c", 1581472545, 0x190f1e55u, "", "", "000000000000000000000000000000000000000000002892bc088c580f189ec0"},
    {1240000, "000000000000000aa3928f6e2a96284f8540b79af896a5d6c1fec2a942757014", 1584625095, 0x1916f846u, "", "", "000000000000000000000000000000000000000000002be2d3460847285e4525"},
    {1260000, "0000000000000014248d9dd7bf974be79934c6907c7ecdd17b7117fb32471254", 1587777968, 0x19196cf5u, "", "", "000000000000000000000000000000000000000000002f070e3cafbdd9c6ae29"},
    {1280000, "000000000000000f645b651d74ef4c3c32c4cfccb57f0b0d8cf8c74bb28657c9", 1590930959, 0x191566f1u, "", "", "0000000000000000000000000000000000000000000032be4046d20f36f17533"},
    {1300000, "00000000000000089645b1efe2dd9220972f98221b2bb6a4b9126995ad2b211f", 1594082464, 0x191310bau, "", "", "0000000000000000000000000000000000000000000036bfd2be720d00beef7f"},
    {1320000, "00000000000000085c6851916fca710b38b61a8d29007cebe0cdd3e9532fb41a", 1597235050, 0x191832f7u, "", "", "000000000000000000000000000000000000000000003b2ae734f23f675326b8"},
    {1340000, "000000000000000dd95cf5a7f68f227351b9de2d6876aa05de661d9b3e7408c2", 1600387053, 0x19106cfau, "", "", "000000000000000000000000000000000000000000003f8520378bb8baa9b658"},
    {1360000, "000000000000000fbc053861445cc9efdbcb86c293e39f3e474d0692362f4d31", 1603539366, 0x19124c76u, "", "", "0000000000000000000000000000000000000000000043ff52430c7d90bdb5b8"},
    {1400000, "0000000000000009cb41f7c4e584ecd9a8b4fbc56f68948471104b75b2685085", 1609844689, 0x190d3fbfu, "", "", "000000000000000000000000000000000000000000004be2a51a9acad8da4201"},
    {1420000, "0000000000000009c6f8c45f81285d81ff3bb6ba0e60edddcfeb6575233f08e5", 1612995382, 0x1918c895u, "", "", "000000000000000000000000000000000000000000004f4e6346d3343f17a19d"},
    {1440000, "0000000000000010de78b6bfcf66a3a4e41b94d12a26d5738b8695e06a89a910", 1616147964, 0x19291041u, "ML1440000", "6881d8bcd8e028b427ed1696100fd545ed69b41173ca23ecf3645e5f79ac676f", "0000000000000000000000000000000000000000000052cdd78e3c14840708c9"},
};
