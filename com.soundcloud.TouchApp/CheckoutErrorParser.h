//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ErrorParser-Protocol.h"

@class NSString, SimpleErrorParser;

@interface CheckoutErrorParser : NSObject <ErrorParser>
{
    SimpleErrorParser *_simpleErrorParser;
}

@property(readonly, nonatomic) SimpleErrorParser *simpleErrorParser; // @synthesize simpleErrorParser=_simpleErrorParser;
- (void).cxx_destruct;
- (id)parseErrorsFromResponse:(id)arg1 body:(id)arg2 error:(id)arg3;
- (id)initWithSimpleErrorParser:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

