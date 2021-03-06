//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAAdDisplayContainer, NSDictionary, NSString;
@protocol IMAVideoDisplay;

@interface IMAStreamRequest : NSObject
{
    IMAAdDisplayContainer *_adDisplayContainer;
    id <IMAVideoDisplay> _videoDisplay;
    NSString *_apiKey;
    NSDictionary *_adTagParameters;
}

@property(copy, nonatomic) NSDictionary *adTagParameters; // @synthesize adTagParameters=_adTagParameters;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(readonly, nonatomic) id <IMAVideoDisplay> videoDisplay; // @synthesize videoDisplay=_videoDisplay;
@property(readonly, nonatomic) IMAAdDisplayContainer *adDisplayContainer; // @synthesize adDisplayContainer=_adDisplayContainer;
- (void).cxx_destruct;
- (id)initWithAdDisplayContainer:(id)arg1 videoDisplay:(id)arg2;

@end

