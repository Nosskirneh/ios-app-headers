//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Launcher.h"

@class TaggingContext, UserContentControllerConfiguration;

@interface UserContentLauncher : Launcher
{
    UserContentControllerConfiguration *_configuration;
    TaggingContext *_context;
}

+ (id)storyboardName;
@property(readonly, nonatomic) TaggingContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) UserContentControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserConfiguration:(id)arg1 context:(id)arg2;

@end

