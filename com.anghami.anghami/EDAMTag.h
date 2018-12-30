//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMTag : NSObject <NSCoding>
{
    NSString *__guid;
    NSString *__name;
    NSString *__parentGuid;
    int __updateSequenceNum;
    _Bool __guid_isset;
    _Bool __name_isset;
    _Bool __parentGuid_isset;
    _Bool __updateSequenceNum_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetUpdateSequenceNum;
- (_Bool)updateSequenceNumIsSet;
@property(nonatomic, getter=updateSequenceNum, setter=setUpdateSequenceNum:) int updateSequenceNum; // @dynamic updateSequenceNum;
- (void)unsetParentGuid;
- (_Bool)parentGuidIsSet;
@property(retain, nonatomic, getter=parentGuid, setter=setParentGuid:) NSString *parentGuid; // @dynamic parentGuid;
- (void)unsetName;
- (_Bool)nameIsSet;
@property(retain, nonatomic, getter=name, setter=setName:) NSString *name; // @dynamic name;
- (void)unsetGuid;
- (_Bool)guidIsSet;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid; // @dynamic guid;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGuid:(id)arg1 name:(id)arg2 parentGuid:(id)arg3 updateSequenceNum:(int)arg4;

@end
