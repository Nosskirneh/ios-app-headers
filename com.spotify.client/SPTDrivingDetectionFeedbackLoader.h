//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoader;

@interface SPTDrivingDetectionFeedbackLoader : NSObject
{
    SPTDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)createRequestWithDetectionResult:(id)arg1 userResponse:(unsigned long long)arg2;
- (void)deliverDrivingDetectionSurveyUserResponse:(unsigned long long)arg1 forDetectionResult:(id)arg2;
- (id)initWithDataLoader:(id)arg1;

@end

