//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol PDLPerson;

@protocol PDLGroupMember <NSCopying, NSCoding, NSObject>
@property(readonly, nonatomic) id <PDLPerson> person;
@property(readonly, nonatomic) long long type;
@end
