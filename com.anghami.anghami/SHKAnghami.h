//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

#import "ChooseFriendDelegate-Protocol.h"
#import "LoaderDelegate-Protocol.h"

@class NSString, ShareItemLoader;

@interface SHKAnghami : SHKSharer <ChooseFriendDelegate, LoaderDelegate>
{
    SHKAnghami *_selfRef;
    ShareItemLoader *_loader;
}

+ (_Bool)canShare;
+ (id)sharerTitle;
+ (id)sharerIcon;
@property(retain) ShareItemLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) SHKAnghami *selfRef; // @synthesize selfRef=_selfRef;
- (void).cxx_destruct;
- (void)loadingFinished:(id)arg1;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)choseFriendCanceled;
- (void)choseFriend:(id)arg1 message:(id)arg2;
- (void)choseFriends:(id)arg1 message:(id)arg2;
- (_Bool)send;
- (_Bool)validateItem;
- (void)share;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

