//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTLogCenter;

@interface SPTRecoverAccountCollectEmailViewLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionWithIntent:(id)arg1;
- (void)logImpressionWithSectionId:(id)arg1;
- (void)logSkipInteraction;
- (void)logSubmitInteraction;
- (void)logValidEmailImpression;
- (void)logCollectEmailDialogImpression;
- (id)initWithLogCenter:(id)arg1;

@end

