//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTFamilyProfileInterstitialViewDelegate-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTRendererController-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTFamilyProfileInterstitialView, YTICommand, YTIUnlimitedFamilyProfileInterstitialRenderer;
@protocol YTResponder;

@interface YTFamilyProfileInterstitialViewController : UIViewController <YTFormattedStringLabelDelegate, YTFamilyProfileInterstitialViewDelegate, YTRendererController, YTGraftingViewController>
{
    YTFamilyProfileInterstitialView *_unlimitedFamilyProfileInterstitialView;
    YTIUnlimitedFamilyProfileInterstitialRenderer *_unlimitedFamilyProfileInterstitialRenderer;
    YTICommand *_navEndpointForVE;
    NSMutableArray *_thumbnailControllers;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)loadThumbnails;
- (id)navEndpoint;
- (void)tappedButton:(id)arg1 withRenderer:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)loadWithModel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

