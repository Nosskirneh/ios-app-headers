//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMLoggerDataProvider-Protocol.h"

@class NSString;

@interface BMDefaultLoggerDataProvider : NSObject <BMLoggerDataProvider>
{
}

- (id)connectionType;
- (_Bool)isIncognitoMode;
- (id)streamingRules;
- (id)featureIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
