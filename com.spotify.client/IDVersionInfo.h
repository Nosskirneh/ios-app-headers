//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IDVersionInfo : NSObject
{
    unsigned long long _major;
    unsigned long long _minor;
    unsigned long long _revision;
}

+ (id)versionInfoWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 revision:(unsigned long long)arg3;
+ (id)versionInfoWithString:(id)arg1;
@property(readonly) unsigned long long revision; // @synthesize revision=_revision;
@property(readonly) unsigned long long minor; // @synthesize minor=_minor;
@property(readonly) unsigned long long major; // @synthesize major=_major;
- (long long)compare:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)stringValue;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 revision:(unsigned long long)arg3;
- (shared_ptr_cdcbacd5)etchObject;
- (shared_ptr_d04dc555)etchVersionInfo;

@end

