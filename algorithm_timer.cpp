void t_ins() {
  int *array;
  int arraysize;
  cout << "how big would be the array?";
  cin >> arraysize;
  array = new int[arraysize];

  cout << "Insertion sort (Random) took ";
  fill_array_random(array, arraysize, 1000, 1000000);

  auto start = chrono::steady_clock::now();
  insertion_sort(array, arraysize); 
  // show_array(array, arraysize);

  auto end = chrono::steady_clock::now();
  cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()
       << endl;

  cout << "Insertion sort (Increasing) took ";
  fill_array_inc(array, arraysize);

  start = chrono::steady_clock::now();
  insertion_sort(array, arraysize);

  end = chrono::steady_clock::now();
  cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()
       << endl;

  cout << "Insertion sort (Decreasing) took ";
  fill_array_dec(array, arraysize);

  start = chrono::steady_clock::now();
  insertion_sort(array, arraysize);
  //  show_array(array, arraysize);

  end = chrono::steady_clock::now();
  cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()
       << endl;
}