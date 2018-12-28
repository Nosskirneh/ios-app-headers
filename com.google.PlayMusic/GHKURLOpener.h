//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SUPURLOpenerProtocol-Protocol.h"

@class GHKConfig, GHKReceiverConfig, NSString, SUPMetricsReporter;
@protocol GHKURLOpenerDelegate;

@interface GHKURLOpener : NSObject <SUPURLOpenerProtocol>
{
    id <GHKURLOpenerDelegate> _delegate;
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
}

+ (id)objectionRequires;
+ (void)initialize;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <GHKURLOpenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

