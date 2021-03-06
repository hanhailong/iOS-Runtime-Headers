/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIButton, UILabel;

@interface PKPaymentSetupPrivacyFooterView : UIView {
    int _context;
    UIButton *_linkButton;
    UILabel *_message;
}

@property int context;
@property(retain) UIButton * linkButton;
@property(retain) UILabel * message;

- (id)_highlightedStringAttributes;
- (id)_normalStringAttributes;
- (int)context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(int)arg2;
- (void)layoutSubviews;
- (id)linkButton;
- (id)message;
- (void)setContext:(int)arg1;
- (void)setLinkButton:(id)arg1;
- (void)setMessage:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
