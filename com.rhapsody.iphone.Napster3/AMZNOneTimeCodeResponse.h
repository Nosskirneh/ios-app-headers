//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIExchangeResponse.h"

@class NSString;

@interface AMZNOneTimeCodeResponse : AIExchangeResponse
{
    NSString *_oneTimeCode;
}

@property(copy, nonatomic) NSString *oneTimeCode; // @synthesize oneTimeCode=_oneTimeCode;
- (void).cxx_destruct;
- (void)parseServerResponse:(id)arg1;

@end

