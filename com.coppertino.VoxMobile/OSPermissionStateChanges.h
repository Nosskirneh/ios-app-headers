//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OSPermissionState;

@interface OSPermissionStateChanges : NSObject
{
    OSPermissionState *_to;
    OSPermissionState *_from;
}

@property(retain) OSPermissionState *from; // @synthesize from=_from;
@property(retain) OSPermissionState *to; // @synthesize to=_to;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)description;

@end

