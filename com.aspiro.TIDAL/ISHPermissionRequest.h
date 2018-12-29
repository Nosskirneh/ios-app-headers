//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ISHPermissionRequest : NSObject
{
    unsigned long long permissionCategory;
}

+ (id)requestForCategory:(unsigned long long)arg1;
@property(nonatomic) unsigned long long permissionCategory; // @synthesize permissionCategory;
- (_Bool)allowsConfiguration;
- (id)persistentIdentifier;
- (void)setInternalPermissionState:(unsigned long long)arg1;
- (unsigned long long)internalPermissionState;
- (void)requestUserPermissionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)permissionState;

@end
