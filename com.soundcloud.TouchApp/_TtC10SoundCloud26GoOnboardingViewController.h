//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class _TtC10SoundCloud21GoOnboardingPresenter;

@interface _TtC10SoundCloud26GoOnboardingViewController : BaseViewController
{
    // Error parsing type: , name: presenter
    // Error parsing type: , name: statusBarStyle
    // Error parsing type: , name: isShinyOnboardingActive
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)isDismissible;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long screen;
@property(nonatomic) _Bool isShinyOnboardingActive; // @synthesize isShinyOnboardingActive;
@property(nonatomic, retain) _TtC10SoundCloud21GoOnboardingPresenter *presenter; // @synthesize presenter;

@end
