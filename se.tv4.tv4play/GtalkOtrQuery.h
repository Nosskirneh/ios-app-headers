//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GtalkOtrQuery : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *etag; // @dynamic etag;
@property(nonatomic) _Bool hasEtag; // @dynamic hasEtag;
@property(nonatomic) _Bool hasNosaveDefault; // @dynamic hasNosaveDefault;
@property(nonatomic) _Bool hasNotModified; // @dynamic hasNotModified;
@property(retain, nonatomic) NSMutableArray *itemArray; // @dynamic itemArray;
@property(readonly, nonatomic) unsigned long long itemArray_Count; // @dynamic itemArray_Count;
@property(nonatomic) _Bool nosaveDefault; // @dynamic nosaveDefault;
@property(nonatomic) _Bool notModified; // @dynamic notModified;

@end

