//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTPlayTokenHandler;

@protocol SPTPlayTokenHandlerObserver <NSObject>

@optional
- (void)playTokenHandler:(SPTPlayTokenHandler *)arg1 tokenLostError:(NSError *)arg2;
@end

