void vm(undefined4 *op)
{
  switch(*op) {
  case 0:
    vmPush(op[1]);
    break;
  case 1:
    vmPopVersMemoire(op[1]);
    break;
  case 2:
    vmPushValeurEnMemoire(op[1]);
    break;
  case 3:
    vmPushPopPlusPop();
    break;
  case 4:
    vmPushPopMulPop();
    break;
  case 5:
    verifierNumeroDeSerie(op[1]);
    break;
  default:
    puts("Segmentation fault");
    end(1);
  }
  return;
}
