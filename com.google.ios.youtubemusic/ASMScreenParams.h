//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMAccountUIParams.h"

@protocol SSOService;

@interface ASMScreenParams : ASMAccountUIParams
{
    id <SSOService> _SSOService;
}

@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1 SSOService:(id)arg2;

@end

