//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIAuthPortalRequest.h"

@class AIToken;

@interface AIExchangeRequest : AIAuthPortalRequest
{
    AIToken *_requestToken;
}

@property(retain) AIToken *requestToken; // @synthesize requestToken=_requestToken;
- (void).cxx_destruct;
- (id)getParameters:(id)arg1;
- (id)initWithToken:(id)arg1;

@end

