//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicViewController.h"

@class GPMButton, GPMQuizCollectionViewController;

@interface GPMQuizViewController : MusicViewController
{
    GPMQuizCollectionViewController *_collectionVC;
    GPMButton *_bottomButton;
}

@property(retain, nonatomic) GPMButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) GPMQuizCollectionViewController *collectionVC; // @synthesize collectionVC=_collectionVC;
- (void).cxx_destruct;
- (id)navigationPrimaryScrollView;
- (id)navigationStyle;
- (void)close;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

