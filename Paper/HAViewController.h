//
//  HAViewController.h
//  Paper
//
//  Created by Heberti Almeida on 03/02/14.
//  Copyright (c) 2014 Heberti Almeida. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HAViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout>

@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;

@end