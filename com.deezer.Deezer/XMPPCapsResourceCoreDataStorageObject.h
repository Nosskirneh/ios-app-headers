//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, XMPPCapsCoreDataStorageObject;

@interface XMPPCapsResourceCoreDataStorageObject : NSManagedObject
{
}

@property(nonatomic) _Bool haveFailed; // @dynamic haveFailed;

// Remaining properties
@property(retain, nonatomic) XMPPCapsCoreDataStorageObject *caps; // @dynamic caps;
@property(retain, nonatomic) NSString *ext; // @dynamic ext;
@property(retain, nonatomic) NSNumber *failed; // @dynamic failed;
@property(retain, nonatomic) NSString *hashAlgorithm; // @dynamic hashAlgorithm;
@property(retain, nonatomic) NSString *hashStr; // @dynamic hashStr;
@property(retain, nonatomic) NSString *jidStr; // @dynamic jidStr;
@property(retain, nonatomic) NSString *node; // @dynamic node;
@property(retain, nonatomic) NSString *streamBareJidStr; // @dynamic streamBareJidStr;
@property(retain, nonatomic) NSString *ver; // @dynamic ver;

@end
