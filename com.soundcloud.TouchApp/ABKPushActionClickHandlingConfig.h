//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABKPushActionClickHandlingConfig : NSObject
{
    _Bool _openUrlInWebView;
    NSString *_urlString;
    long long _clickActionType;
}

@property(nonatomic) _Bool openUrlInWebView; // @synthesize openUrlInWebView=_openUrlInWebView;
@property(nonatomic) long long clickActionType; // @synthesize clickActionType=_clickActionType;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (id)initWithPushActionDictionary:(id)arg1;

@end

