# 数当てゲームプログラム

## 概要
- このプログラムは、4桁の正解数が予め決められ、プレイヤーがその数を推測して当てるゲームです。
- プレイヤーが予想した数を入力し、ヒット数とブロー数をコマンドラインに出力します。
- プレイヤーの予想が正解と一致するまで繰り返します。

## 処理の流れ
1. 正解数を予め決めます。例えば、"1234"が正解の数です。
2. プレイヤーがコマンドラインから予想した数を入力します。
3. 入力された数と正解の数を比較し、ヒット数とブロー数を計算します。
   - ヒット数：予想した数の各桁について、正解の数の同じ桁と値が等しい桁の数
   - ブロー数：予想した数の各桁について、正解の数の違う桁と値が等しい桁の数
4. ヒット数とブロー数をコマンドラインに出力します。
5. プレイヤーの予想が正解と一致するまで、2から4の処理を繰り返します。

## 注意
- 正解の数とプレイヤーの予想の数は、各桁の値が互いに異なる数とします。
- 扱える数字の例：1254、8269
- 扱わない数字の例：1233、5555
