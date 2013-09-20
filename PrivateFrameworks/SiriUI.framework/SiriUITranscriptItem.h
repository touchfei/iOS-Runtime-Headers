/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class AceObject, NSUUID, UIViewController<SiriUIViewController>;

@interface SiriUITranscriptItem : NSObject {
    AceObject *_aceObject;
    NSUUID *_itemIdentifier;
    UIViewController<SiriUIViewController> *_viewController;
}

@property(retain) AceObject * aceObject;
@property(copy) NSUUID * itemIdentifier;
@property(retain) UIViewController<SiriUIViewController> * viewController;

+ (id)transcriptItemWithAceObject:(id)arg1;

- (void).cxx_destruct;
- (id)aceObject;
- (id)description;
- (id)initWithAceObject:(id)arg1;
- (id)itemIdentifier;
- (void)setAceObject:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end