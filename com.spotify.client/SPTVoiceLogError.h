//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTVoiceLogError : NSObject
{
    unsigned long long _errorType;
    NSString *_errorText;
}

@property(copy, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (id)initWithErrorType:(unsigned long long)arg1 errorText:(id)arg2;

@end

