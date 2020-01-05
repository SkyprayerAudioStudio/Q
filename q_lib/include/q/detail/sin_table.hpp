/*=============================================================================
   Copyright (c) 2014-2019 Joel de Guzman. All rights reserved.

   Distributed under the MIT License [ https://opensource.org/licenses/MIT ]
=============================================================================*/
#if !defined(CYCFI_Q_SIN_TABLE_HPP_JANUARY_27_2015)
#define CYCFI_Q_SIN_TABLE_HPP_JANUARY_27_2015

#include <cstdint>
#include <q/support/base.hpp>

namespace cycfi::q::detail
{
   ////////////////////////////////////////////////////////////////////////////
   // Sin lookup table
   ////////////////////////////////////////////////////////////////////////////
   constexpr float sin_table[] =
   {
      0.000000000000000, 0.006135884649154, 0.012271538285720, 0.018406729905805, 0.024541228522912, 0.030674803176637, 0.036807222941359, 0.042938256934941,
      0.049067674327418, 0.055195244349690, 0.061320736302209, 0.067443919563664, 0.073564563599667, 0.079682437971430, 0.085797312344440, 0.091908956497133,
      0.098017140329561, 0.104121633872055, 0.110222207293883, 0.116318630911905, 0.122410675199216, 0.128498110793793, 0.134580708507126, 0.140658239332849,
      0.146730474455362, 0.152797185258443, 0.158858143333861, 0.164913120489970, 0.170961888760301, 0.177004220412149, 0.183039887955141, 0.189068664149806,
      0.195090322016128, 0.201104634842092, 0.207111376192219, 0.213110319916091, 0.219101240156870, 0.225083911359793, 0.231058108280671, 0.237023605994367,
      0.242980179903264, 0.248927605745720, 0.254865659604515, 0.260794117915276, 0.266712757474898, 0.272621355449949, 0.278519689385053, 0.284407537211272,
      0.290284677254462, 0.296150888243624, 0.302005949319228, 0.307849640041535, 0.313681740398892, 0.319502030816016, 0.325310292162263, 0.331106305759876,
      0.336889853392220, 0.342660717311994, 0.348418680249435, 0.354163525420490, 0.359895036534988, 0.365612997804774, 0.371317193951838, 0.377007410216418,
      0.382683432365090, 0.388345046698826, 0.393992040061048, 0.399624199845647, 0.405241314004990, 0.410843171057904, 0.416429560097637, 0.422000270799800,
      0.427555093430282, 0.433093818853152, 0.438616238538528, 0.444122144570429, 0.449611329654607, 0.455083587126344, 0.460538710958240, 0.465976495767966,
      0.471396736825998, 0.476799230063322, 0.482183772079123, 0.487550160148436, 0.492898192229784, 0.498227666972782, 0.503538383725718, 0.508830142543107,
      0.514102744193222, 0.519355990165590, 0.524589682678469, 0.529803624686295, 0.534997619887097, 0.540171472729893, 0.545324988422046, 0.550457972936605,
      0.555570233019602, 0.560661576197336, 0.565731810783613, 0.570780745886967, 0.575808191417845, 0.580813958095765, 0.585797857456439, 0.590759701858874,
      0.595699304492433, 0.600616479383869, 0.605511041404326, 0.610382806276309, 0.615231590580627, 0.620057211763289, 0.624859488142386, 0.629638238914927,
      0.634393284163645, 0.639124444863776, 0.643831542889791, 0.648514401022112, 0.653172842953777, 0.657806693297079, 0.662415777590172, 0.666999922303637,
      0.671558954847018, 0.676092703575316, 0.680600997795453, 0.685083667772700, 0.689540544737067, 0.693971460889654, 0.698376249408973, 0.702754744457225,
      0.707106781186547, 0.711432195745216, 0.715730825283819, 0.720002507961382, 0.724247082951467, 0.728464390448225, 0.732654271672413, 0.736816568877370,
      0.740951125354959, 0.745057785441466, 0.749136394523459, 0.753186799043612, 0.757208846506484, 0.761202385484262, 0.765167265622459, 0.769103337645580,
      0.773010453362737, 0.776888465673232, 0.780737228572094, 0.784556597155575, 0.788346427626606, 0.792106577300212, 0.795836904608883, 0.799537269107905,
      0.803207531480645, 0.806847553543799, 0.810457198252595, 0.814036329705948, 0.817584813151584, 0.821102514991105, 0.824589302785025, 0.828045045257756,
      0.831469612302545, 0.834862874986380, 0.838224705554838, 0.841554977436898, 0.844853565249707, 0.848120344803297, 0.851355193105265, 0.854557988365401,
      0.857728610000272, 0.860866938637767, 0.863972856121587, 0.867046245515693, 0.870086991108711, 0.873094978418290, 0.876070094195406, 0.879012226428633,
      0.881921264348355, 0.884797098430938, 0.887639620402854, 0.890448723244758, 0.893224301195515, 0.895966249756185, 0.898674465693954, 0.901348847046022,
      0.903989293123443, 0.906595704514915, 0.909167983090522, 0.911706032005430, 0.914209755703531, 0.916679059921043, 0.919113851690058, 0.921514039342042,
      0.923879532511287, 0.926210242138311, 0.928506080473215, 0.930766961078984, 0.932992798834739, 0.935183509938947, 0.937339011912575, 0.939459223602190,
      0.941544065183021, 0.943593458161960, 0.945607325380521, 0.947585591017741, 0.949528180593037, 0.951435020969008, 0.953306040354194, 0.955141168305771,
      0.956940335732209, 0.958703474895872, 0.960430519415566, 0.962121404269042, 0.963776065795440, 0.965394441697689, 0.966976471044852, 0.968522094274417,
      0.970031253194544, 0.971503890986252, 0.972939952205560, 0.974339382785576, 0.975702130038529, 0.977028142657754, 0.978317370719628, 0.979569765685441,
      0.980785280403230, 0.981963869109555, 0.983105487431216, 0.984210092386929, 0.985277642388941, 0.986308097244599, 0.987301418157858, 0.988257567730749,
      0.989176509964781, 0.990058210262297, 0.990902635427780, 0.991709753669100, 0.992479534598710, 0.993211949234795, 0.993906970002356, 0.994564570734255,
      0.995184726672197, 0.995767414467660, 0.996312612182778, 0.996820299291166, 0.997290456678690, 0.997723066644192, 0.998118112900149, 0.998475580573295,
      0.998795456205172, 0.999077727752645, 0.999322384588350, 0.999529417501093, 0.999698818696204, 0.999830581795823, 0.999924701839145, 0.999981175282601,
      1.000000000000000, 0.999981175282601, 0.999924701839145, 0.999830581795823, 0.999698818696204, 0.999529417501093, 0.999322384588350, 0.999077727752645,
      0.998795456205172, 0.998475580573295, 0.998118112900149, 0.997723066644192, 0.997290456678690, 0.996820299291166, 0.996312612182778, 0.995767414467660,
      0.995184726672197, 0.994564570734255, 0.993906970002356, 0.993211949234795, 0.992479534598710, 0.991709753669100, 0.990902635427780, 0.990058210262297,
      0.989176509964781, 0.988257567730749, 0.987301418157858, 0.986308097244599, 0.985277642388941, 0.984210092386929, 0.983105487431216, 0.981963869109555,
      0.980785280403230, 0.979569765685441, 0.978317370719628, 0.977028142657754, 0.975702130038529, 0.974339382785576, 0.972939952205560, 0.971503890986252,
      0.970031253194544, 0.968522094274417, 0.966976471044852, 0.965394441697689, 0.963776065795440, 0.962121404269042, 0.960430519415566, 0.958703474895872,
      0.956940335732209, 0.955141168305771, 0.953306040354194, 0.951435020969008, 0.949528180593037, 0.947585591017741, 0.945607325380521, 0.943593458161960,
      0.941544065183021, 0.939459223602190, 0.937339011912575, 0.935183509938948, 0.932992798834739, 0.930766961078984, 0.928506080473216, 0.926210242138311,
      0.923879532511287, 0.921514039342042, 0.919113851690058, 0.916679059921043, 0.914209755703531, 0.911706032005430, 0.909167983090522, 0.906595704514915,
      0.903989293123443, 0.901348847046022, 0.898674465693954, 0.895966249756185, 0.893224301195515, 0.890448723244758, 0.887639620402854, 0.884797098430938,
      0.881921264348355, 0.879012226428634, 0.876070094195407, 0.873094978418290, 0.870086991108711, 0.867046245515693, 0.863972856121587, 0.860866938637767,
      0.857728610000272, 0.854557988365401, 0.851355193105265, 0.848120344803297, 0.844853565249707, 0.841554977436898, 0.838224705554838, 0.834862874986380,
      0.831469612302545, 0.828045045257756, 0.824589302785025, 0.821102514991105, 0.817584813151584, 0.814036329705949, 0.810457198252595, 0.806847553543799,
      0.803207531480645, 0.799537269107905, 0.795836904608884, 0.792106577300212, 0.788346427626606, 0.784556597155575, 0.780737228572095, 0.776888465673232,
      0.773010453362737, 0.769103337645580, 0.765167265622459, 0.761202385484262, 0.757208846506485, 0.753186799043613, 0.749136394523459, 0.745057785441466,
      0.740951125354959, 0.736816568877370, 0.732654271672413, 0.728464390448225, 0.724247082951467, 0.720002507961382, 0.715730825283819, 0.711432195745217,
      0.707106781186548, 0.702754744457225, 0.698376249408973, 0.693971460889654, 0.689540544737067, 0.685083667772700, 0.680600997795453, 0.676092703575316,
      0.671558954847019, 0.666999922303638, 0.662415777590172, 0.657806693297079, 0.653172842953777, 0.648514401022113, 0.643831542889791, 0.639124444863776,
      0.634393284163645, 0.629638238914927, 0.624859488142386, 0.620057211763289, 0.615231590580627, 0.610382806276310, 0.605511041404326, 0.600616479383869,
      0.595699304492433, 0.590759701858874, 0.585797857456439, 0.580813958095765, 0.575808191417845, 0.570780745886967, 0.565731810783613, 0.560661576197336,
      0.555570233019602, 0.550457972936605, 0.545324988422046, 0.540171472729893, 0.534997619887097, 0.529803624686295, 0.524589682678469, 0.519355990165590,
      0.514102744193222, 0.508830142543107, 0.503538383725718, 0.498227666972782, 0.492898192229784, 0.487550160148436, 0.482183772079123, 0.476799230063322,
      0.471396736825998, 0.465976495767966, 0.460538710958240, 0.455083587126344, 0.449611329654607, 0.444122144570429, 0.438616238538528, 0.433093818853152,
      0.427555093430282, 0.422000270799800, 0.416429560097637, 0.410843171057904, 0.405241314004990, 0.399624199845647, 0.393992040061048, 0.388345046698827,
      0.382683432365090, 0.377007410216418, 0.371317193951838, 0.365612997804774, 0.359895036534988, 0.354163525420490, 0.348418680249435, 0.342660717311994,
      0.336889853392220, 0.331106305759876, 0.325310292162263, 0.319502030816016, 0.313681740398891, 0.307849640041535, 0.302005949319228, 0.296150888243624,
      0.290284677254462, 0.284407537211272, 0.278519689385053, 0.272621355449949, 0.266712757474898, 0.260794117915276, 0.254865659604515, 0.248927605745720,
      0.242980179903264, 0.237023605994367, 0.231058108280671, 0.225083911359793, 0.219101240156870, 0.213110319916091, 0.207111376192219, 0.201104634842092,
      0.195090322016129, 0.189068664149806, 0.183039887955141, 0.177004220412149, 0.170961888760301, 0.164913120489970, 0.158858143333861, 0.152797185258444,
      0.146730474455362, 0.140658239332850, 0.134580708507126, 0.128498110793793, 0.122410675199216, 0.116318630911905, 0.110222207293883, 0.104121633872055,
      0.098017140329561, 0.091908956497133, 0.085797312344440, 0.079682437971430, 0.073564563599668, 0.067443919563664, 0.061320736302208, 0.055195244349690,
      0.049067674327418, 0.042938256934941, 0.036807222941359, 0.030674803176637, 0.024541228522912, 0.018406729905805, 0.012271538285720, 0.006135884649155,
      0.000000000000000, -0.006135884649155, -0.012271538285720, -0.018406729905805, -0.024541228522912, -0.030674803176637, -0.036807222941359, -0.042938256934941,
      -0.049067674327418, -0.055195244349690, -0.061320736302208, -0.067443919563664, -0.073564563599667, -0.079682437971430, -0.085797312344440, -0.091908956497133,
      -0.098017140329561, -0.104121633872054, -0.110222207293883, -0.116318630911904, -0.122410675199216, -0.128498110793793, -0.134580708507126, -0.140658239332849,
      -0.146730474455362, -0.152797185258443, -0.158858143333861, -0.164913120489970, -0.170961888760301, -0.177004220412149, -0.183039887955141, -0.189068664149806,
      -0.195090322016128, -0.201104634842092, -0.207111376192219, -0.213110319916091, -0.219101240156870, -0.225083911359793, -0.231058108280671, -0.237023605994367,
      -0.242980179903264, -0.248927605745720, -0.254865659604514, -0.260794117915276, -0.266712757474898, -0.272621355449949, -0.278519689385053, -0.284407537211272,
      -0.290284677254462, -0.296150888243624, -0.302005949319228, -0.307849640041535, -0.313681740398891, -0.319502030816016, -0.325310292162263, -0.331106305759876,
      -0.336889853392220, -0.342660717311994, -0.348418680249435, -0.354163525420490, -0.359895036534988, -0.365612997804774, -0.371317193951837, -0.377007410216418,
      -0.382683432365090, -0.388345046698826, -0.393992040061048, -0.399624199845647, -0.405241314004990, -0.410843171057904, -0.416429560097637, -0.422000270799800,
      -0.427555093430282, -0.433093818853152, -0.438616238538527, -0.444122144570429, -0.449611329654607, -0.455083587126344, -0.460538710958240, -0.465976495767966,
      -0.471396736825998, -0.476799230063322, -0.482183772079123, -0.487550160148436, -0.492898192229784, -0.498227666972782, -0.503538383725717, -0.508830142543107,
      -0.514102744193222, -0.519355990165590, -0.524589682678469, -0.529803624686295, -0.534997619887097, -0.540171472729893, -0.545324988422046, -0.550457972936605,
      -0.555570233019602, -0.560661576197336, -0.565731810783613, -0.570780745886967, -0.575808191417845, -0.580813958095764, -0.585797857456439, -0.590759701858874,
      -0.595699304492433, -0.600616479383869, -0.605511041404325, -0.610382806276309, -0.615231590580627, -0.620057211763289, -0.624859488142386, -0.629638238914927,
      -0.634393284163645, -0.639124444863776, -0.643831542889791, -0.648514401022112, -0.653172842953777, -0.657806693297079, -0.662415777590172, -0.666999922303637,
      -0.671558954847018, -0.676092703575316, -0.680600997795453, -0.685083667772700, -0.689540544737067, -0.693971460889654, -0.698376249408973, -0.702754744457225,
      -0.707106781186547, -0.711432195745216, -0.715730825283818, -0.720002507961382, -0.724247082951467, -0.728464390448225, -0.732654271672413, -0.736816568877370,
      -0.740951125354959, -0.745057785441466, -0.749136394523459, -0.753186799043612, -0.757208846506484, -0.761202385484262, -0.765167265622459, -0.769103337645579,
      -0.773010453362737, -0.776888465673233, -0.780737228572094, -0.784556597155575, -0.788346427626606, -0.792106577300212, -0.795836904608883, -0.799537269107905,
      -0.803207531480645, -0.806847553543799, -0.810457198252595, -0.814036329705948, -0.817584813151584, -0.821102514991105, -0.824589302785025, -0.828045045257755,
      -0.831469612302545, -0.834862874986380, -0.838224705554838, -0.841554977436899, -0.844853565249707, -0.848120344803297, -0.851355193105265, -0.854557988365401,
      -0.857728610000272, -0.860866938637767, -0.863972856121586, -0.867046245515693, -0.870086991108711, -0.873094978418290, -0.876070094195407, -0.879012226428634,
      -0.881921264348355, -0.884797098430938, -0.887639620402854, -0.890448723244758, -0.893224301195515, -0.895966249756185, -0.898674465693954, -0.901348847046022,
      -0.903989293123443, -0.906595704514915, -0.909167983090522, -0.911706032005430, -0.914209755703530, -0.916679059921043, -0.919113851690058, -0.921514039342042,
      -0.923879532511287, -0.926210242138311, -0.928506080473215, -0.930766961078984, -0.932992798834739, -0.935183509938948, -0.937339011912575, -0.939459223602190,
      -0.941544065183021, -0.943593458161960, -0.945607325380521, -0.947585591017741, -0.949528180593037, -0.951435020969008, -0.953306040354194, -0.955141168305771,
      -0.956940335732209, -0.958703474895871, -0.960430519415566, -0.962121404269042, -0.963776065795440, -0.965394441697689, -0.966976471044852, -0.968522094274417,
      -0.970031253194544, -0.971503890986252, -0.972939952205560, -0.974339382785576, -0.975702130038528, -0.977028142657754, -0.978317370719628, -0.979569765685441,
      -0.980785280403230, -0.981963869109555, -0.983105487431216, -0.984210092386929, -0.985277642388941, -0.986308097244599, -0.987301418157858, -0.988257567730749,
      -0.989176509964781, -0.990058210262297, -0.990902635427780, -0.991709753669100, -0.992479534598710, -0.993211949234795, -0.993906970002356, -0.994564570734255,
      -0.995184726672197, -0.995767414467660, -0.996312612182778, -0.996820299291166, -0.997290456678690, -0.997723066644192, -0.998118112900149, -0.998475580573295,
      -0.998795456205172, -0.999077727752645, -0.999322384588349, -0.999529417501093, -0.999698818696204, -0.999830581795823, -0.999924701839145, -0.999981175282601,
      -1.000000000000000, -0.999981175282601, -0.999924701839145, -0.999830581795823, -0.999698818696204, -0.999529417501093, -0.999322384588350, -0.999077727752645,
      -0.998795456205172, -0.998475580573295, -0.998118112900149, -0.997723066644192, -0.997290456678690, -0.996820299291166, -0.996312612182778, -0.995767414467660,
      -0.995184726672197, -0.994564570734255, -0.993906970002356, -0.993211949234795, -0.992479534598710, -0.991709753669100, -0.990902635427780, -0.990058210262297,
      -0.989176509964781, -0.988257567730749, -0.987301418157858, -0.986308097244599, -0.985277642388941, -0.984210092386929, -0.983105487431216, -0.981963869109555,
      -0.980785280403230, -0.979569765685441, -0.978317370719628, -0.977028142657754, -0.975702130038529, -0.974339382785576, -0.972939952205560, -0.971503890986252,
      -0.970031253194544, -0.968522094274417, -0.966976471044852, -0.965394441697689, -0.963776065795440, -0.962121404269042, -0.960430519415566, -0.958703474895872,
      -0.956940335732209, -0.955141168305771, -0.953306040354194, -0.951435020969008, -0.949528180593037, -0.947585591017741, -0.945607325380521, -0.943593458161960,
      -0.941544065183021, -0.939459223602190, -0.937339011912575, -0.935183509938948, -0.932992798834739, -0.930766961078984, -0.928506080473216, -0.926210242138311,
      -0.923879532511287, -0.921514039342042, -0.919113851690058, -0.916679059921043, -0.914209755703531, -0.911706032005430, -0.909167983090522, -0.906595704514916,
      -0.903989293123443, -0.901348847046022, -0.898674465693954, -0.895966249756185, -0.893224301195515, -0.890448723244758, -0.887639620402854, -0.884797098430938,
      -0.881921264348355, -0.879012226428634, -0.876070094195407, -0.873094978418290, -0.870086991108711, -0.867046245515693, -0.863972856121587, -0.860866938637767,
      -0.857728610000272, -0.854557988365401, -0.851355193105265, -0.848120344803297, -0.844853565249707, -0.841554977436899, -0.838224705554838, -0.834862874986380,
      -0.831469612302546, -0.828045045257756, -0.824589302785025, -0.821102514991105, -0.817584813151584, -0.814036329705948, -0.810457198252595, -0.806847553543800,
      -0.803207531480645, -0.799537269107905, -0.795836904608884, -0.792106577300213, -0.788346427626606, -0.784556597155575, -0.780737228572095, -0.776888465673233,
      -0.773010453362737, -0.769103337645580, -0.765167265622459, -0.761202385484262, -0.757208846506485, -0.753186799043613, -0.749136394523460, -0.745057785441466,
      -0.740951125354959, -0.736816568877370, -0.732654271672413, -0.728464390448225, -0.724247082951467, -0.720002507961382, -0.715730825283819, -0.711432195745216,
      -0.707106781186548, -0.702754744457226, -0.698376249408973, -0.693971460889654, -0.689540544737067, -0.685083667772701, -0.680600997795453, -0.676092703575316,
      -0.671558954847019, -0.666999922303638, -0.662415777590172, -0.657806693297079, -0.653172842953777, -0.648514401022112, -0.643831542889791, -0.639124444863776,
      -0.634393284163646, -0.629638238914927, -0.624859488142386, -0.620057211763289, -0.615231590580627, -0.610382806276309, -0.605511041404326, -0.600616479383869,
      -0.595699304492433, -0.590759701858874, -0.585797857456439, -0.580813958095765, -0.575808191417845, -0.570780745886967, -0.565731810783614, -0.560661576197337,
      -0.555570233019602, -0.550457972936605, -0.545324988422047, -0.540171472729893, -0.534997619887097, -0.529803624686295, -0.524589682678469, -0.519355990165590,
      -0.514102744193222, -0.508830142543107, -0.503538383725718, -0.498227666972782, -0.492898192229784, -0.487550160148436, -0.482183772079123, -0.476799230063322,
      -0.471396736825998, -0.465976495767967, -0.460538710958240, -0.455083587126344, -0.449611329654607, -0.444122144570430, -0.438616238538528, -0.433093818853152,
      -0.427555093430283, -0.422000270799800, -0.416429560097637, -0.410843171057904, -0.405241314004990, -0.399624199845647, -0.393992040061048, -0.388345046698827,
      -0.382683432365090, -0.377007410216418, -0.371317193951838, -0.365612997804774, -0.359895036534988, -0.354163525420490, -0.348418680249435, -0.342660717311995,
      -0.336889853392220, -0.331106305759877, -0.325310292162263, -0.319502030816015, -0.313681740398892, -0.307849640041535, -0.302005949319229, -0.296150888243624,
      -0.290284677254462, -0.284407537211272, -0.278519689385054, -0.272621355449949, -0.266712757474899, -0.260794117915276, -0.254865659604514, -0.248927605745720,
      -0.242980179903264, -0.237023605994368, -0.231058108280671, -0.225083911359793, -0.219101240156870, -0.213110319916092, -0.207111376192219, -0.201104634842092,
      -0.195090322016129, -0.189068664149806, -0.183039887955141, -0.177004220412149, -0.170961888760302, -0.164913120489970, -0.158858143333862, -0.152797185258444,
      -0.146730474455362, -0.140658239332849, -0.134580708507126, -0.128498110793794, -0.122410675199216, -0.116318630911905, -0.110222207293883, -0.104121633872055,
      -0.098017140329561, -0.091908956497133, -0.085797312344440, -0.079682437971431, -0.073564563599667, -0.067443919563664, -0.061320736302209, -0.055195244349690,
      -0.049067674327418, -0.042938256934941, -0.036807222941359, -0.030674803176637, -0.024541228522912, -0.018406729905805, -0.012271538285721, -0.006135884649154,
      0.000000000000000
   };

   constexpr float sin_gen(phase ph)
   {
      // q::phase generates from 0 to maximum value (e.g. 0xFFFFFFFF) for the
      // phase::value_type, corresponding to (0 to 2π). We use the highest 10
      // bits for our sin lookup table and the rest of the lowest bits (e.g. 22
      // bits) to interpolate between two values from the table.

      constexpr auto size = sizeof(phase::value_type) * 8;  // e.g. 32
      constexpr auto low_bits = size - 10;                  // e.g. 22
      constexpr auto denom = 1 << low_bits;                 // e.g. 0x400000 (4194304)
      constexpr auto mask = denom - 1;                      // e.g. 0x3FFFFF (4194303)
      constexpr auto factor = 1.0f / denom;                 // e.g. 0.000000238418579

      auto const index = ph.rep >> low_bits;
      auto v1 = sin_table[index];
      auto v2 = sin_table[index + 1];
      return linear_interpolate(v1, v2, (ph.rep & mask) * factor);

      // Note: for speed, we favor multiplication over division, so we
      // multiply by factor, a constexpr evaluating to 1.0f / denom, instead
      // of directly dividing by denom.
   }
}

#endif
