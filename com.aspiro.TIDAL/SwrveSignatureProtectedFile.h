//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SwrveSignatureErrorListener-Protocol.h"

@class NSString, NSURL;
@protocol SwrveSignatureErrorListener;

@interface SwrveSignatureProtectedFile : NSObject <SwrveSignatureErrorListener>
{
    NSURL *filename;
    NSURL *signatureFilename;
    NSString *key;
    id <SwrveSignatureErrorListener> signatureErrorListener;
}

@property(retain) id <SwrveSignatureErrorListener> signatureErrorListener; // @synthesize signatureErrorListener;
@property(readonly) NSString *key; // @synthesize key;
@property(retain) NSURL *signatureFilename; // @synthesize signatureFilename;
@property(retain) NSURL *filename; // @synthesize filename;
- (void).cxx_destruct;
- (void)signatureError:(id)arg1;
- (id)createHMACWithMD5:(id)arg1;
- (id)readFromFile;
- (void)writeToFile:(id)arg1;
- (id)initFile:(id)arg1 signatureFilename:(id)arg2 usingKey:(id)arg3 signatureErrorListener:(id)arg4;
- (id)initFile:(id)arg1 signatureFilename:(id)arg2 usingKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
