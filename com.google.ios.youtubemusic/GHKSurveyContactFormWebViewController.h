//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GHKWebViewController.h"

@class GHKConfig, GHKReceiverConfig, GHKUserStates, SUPMetricsReporter;
@protocol GHKSurveyContactFormWebViewControllerDelegate;

@interface GHKSurveyContactFormWebViewController : GHKWebViewController
{
    _Bool _showBackButton;
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKUserStates *_userStates;
}

+ (id)objectionRequires;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool showBackButton; // @synthesize showBackButton=_showBackButton;
- (void).cxx_destruct;
- (void)didTapCloseButton;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)GHK_didTapBackButton;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <GHKSurveyContactFormWebViewControllerDelegate> delegate; // @dynamic delegate;

@end

