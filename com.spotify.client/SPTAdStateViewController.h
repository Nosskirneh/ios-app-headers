//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSString, SPTAdCosmosBridge, SPTAdsViewModel, UITextView;
@protocol SPTAdsManager;

@interface SPTAdStateViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    SPTAdsViewModel *_adsViewModel;
    UITextView *_textView;
    id <SPTAdsManager> _adsManager;
    SPTAdCosmosBridge *_cosmosBridge;
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) SPTAdCosmosBridge *cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak SPTAdsViewModel *adsViewModel; // @synthesize adsViewModel=_adsViewModel;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)mail;
- (void)viewDidLoad;
- (id)initWithAdsViewModel:(id)arg1 adsManager:(id)arg2 cosmosBridge:(id)arg3 username:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

