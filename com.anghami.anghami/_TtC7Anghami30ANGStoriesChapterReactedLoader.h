//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@interface _TtC7Anghami30ANGStoriesChapterReactedLoader : Loader
{
    // Error parsing type: , name: postData
    // Error parsing type: , name: reactionType
}

+ (void)startReporting;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)handleErrorWithCode:(id)arg1 dialogDict:(id)arg2 logoff:(_Bool)arg3 warning:(_Bool)arg4 backgroundReauth:(_Bool)arg5 message:(id)arg6;
- (_Bool)processData:(id)arg1;
@property(nonatomic, readonly) int type;
- (id)generateRequest;
@property(nonatomic) _Bool suppressAutomaticServerMessage;

@end
