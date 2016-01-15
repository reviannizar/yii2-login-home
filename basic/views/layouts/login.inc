<?php 
use yii\helpers\Html;
use yii\bootstrap\ActiveForm;
use app\models\LoginForm;
$model = new LoginForm();
?>
<div class="clearfix form" style="min-height:0; min-width:300px; padding:15px 20px 0 20px;background-color: rgba(255,255,255,0.8);">
<?php $form = ActiveForm::begin([
	'id' => 'login-form',
	'action' => ['/site/login'],
	'fieldConfig' => ['template' => "<div class=\"form-group has-feedback\">{input}</div>\n<div class=\"errorMessage\">{error}</div>",],
]); ?>
<div class="login-fields">
<p style="color:#007">Username / e-mail</p>
	<?= $form->field($model, 'username',['inputOptions' => ['class' => 'form-control username-field','placeholder'=>'Username'],'inputTemplate'=>'{input}<span class="username-icon form-control-feedback"></span>',]) ?>
	<?= $form->field($model, 'password',['inputOptions' => ['class' => 'form-control password-field','placeholder'=>'Password'],'inputTemplate'=>'{input}<span class="password-icon form-control-feedback"></span>',])->passwordInput() ?>
</div>
<div class="login-actions">	
	<?= $form->field($model, 'rememberMe',['template' => "<span class=\"login-checkbox\">{input}<label for=\"loginform-rememberme\" style=\"font-weight:normal\">Remember Me</label></span>\n"])->checkbox([],false) ?>
	<div class="pull-right">
	<?= Html::submitButton('Sign In', ['style'=>'margin-top:10px','class'=>'btn btn-warning btn-large','name'=>'login-button',]) ?>
	</div>
</div>	
<?php ActiveForm::end(); ?>
</div>
