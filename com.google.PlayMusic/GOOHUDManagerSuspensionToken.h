//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOHUDSuspensionToken-Protocol.h"

@class NSString, NSUUID;

@interface GOOHUDManagerSuspensionToken : NSObject <GOOHUDSuspensionToken>
{
    NSUUID *_identifier;
    NSString *_category;
}

@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

