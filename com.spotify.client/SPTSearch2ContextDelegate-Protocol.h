//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol EXP_HUBViewModel, SPTSearch2Context;

@protocol SPTSearch2ContextDelegate <NSObject>
- (void)context:(id <SPTSearch2Context>)arg1 didUpdateViewModelFrom:(id <EXP_HUBViewModel>)arg2;

@optional
- (void)context:(id <SPTSearch2Context>)arg1 didUpdateStateFrom:(unsigned long long)arg2;
@end

