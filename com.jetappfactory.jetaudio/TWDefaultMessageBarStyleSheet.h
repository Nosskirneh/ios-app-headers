//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWMessageBarStyleSheet-Protocol.h"

@class NSString;

@interface TWDefaultMessageBarStyleSheet : NSObject <TWMessageBarStyleSheet>
{
}

+ (id)styleSheet;
+ (void)initialize;
- (id)iconImageForMessageType:(long long)arg1;
- (id)strokeColorForMessageType:(long long)arg1;
- (id)backgroundColorForMessageType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

