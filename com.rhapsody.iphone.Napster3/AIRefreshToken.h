//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIToken.h"

@class NSArray;

@interface AIRefreshToken : AIToken
{
    NSArray *scopes;
}

@property(retain) NSArray *scopes; // @synthesize scopes;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidForScopes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 andScopes:(id)arg2;
- (id)initWithToken:(id)arg1;

@end
