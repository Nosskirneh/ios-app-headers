//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class SPTNowPlayingContentLayerViewModel;

@interface SPTNowPlayingContentLayerLayout : UICollectionViewFlowLayout
{
    SPTNowPlayingContentLayerViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTNowPlayingContentLayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (struct CGSize)collectionViewContentSize;
- (id)initWithViewModel:(id)arg1;

@end

