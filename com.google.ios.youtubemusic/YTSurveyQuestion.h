//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, YTICommand, YTIFormattedString;

@interface YTSurveyQuestion : NSObject
{
    int _type;
    int _randomizeOption;
    NSString *_text;
    YTIFormattedString *_learnMore;
    NSArray *_options;
    NSArray *_additionalBeaconURLs;
    NSString *_APIContext;
    double _timeout;
    YTICommand *_adChoicesEndpoint;
}

@property(readonly, nonatomic) YTICommand *adChoicesEndpoint; // @synthesize adChoicesEndpoint=_adChoicesEndpoint;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSString *APIContext; // @synthesize APIContext=_APIContext;
@property(readonly, nonatomic) NSArray *additionalBeaconURLs; // @synthesize additionalBeaconURLs=_additionalBeaconURLs;
@property(readonly, nonatomic) int randomizeOption; // @synthesize randomizeOption=_randomizeOption;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, nonatomic) YTIFormattedString *learnMore; // @synthesize learnMore=_learnMore;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)sortedOptions;
- (id)initWithText:(id)arg1 learnMore:(id)arg2 options:(id)arg3 type:(int)arg4 randomizeOption:(int)arg5 additionalBeaconURLs:(id)arg6 APIContext:(id)arg7 timeout:(double)arg8 adChoicesEndpoint:(id)arg9;

@end

