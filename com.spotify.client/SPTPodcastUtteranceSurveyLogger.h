//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter;

@interface SPTPodcastUtteranceSurveyLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSString *_referrerIdentifier;
}

@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithPageURI:(id)arg1 sectionId:(id)arg2 interactionType:(id)arg3 userIntent:(id)arg4;
- (void)logUIImpressionWithPageURI:(id)arg1 sectionId:(id)arg2 impressionType:(id)arg3;
- (id)initWithLogCenter:(id)arg1 referrerIdentifier:(id)arg2;

@end

